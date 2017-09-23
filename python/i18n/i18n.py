#!/usr/bin/env python

import gettext

# Set up message catalog access
translated_strings = gettext.translation('gettext_example', 'translations', fallback=True)
i18n = translated_strings.ugettext

print
print "\tRUN as 'LANG=de python i18n.py'\n"
print "\t", i18n("What's up?")
print
