sed -Ee's/([@ ])/\n\1/g' | sed -Ene's/.*@([[:alpha:]]+).*/\1/p' | sort | uniq
