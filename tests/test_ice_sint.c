#include <criterion/criterion.h>

char *ice_sint(int nb);

Test (ice_sint, nb) {
    cr_assert_str_eq(ice_sint(89), "89");
}