FILE="main.c"

sed -i 's/\bfloat\b/double/g' ${FILE}
sed -i 's/%f/%lf/g' ${FILE}
