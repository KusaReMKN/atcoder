#!/bin/sh
grep -E '^x?x?(oxx)*(ox?)?$' >/dev/null && echo Yes || echo No
