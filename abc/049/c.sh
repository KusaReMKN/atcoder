#!/bin/sh
grep -E '^(dream(er)?|eraser?)*$' >/dev/null && echo YES || echo NO
