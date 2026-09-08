// Lean compiler output
// Module: ShannonBounds.PortRealisation
// Imports: public import Init public meta import Init public import ShannonBounds.Layered
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* lp_mathlib_Multiset_sub___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_Xstar___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lp_mathlib_Finset_image___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_toCtorIdx(uint8_t);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_toCtorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_B_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_B_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_B_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_B_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_N_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_N_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_N_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_N_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_A_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_A_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_A_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_A_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_D_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_D_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_D_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_D_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_O_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_O_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_O_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_O_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_H_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_H_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_H_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_H_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_V_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_V_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_V_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_V_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_Letter_ofNat(lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_instDecidableEqLetter(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_instDecidableEqLetter___boxed(lean_object*, lean_object*);
static const lean_ctor_object lp_ShannonBounds_ShannonBounds_Letter_enumList___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_ShannonBounds_ShannonBounds_Letter_enumList___closed__0 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_Letter_enumList___closed__0_value;
static const lean_ctor_object lp_ShannonBounds_ShannonBounds_Letter_enumList___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_Letter_enumList___closed__0_value)}};
static const lean_object* lp_ShannonBounds_ShannonBounds_Letter_enumList___closed__1 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_Letter_enumList___closed__1_value;
static const lean_ctor_object lp_ShannonBounds_ShannonBounds_Letter_enumList___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_Letter_enumList___closed__1_value)}};
static const lean_object* lp_ShannonBounds_ShannonBounds_Letter_enumList___closed__2 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_Letter_enumList___closed__2_value;
static const lean_ctor_object lp_ShannonBounds_ShannonBounds_Letter_enumList___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_Letter_enumList___closed__2_value)}};
static const lean_object* lp_ShannonBounds_ShannonBounds_Letter_enumList___closed__3 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_Letter_enumList___closed__3_value;
static const lean_ctor_object lp_ShannonBounds_ShannonBounds_Letter_enumList___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_Letter_enumList___closed__3_value)}};
static const lean_object* lp_ShannonBounds_ShannonBounds_Letter_enumList___closed__4 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_Letter_enumList___closed__4_value;
static const lean_ctor_object lp_ShannonBounds_ShannonBounds_Letter_enumList___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_Letter_enumList___closed__4_value)}};
static const lean_object* lp_ShannonBounds_ShannonBounds_Letter_enumList___closed__5 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_Letter_enumList___closed__5_value;
static const lean_ctor_object lp_ShannonBounds_ShannonBounds_Letter_enumList___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_Letter_enumList___closed__5_value)}};
static const lean_object* lp_ShannonBounds_ShannonBounds_Letter_enumList___closed__6 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_Letter_enumList___closed__6_value;
LEAN_EXPORT const lean_object* lp_ShannonBounds_ShannonBounds_Letter_enumList = (const lean_object*)&lp_ShannonBounds_ShannonBounds_Letter_enumList___closed__6_value;
LEAN_EXPORT const lean_object* lp_ShannonBounds_ShannonBounds_instFintypeLetter = (const lean_object*)&lp_ShannonBounds_ShannonBounds_Letter_enumList___closed__6_value;
static const lean_string_object lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "ShannonBounds.Letter.B"};
static const lean_object* lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__0 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__0_value;
static const lean_ctor_object lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__0_value)}};
static const lean_object* lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__1 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__1_value;
static const lean_string_object lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "ShannonBounds.Letter.N"};
static const lean_object* lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__2 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__2_value;
static const lean_ctor_object lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__2_value)}};
static const lean_object* lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__3 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__3_value;
static const lean_string_object lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "ShannonBounds.Letter.A"};
static const lean_object* lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__4 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__4_value;
static const lean_ctor_object lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__4_value)}};
static const lean_object* lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__5 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__5_value;
static const lean_string_object lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "ShannonBounds.Letter.D"};
static const lean_object* lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__6 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__6_value;
static const lean_ctor_object lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__6_value)}};
static const lean_object* lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__7 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__7_value;
static const lean_string_object lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "ShannonBounds.Letter.O"};
static const lean_object* lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__8 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__8_value;
static const lean_ctor_object lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__8_value)}};
static const lean_object* lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__9 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__9_value;
static const lean_string_object lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "ShannonBounds.Letter.H"};
static const lean_object* lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__10 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__10_value;
static const lean_ctor_object lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__10_value)}};
static const lean_object* lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__11 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__11_value;
static const lean_string_object lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "ShannonBounds.Letter.V"};
static const lean_object* lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__12 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__12_value;
static const lean_ctor_object lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__12_value)}};
static const lean_object* lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__13 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__13_value;
static lean_once_cell_t lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__14;
static lean_once_cell_t lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__15;
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_instReprLetter_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_instReprLetter_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_ShannonBounds_ShannonBounds_instReprLetter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_instReprLetter_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ShannonBounds_ShannonBounds_instReprLetter___closed__0 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_instReprLetter___closed__0_value;
LEAN_EXPORT const lean_object* lp_ShannonBounds_ShannonBounds_instReprLetter = (const lean_object*)&lp_ShannonBounds_ShannonBounds_instReprLetter___closed__0_value;
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_Letter_sep(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_sep___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_fam___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_fam___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_fam(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_fam___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds___private_ShannonBounds_PortRealisation_0__ShannonBounds_Letter_sep_match__1_splitter___redArg(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds___private_ShannonBounds_PortRealisation_0__ShannonBounds_Letter_sep_match__1_splitter___redArg___boxed(lean_object**);
LEAN_EXPORT lean_object* lp_ShannonBounds___private_ShannonBounds_PortRealisation_0__ShannonBounds_Letter_sep_match__1_splitter(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds___private_ShannonBounds_PortRealisation_0__ShannonBounds_Letter_sep_match__1_splitter___boxed(lean_object**);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_toRealisation___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_toRealisation(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_toRealisation___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_ctorIdx(uint8_t v_x_1_){
_start:
{
switch(v_x_1_)
{
case 0:
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
case 1:
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
case 2:
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
case 3:
{
lean_object* v___x_5_; 
v___x_5_ = lean_unsigned_to_nat(3u);
return v___x_5_;
}
case 4:
{
lean_object* v___x_6_; 
v___x_6_ = lean_unsigned_to_nat(4u);
return v___x_6_;
}
case 5:
{
lean_object* v___x_7_; 
v___x_7_ = lean_unsigned_to_nat(5u);
return v___x_7_;
}
default: 
{
lean_object* v___x_8_; 
v___x_8_ = lean_unsigned_to_nat(6u);
return v___x_8_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_ctorIdx___boxed(lean_object* v_x_9_){
_start:
{
uint8_t v_x_boxed_10_; lean_object* v_res_11_; 
v_x_boxed_10_ = lean_unbox(v_x_9_);
v_res_11_ = lp_ShannonBounds_ShannonBounds_Letter_ctorIdx(v_x_boxed_10_);
return v_res_11_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_toCtorIdx(uint8_t v_x_12_){
_start:
{
lean_object* v___x_13_; 
v___x_13_ = lp_ShannonBounds_ShannonBounds_Letter_ctorIdx(v_x_12_);
return v___x_13_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_toCtorIdx___boxed(lean_object* v_x_14_){
_start:
{
uint8_t v_x_4__boxed_15_; lean_object* v_res_16_; 
v_x_4__boxed_15_ = lean_unbox(v_x_14_);
v_res_16_ = lp_ShannonBounds_ShannonBounds_Letter_toCtorIdx(v_x_4__boxed_15_);
return v_res_16_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_ctorElim___redArg(lean_object* v_k_17_){
_start:
{
lean_inc(v_k_17_);
return v_k_17_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_ctorElim___redArg___boxed(lean_object* v_k_18_){
_start:
{
lean_object* v_res_19_; 
v_res_19_ = lp_ShannonBounds_ShannonBounds_Letter_ctorElim___redArg(v_k_18_);
lean_dec(v_k_18_);
return v_res_19_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_ctorElim(lean_object* v_motive_20_, lean_object* v_ctorIdx_21_, uint8_t v_t_22_, lean_object* v_h_23_, lean_object* v_k_24_){
_start:
{
lean_inc(v_k_24_);
return v_k_24_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_ctorElim___boxed(lean_object* v_motive_25_, lean_object* v_ctorIdx_26_, lean_object* v_t_27_, lean_object* v_h_28_, lean_object* v_k_29_){
_start:
{
uint8_t v_t_boxed_30_; lean_object* v_res_31_; 
v_t_boxed_30_ = lean_unbox(v_t_27_);
v_res_31_ = lp_ShannonBounds_ShannonBounds_Letter_ctorElim(v_motive_25_, v_ctorIdx_26_, v_t_boxed_30_, v_h_28_, v_k_29_);
lean_dec(v_k_29_);
lean_dec(v_ctorIdx_26_);
return v_res_31_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_B_elim___redArg(lean_object* v_B_32_){
_start:
{
lean_inc(v_B_32_);
return v_B_32_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_B_elim___redArg___boxed(lean_object* v_B_33_){
_start:
{
lean_object* v_res_34_; 
v_res_34_ = lp_ShannonBounds_ShannonBounds_Letter_B_elim___redArg(v_B_33_);
lean_dec(v_B_33_);
return v_res_34_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_B_elim(lean_object* v_motive_35_, uint8_t v_t_36_, lean_object* v_h_37_, lean_object* v_B_38_){
_start:
{
lean_inc(v_B_38_);
return v_B_38_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_B_elim___boxed(lean_object* v_motive_39_, lean_object* v_t_40_, lean_object* v_h_41_, lean_object* v_B_42_){
_start:
{
uint8_t v_t_boxed_43_; lean_object* v_res_44_; 
v_t_boxed_43_ = lean_unbox(v_t_40_);
v_res_44_ = lp_ShannonBounds_ShannonBounds_Letter_B_elim(v_motive_39_, v_t_boxed_43_, v_h_41_, v_B_42_);
lean_dec(v_B_42_);
return v_res_44_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_N_elim___redArg(lean_object* v_N_45_){
_start:
{
lean_inc(v_N_45_);
return v_N_45_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_N_elim___redArg___boxed(lean_object* v_N_46_){
_start:
{
lean_object* v_res_47_; 
v_res_47_ = lp_ShannonBounds_ShannonBounds_Letter_N_elim___redArg(v_N_46_);
lean_dec(v_N_46_);
return v_res_47_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_N_elim(lean_object* v_motive_48_, uint8_t v_t_49_, lean_object* v_h_50_, lean_object* v_N_51_){
_start:
{
lean_inc(v_N_51_);
return v_N_51_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_N_elim___boxed(lean_object* v_motive_52_, lean_object* v_t_53_, lean_object* v_h_54_, lean_object* v_N_55_){
_start:
{
uint8_t v_t_boxed_56_; lean_object* v_res_57_; 
v_t_boxed_56_ = lean_unbox(v_t_53_);
v_res_57_ = lp_ShannonBounds_ShannonBounds_Letter_N_elim(v_motive_52_, v_t_boxed_56_, v_h_54_, v_N_55_);
lean_dec(v_N_55_);
return v_res_57_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_A_elim___redArg(lean_object* v_A_58_){
_start:
{
lean_inc(v_A_58_);
return v_A_58_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_A_elim___redArg___boxed(lean_object* v_A_59_){
_start:
{
lean_object* v_res_60_; 
v_res_60_ = lp_ShannonBounds_ShannonBounds_Letter_A_elim___redArg(v_A_59_);
lean_dec(v_A_59_);
return v_res_60_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_A_elim(lean_object* v_motive_61_, uint8_t v_t_62_, lean_object* v_h_63_, lean_object* v_A_64_){
_start:
{
lean_inc(v_A_64_);
return v_A_64_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_A_elim___boxed(lean_object* v_motive_65_, lean_object* v_t_66_, lean_object* v_h_67_, lean_object* v_A_68_){
_start:
{
uint8_t v_t_boxed_69_; lean_object* v_res_70_; 
v_t_boxed_69_ = lean_unbox(v_t_66_);
v_res_70_ = lp_ShannonBounds_ShannonBounds_Letter_A_elim(v_motive_65_, v_t_boxed_69_, v_h_67_, v_A_68_);
lean_dec(v_A_68_);
return v_res_70_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_D_elim___redArg(lean_object* v_D_71_){
_start:
{
lean_inc(v_D_71_);
return v_D_71_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_D_elim___redArg___boxed(lean_object* v_D_72_){
_start:
{
lean_object* v_res_73_; 
v_res_73_ = lp_ShannonBounds_ShannonBounds_Letter_D_elim___redArg(v_D_72_);
lean_dec(v_D_72_);
return v_res_73_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_D_elim(lean_object* v_motive_74_, uint8_t v_t_75_, lean_object* v_h_76_, lean_object* v_D_77_){
_start:
{
lean_inc(v_D_77_);
return v_D_77_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_D_elim___boxed(lean_object* v_motive_78_, lean_object* v_t_79_, lean_object* v_h_80_, lean_object* v_D_81_){
_start:
{
uint8_t v_t_boxed_82_; lean_object* v_res_83_; 
v_t_boxed_82_ = lean_unbox(v_t_79_);
v_res_83_ = lp_ShannonBounds_ShannonBounds_Letter_D_elim(v_motive_78_, v_t_boxed_82_, v_h_80_, v_D_81_);
lean_dec(v_D_81_);
return v_res_83_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_O_elim___redArg(lean_object* v_O_84_){
_start:
{
lean_inc(v_O_84_);
return v_O_84_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_O_elim___redArg___boxed(lean_object* v_O_85_){
_start:
{
lean_object* v_res_86_; 
v_res_86_ = lp_ShannonBounds_ShannonBounds_Letter_O_elim___redArg(v_O_85_);
lean_dec(v_O_85_);
return v_res_86_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_O_elim(lean_object* v_motive_87_, uint8_t v_t_88_, lean_object* v_h_89_, lean_object* v_O_90_){
_start:
{
lean_inc(v_O_90_);
return v_O_90_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_O_elim___boxed(lean_object* v_motive_91_, lean_object* v_t_92_, lean_object* v_h_93_, lean_object* v_O_94_){
_start:
{
uint8_t v_t_boxed_95_; lean_object* v_res_96_; 
v_t_boxed_95_ = lean_unbox(v_t_92_);
v_res_96_ = lp_ShannonBounds_ShannonBounds_Letter_O_elim(v_motive_91_, v_t_boxed_95_, v_h_93_, v_O_94_);
lean_dec(v_O_94_);
return v_res_96_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_H_elim___redArg(lean_object* v_H_97_){
_start:
{
lean_inc(v_H_97_);
return v_H_97_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_H_elim___redArg___boxed(lean_object* v_H_98_){
_start:
{
lean_object* v_res_99_; 
v_res_99_ = lp_ShannonBounds_ShannonBounds_Letter_H_elim___redArg(v_H_98_);
lean_dec(v_H_98_);
return v_res_99_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_H_elim(lean_object* v_motive_100_, uint8_t v_t_101_, lean_object* v_h_102_, lean_object* v_H_103_){
_start:
{
lean_inc(v_H_103_);
return v_H_103_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_H_elim___boxed(lean_object* v_motive_104_, lean_object* v_t_105_, lean_object* v_h_106_, lean_object* v_H_107_){
_start:
{
uint8_t v_t_boxed_108_; lean_object* v_res_109_; 
v_t_boxed_108_ = lean_unbox(v_t_105_);
v_res_109_ = lp_ShannonBounds_ShannonBounds_Letter_H_elim(v_motive_104_, v_t_boxed_108_, v_h_106_, v_H_107_);
lean_dec(v_H_107_);
return v_res_109_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_V_elim___redArg(lean_object* v_V_110_){
_start:
{
lean_inc(v_V_110_);
return v_V_110_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_V_elim___redArg___boxed(lean_object* v_V_111_){
_start:
{
lean_object* v_res_112_; 
v_res_112_ = lp_ShannonBounds_ShannonBounds_Letter_V_elim___redArg(v_V_111_);
lean_dec(v_V_111_);
return v_res_112_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_V_elim(lean_object* v_motive_113_, uint8_t v_t_114_, lean_object* v_h_115_, lean_object* v_V_116_){
_start:
{
lean_inc(v_V_116_);
return v_V_116_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_V_elim___boxed(lean_object* v_motive_117_, lean_object* v_t_118_, lean_object* v_h_119_, lean_object* v_V_120_){
_start:
{
uint8_t v_t_boxed_121_; lean_object* v_res_122_; 
v_t_boxed_121_ = lean_unbox(v_t_118_);
v_res_122_ = lp_ShannonBounds_ShannonBounds_Letter_V_elim(v_motive_117_, v_t_boxed_121_, v_h_119_, v_V_120_);
lean_dec(v_V_120_);
return v_res_122_;
}
}
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_Letter_ofNat(lean_object* v_n_123_){
_start:
{
lean_object* v___x_124_; uint8_t v___x_125_; 
v___x_124_ = lean_unsigned_to_nat(2u);
v___x_125_ = lean_nat_dec_le(v_n_123_, v___x_124_);
if (v___x_125_ == 0)
{
lean_object* v___x_126_; uint8_t v___x_127_; 
v___x_126_ = lean_unsigned_to_nat(4u);
v___x_127_ = lean_nat_dec_le(v_n_123_, v___x_126_);
if (v___x_127_ == 0)
{
lean_object* v___x_128_; uint8_t v___x_129_; 
v___x_128_ = lean_unsigned_to_nat(5u);
v___x_129_ = lean_nat_dec_le(v_n_123_, v___x_128_);
if (v___x_129_ == 0)
{
uint8_t v___x_130_; 
v___x_130_ = 6;
return v___x_130_;
}
else
{
uint8_t v___x_131_; 
v___x_131_ = 5;
return v___x_131_;
}
}
else
{
lean_object* v___x_132_; uint8_t v___x_133_; 
v___x_132_ = lean_unsigned_to_nat(3u);
v___x_133_ = lean_nat_dec_le(v_n_123_, v___x_132_);
if (v___x_133_ == 0)
{
uint8_t v___x_134_; 
v___x_134_ = 4;
return v___x_134_;
}
else
{
uint8_t v___x_135_; 
v___x_135_ = 3;
return v___x_135_;
}
}
}
else
{
lean_object* v___x_136_; uint8_t v___x_137_; 
v___x_136_ = lean_unsigned_to_nat(0u);
v___x_137_ = lean_nat_dec_le(v_n_123_, v___x_136_);
if (v___x_137_ == 0)
{
lean_object* v___x_138_; uint8_t v___x_139_; 
v___x_138_ = lean_unsigned_to_nat(1u);
v___x_139_ = lean_nat_dec_le(v_n_123_, v___x_138_);
if (v___x_139_ == 0)
{
uint8_t v___x_140_; 
v___x_140_ = 2;
return v___x_140_;
}
else
{
uint8_t v___x_141_; 
v___x_141_ = 1;
return v___x_141_;
}
}
else
{
uint8_t v___x_142_; 
v___x_142_ = 0;
return v___x_142_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_ofNat___boxed(lean_object* v_n_143_){
_start:
{
uint8_t v_res_144_; lean_object* v_r_145_; 
v_res_144_ = lp_ShannonBounds_ShannonBounds_Letter_ofNat(v_n_143_);
lean_dec(v_n_143_);
v_r_145_ = lean_box(v_res_144_);
return v_r_145_;
}
}
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_instDecidableEqLetter(uint8_t v_x_146_, uint8_t v_y_147_){
_start:
{
lean_object* v___x_148_; lean_object* v___x_149_; uint8_t v___x_150_; 
v___x_148_ = lp_ShannonBounds_ShannonBounds_Letter_ctorIdx(v_x_146_);
v___x_149_ = lp_ShannonBounds_ShannonBounds_Letter_ctorIdx(v_y_147_);
v___x_150_ = lean_nat_dec_eq(v___x_148_, v___x_149_);
lean_dec(v___x_149_);
lean_dec(v___x_148_);
return v___x_150_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_instDecidableEqLetter___boxed(lean_object* v_x_151_, lean_object* v_y_152_){
_start:
{
uint8_t v_x_13__boxed_153_; uint8_t v_y_14__boxed_154_; uint8_t v_res_155_; lean_object* v_r_156_; 
v_x_13__boxed_153_ = lean_unbox(v_x_151_);
v_y_14__boxed_154_ = lean_unbox(v_y_152_);
v_res_155_ = lp_ShannonBounds_ShannonBounds_instDecidableEqLetter(v_x_13__boxed_153_, v_y_14__boxed_154_);
v_r_156_ = lean_box(v_res_155_);
return v_r_156_;
}
}
static lean_object* _init_lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__14(void){
_start:
{
lean_object* v___x_208_; lean_object* v___x_209_; 
v___x_208_ = lean_unsigned_to_nat(2u);
v___x_209_ = lean_nat_to_int(v___x_208_);
return v___x_209_;
}
}
static lean_object* _init_lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__15(void){
_start:
{
lean_object* v___x_210_; lean_object* v___x_211_; 
v___x_210_ = lean_unsigned_to_nat(1u);
v___x_211_ = lean_nat_to_int(v___x_210_);
return v___x_211_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_instReprLetter_repr(uint8_t v_x_212_, lean_object* v_prec_213_){
_start:
{
lean_object* v___y_215_; lean_object* v___y_222_; lean_object* v___y_229_; lean_object* v___y_236_; lean_object* v___y_243_; lean_object* v___y_250_; lean_object* v___y_257_; 
switch(v_x_212_)
{
case 0:
{
lean_object* v___x_263_; uint8_t v___x_264_; 
v___x_263_ = lean_unsigned_to_nat(1024u);
v___x_264_ = lean_nat_dec_le(v___x_263_, v_prec_213_);
if (v___x_264_ == 0)
{
lean_object* v___x_265_; 
v___x_265_ = lean_obj_once(&lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__14, &lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__14_once, _init_lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__14);
v___y_215_ = v___x_265_;
goto v___jp_214_;
}
else
{
lean_object* v___x_266_; 
v___x_266_ = lean_obj_once(&lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__15, &lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__15_once, _init_lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__15);
v___y_215_ = v___x_266_;
goto v___jp_214_;
}
}
case 1:
{
lean_object* v___x_267_; uint8_t v___x_268_; 
v___x_267_ = lean_unsigned_to_nat(1024u);
v___x_268_ = lean_nat_dec_le(v___x_267_, v_prec_213_);
if (v___x_268_ == 0)
{
lean_object* v___x_269_; 
v___x_269_ = lean_obj_once(&lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__14, &lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__14_once, _init_lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__14);
v___y_222_ = v___x_269_;
goto v___jp_221_;
}
else
{
lean_object* v___x_270_; 
v___x_270_ = lean_obj_once(&lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__15, &lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__15_once, _init_lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__15);
v___y_222_ = v___x_270_;
goto v___jp_221_;
}
}
case 2:
{
lean_object* v___x_271_; uint8_t v___x_272_; 
v___x_271_ = lean_unsigned_to_nat(1024u);
v___x_272_ = lean_nat_dec_le(v___x_271_, v_prec_213_);
if (v___x_272_ == 0)
{
lean_object* v___x_273_; 
v___x_273_ = lean_obj_once(&lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__14, &lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__14_once, _init_lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__14);
v___y_229_ = v___x_273_;
goto v___jp_228_;
}
else
{
lean_object* v___x_274_; 
v___x_274_ = lean_obj_once(&lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__15, &lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__15_once, _init_lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__15);
v___y_229_ = v___x_274_;
goto v___jp_228_;
}
}
case 3:
{
lean_object* v___x_275_; uint8_t v___x_276_; 
v___x_275_ = lean_unsigned_to_nat(1024u);
v___x_276_ = lean_nat_dec_le(v___x_275_, v_prec_213_);
if (v___x_276_ == 0)
{
lean_object* v___x_277_; 
v___x_277_ = lean_obj_once(&lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__14, &lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__14_once, _init_lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__14);
v___y_236_ = v___x_277_;
goto v___jp_235_;
}
else
{
lean_object* v___x_278_; 
v___x_278_ = lean_obj_once(&lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__15, &lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__15_once, _init_lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__15);
v___y_236_ = v___x_278_;
goto v___jp_235_;
}
}
case 4:
{
lean_object* v___x_279_; uint8_t v___x_280_; 
v___x_279_ = lean_unsigned_to_nat(1024u);
v___x_280_ = lean_nat_dec_le(v___x_279_, v_prec_213_);
if (v___x_280_ == 0)
{
lean_object* v___x_281_; 
v___x_281_ = lean_obj_once(&lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__14, &lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__14_once, _init_lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__14);
v___y_243_ = v___x_281_;
goto v___jp_242_;
}
else
{
lean_object* v___x_282_; 
v___x_282_ = lean_obj_once(&lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__15, &lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__15_once, _init_lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__15);
v___y_243_ = v___x_282_;
goto v___jp_242_;
}
}
case 5:
{
lean_object* v___x_283_; uint8_t v___x_284_; 
v___x_283_ = lean_unsigned_to_nat(1024u);
v___x_284_ = lean_nat_dec_le(v___x_283_, v_prec_213_);
if (v___x_284_ == 0)
{
lean_object* v___x_285_; 
v___x_285_ = lean_obj_once(&lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__14, &lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__14_once, _init_lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__14);
v___y_250_ = v___x_285_;
goto v___jp_249_;
}
else
{
lean_object* v___x_286_; 
v___x_286_ = lean_obj_once(&lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__15, &lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__15_once, _init_lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__15);
v___y_250_ = v___x_286_;
goto v___jp_249_;
}
}
default: 
{
lean_object* v___x_287_; uint8_t v___x_288_; 
v___x_287_ = lean_unsigned_to_nat(1024u);
v___x_288_ = lean_nat_dec_le(v___x_287_, v_prec_213_);
if (v___x_288_ == 0)
{
lean_object* v___x_289_; 
v___x_289_ = lean_obj_once(&lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__14, &lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__14_once, _init_lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__14);
v___y_257_ = v___x_289_;
goto v___jp_256_;
}
else
{
lean_object* v___x_290_; 
v___x_290_ = lean_obj_once(&lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__15, &lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__15_once, _init_lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__15);
v___y_257_ = v___x_290_;
goto v___jp_256_;
}
}
}
v___jp_214_:
{
lean_object* v___x_216_; lean_object* v___x_217_; uint8_t v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; 
v___x_216_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__1));
lean_inc(v___y_215_);
v___x_217_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_217_, 0, v___y_215_);
lean_ctor_set(v___x_217_, 1, v___x_216_);
v___x_218_ = 0;
v___x_219_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_219_, 0, v___x_217_);
lean_ctor_set_uint8(v___x_219_, sizeof(void*)*1, v___x_218_);
v___x_220_ = l_Repr_addAppParen(v___x_219_, v_prec_213_);
return v___x_220_;
}
v___jp_221_:
{
lean_object* v___x_223_; lean_object* v___x_224_; uint8_t v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; 
v___x_223_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__3));
lean_inc(v___y_222_);
v___x_224_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_224_, 0, v___y_222_);
lean_ctor_set(v___x_224_, 1, v___x_223_);
v___x_225_ = 0;
v___x_226_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_226_, 0, v___x_224_);
lean_ctor_set_uint8(v___x_226_, sizeof(void*)*1, v___x_225_);
v___x_227_ = l_Repr_addAppParen(v___x_226_, v_prec_213_);
return v___x_227_;
}
v___jp_228_:
{
lean_object* v___x_230_; lean_object* v___x_231_; uint8_t v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; 
v___x_230_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__5));
lean_inc(v___y_229_);
v___x_231_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_231_, 0, v___y_229_);
lean_ctor_set(v___x_231_, 1, v___x_230_);
v___x_232_ = 0;
v___x_233_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_233_, 0, v___x_231_);
lean_ctor_set_uint8(v___x_233_, sizeof(void*)*1, v___x_232_);
v___x_234_ = l_Repr_addAppParen(v___x_233_, v_prec_213_);
return v___x_234_;
}
v___jp_235_:
{
lean_object* v___x_237_; lean_object* v___x_238_; uint8_t v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; 
v___x_237_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__7));
lean_inc(v___y_236_);
v___x_238_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_238_, 0, v___y_236_);
lean_ctor_set(v___x_238_, 1, v___x_237_);
v___x_239_ = 0;
v___x_240_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_240_, 0, v___x_238_);
lean_ctor_set_uint8(v___x_240_, sizeof(void*)*1, v___x_239_);
v___x_241_ = l_Repr_addAppParen(v___x_240_, v_prec_213_);
return v___x_241_;
}
v___jp_242_:
{
lean_object* v___x_244_; lean_object* v___x_245_; uint8_t v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; 
v___x_244_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__9));
lean_inc(v___y_243_);
v___x_245_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_245_, 0, v___y_243_);
lean_ctor_set(v___x_245_, 1, v___x_244_);
v___x_246_ = 0;
v___x_247_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_247_, 0, v___x_245_);
lean_ctor_set_uint8(v___x_247_, sizeof(void*)*1, v___x_246_);
v___x_248_ = l_Repr_addAppParen(v___x_247_, v_prec_213_);
return v___x_248_;
}
v___jp_249_:
{
lean_object* v___x_251_; lean_object* v___x_252_; uint8_t v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; 
v___x_251_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__11));
lean_inc(v___y_250_);
v___x_252_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_252_, 0, v___y_250_);
lean_ctor_set(v___x_252_, 1, v___x_251_);
v___x_253_ = 0;
v___x_254_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_254_, 0, v___x_252_);
lean_ctor_set_uint8(v___x_254_, sizeof(void*)*1, v___x_253_);
v___x_255_ = l_Repr_addAppParen(v___x_254_, v_prec_213_);
return v___x_255_;
}
v___jp_256_:
{
lean_object* v___x_258_; lean_object* v___x_259_; uint8_t v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; 
v___x_258_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_instReprLetter_repr___closed__13));
lean_inc(v___y_257_);
v___x_259_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_259_, 0, v___y_257_);
lean_ctor_set(v___x_259_, 1, v___x_258_);
v___x_260_ = 0;
v___x_261_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_261_, 0, v___x_259_);
lean_ctor_set_uint8(v___x_261_, sizeof(void*)*1, v___x_260_);
v___x_262_ = l_Repr_addAppParen(v___x_261_, v_prec_213_);
return v___x_262_;
}
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_instReprLetter_repr___boxed(lean_object* v_x_291_, lean_object* v_prec_292_){
_start:
{
uint8_t v_x_401__boxed_293_; lean_object* v_res_294_; 
v_x_401__boxed_293_ = lean_unbox(v_x_291_);
v_res_294_ = lp_ShannonBounds_ShannonBounds_instReprLetter_repr(v_x_401__boxed_293_, v_prec_292_);
lean_dec(v_prec_292_);
return v_res_294_;
}
}
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_Letter_sep(uint8_t v_x_297_, uint8_t v_x_298_){
_start:
{
switch(v_x_297_)
{
case 0:
{
switch(v_x_298_)
{
case 4:
{
uint8_t v___x_299_; 
v___x_299_ = 1;
return v___x_299_;
}
case 5:
{
uint8_t v___x_300_; 
v___x_300_ = 1;
return v___x_300_;
}
case 6:
{
uint8_t v___x_301_; 
v___x_301_ = 1;
return v___x_301_;
}
default: 
{
uint8_t v___x_302_; 
v___x_302_ = 0;
return v___x_302_;
}
}
}
case 1:
{
switch(v_x_298_)
{
case 2:
{
uint8_t v___x_303_; 
v___x_303_ = 1;
return v___x_303_;
}
case 3:
{
uint8_t v___x_304_; 
v___x_304_ = 1;
return v___x_304_;
}
case 4:
{
uint8_t v___x_305_; 
v___x_305_ = 1;
return v___x_305_;
}
case 5:
{
uint8_t v___x_306_; 
v___x_306_ = 1;
return v___x_306_;
}
case 6:
{
uint8_t v___x_307_; 
v___x_307_ = 1;
return v___x_307_;
}
default: 
{
uint8_t v___x_308_; 
v___x_308_ = 0;
return v___x_308_;
}
}
}
case 2:
{
switch(v_x_298_)
{
case 1:
{
uint8_t v___x_309_; 
v___x_309_ = 1;
return v___x_309_;
}
case 3:
{
uint8_t v___x_310_; 
v___x_310_ = 1;
return v___x_310_;
}
case 5:
{
uint8_t v___x_311_; 
v___x_311_ = 1;
return v___x_311_;
}
default: 
{
uint8_t v___x_312_; 
v___x_312_ = 0;
return v___x_312_;
}
}
}
case 3:
{
switch(v_x_298_)
{
case 1:
{
uint8_t v___x_313_; 
v___x_313_ = 1;
return v___x_313_;
}
case 2:
{
uint8_t v___x_314_; 
v___x_314_ = 1;
return v___x_314_;
}
case 6:
{
uint8_t v___x_315_; 
v___x_315_ = 1;
return v___x_315_;
}
default: 
{
uint8_t v___x_316_; 
v___x_316_ = 0;
return v___x_316_;
}
}
}
case 4:
{
switch(v_x_298_)
{
case 0:
{
uint8_t v___x_317_; 
v___x_317_ = 1;
return v___x_317_;
}
case 1:
{
uint8_t v___x_318_; 
v___x_318_ = 1;
return v___x_318_;
}
default: 
{
uint8_t v___x_319_; 
v___x_319_ = 0;
return v___x_319_;
}
}
}
case 5:
{
switch(v_x_298_)
{
case 0:
{
uint8_t v___x_320_; 
v___x_320_ = 1;
return v___x_320_;
}
case 1:
{
uint8_t v___x_321_; 
v___x_321_ = 1;
return v___x_321_;
}
case 2:
{
uint8_t v___x_322_; 
v___x_322_ = 1;
return v___x_322_;
}
default: 
{
uint8_t v___x_323_; 
v___x_323_ = 0;
return v___x_323_;
}
}
}
default: 
{
switch(v_x_298_)
{
case 0:
{
uint8_t v___x_324_; 
v___x_324_ = 1;
return v___x_324_;
}
case 1:
{
uint8_t v___x_325_; 
v___x_325_ = 1;
return v___x_325_;
}
case 3:
{
uint8_t v___x_326_; 
v___x_326_ = 1;
return v___x_326_;
}
default: 
{
uint8_t v___x_327_; 
v___x_327_ = 0;
return v___x_327_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Letter_sep___boxed(lean_object* v_x_328_, lean_object* v_x_329_){
_start:
{
uint8_t v_x_185__boxed_330_; uint8_t v_x_186__boxed_331_; uint8_t v_res_332_; lean_object* v_r_333_; 
v_x_185__boxed_330_ = lean_unbox(v_x_328_);
v_x_186__boxed_331_ = lean_unbox(v_x_329_);
v_res_332_ = lp_ShannonBounds_ShannonBounds_Letter_sep(v_x_185__boxed_330_, v_x_186__boxed_331_);
v_r_333_ = lean_box(v_res_332_);
return v_r_333_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_fam___redArg(lean_object* v_inst_334_, lean_object* v_inst_335_, lean_object* v_S_336_, uint8_t v_x_337_){
_start:
{
switch(v_x_337_)
{
case 0:
{
lean_object* v_I_338_; lean_object* v_ports_339_; lean_object* v___x_340_; 
lean_dec_ref(v_inst_335_);
v_I_338_ = lean_ctor_get(v_S_336_, 0);
lean_inc(v_I_338_);
v_ports_339_ = lean_ctor_get(v_S_336_, 1);
lean_inc(v_ports_339_);
lean_dec_ref(v_S_336_);
v___x_340_ = lp_mathlib_Multiset_sub___redArg(v_inst_334_, v_I_338_, v_ports_339_);
return v___x_340_;
}
case 1:
{
lean_object* v___x_341_; 
v___x_341_ = lp_ShannonBounds_ShannonBounds_RichPortSystem_Xstar___redArg(v_inst_334_, v_inst_335_, v_S_336_);
return v___x_341_;
}
case 2:
{
uint8_t v___x_342_; lean_object* v___x_343_; 
v___x_342_ = 0;
v___x_343_ = lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc___redArg(v_inst_334_, v_inst_335_, v_S_336_, v___x_342_);
return v___x_343_;
}
case 3:
{
uint8_t v___x_344_; lean_object* v___x_345_; 
v___x_344_ = 1;
v___x_345_ = lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc___redArg(v_inst_334_, v_inst_335_, v_S_336_, v___x_344_);
return v___x_345_;
}
case 4:
{
lean_object* v_ports_346_; 
lean_dec_ref(v_inst_335_);
lean_dec_ref(v_inst_334_);
v_ports_346_ = lean_ctor_get(v_S_336_, 1);
lean_inc(v_ports_346_);
lean_dec_ref(v_S_336_);
return v_ports_346_;
}
case 5:
{
lean_object* v_ports_347_; lean_object* v_ep_348_; uint8_t v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; 
lean_dec_ref(v_inst_335_);
v_ports_347_ = lean_ctor_get(v_S_336_, 1);
lean_inc(v_ports_347_);
v_ep_348_ = lean_ctor_get(v_S_336_, 2);
lean_inc(v_ep_348_);
lean_dec_ref(v_S_336_);
v___x_349_ = 1;
v___x_350_ = lean_box(v___x_349_);
v___x_351_ = lean_apply_1(v_ep_348_, v___x_350_);
v___x_352_ = lp_mathlib_Finset_image___redArg(v_inst_334_, v___x_351_, v_ports_347_);
return v___x_352_;
}
default: 
{
lean_object* v_ports_353_; lean_object* v_ep_354_; uint8_t v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; 
lean_dec_ref(v_inst_335_);
v_ports_353_ = lean_ctor_get(v_S_336_, 1);
lean_inc(v_ports_353_);
v_ep_354_ = lean_ctor_get(v_S_336_, 2);
lean_inc(v_ep_354_);
lean_dec_ref(v_S_336_);
v___x_355_ = 0;
v___x_356_ = lean_box(v___x_355_);
v___x_357_ = lean_apply_1(v_ep_354_, v___x_356_);
v___x_358_ = lp_mathlib_Finset_image___redArg(v_inst_334_, v___x_357_, v_ports_353_);
return v___x_358_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_fam___redArg___boxed(lean_object* v_inst_359_, lean_object* v_inst_360_, lean_object* v_S_361_, lean_object* v_x_362_){
_start:
{
uint8_t v_x_100__boxed_363_; lean_object* v_res_364_; 
v_x_100__boxed_363_ = lean_unbox(v_x_362_);
v_res_364_ = lp_ShannonBounds_ShannonBounds_RichPortSystem_fam___redArg(v_inst_359_, v_inst_360_, v_S_361_, v_x_100__boxed_363_);
return v_res_364_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_fam(lean_object* v_00_u03b1_365_, lean_object* v_inst_366_, lean_object* v_G_367_, lean_object* v_inst_368_, lean_object* v_S_369_, uint8_t v_x_370_){
_start:
{
lean_object* v___x_371_; 
v___x_371_ = lp_ShannonBounds_ShannonBounds_RichPortSystem_fam___redArg(v_inst_366_, v_inst_368_, v_S_369_, v_x_370_);
return v___x_371_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_fam___boxed(lean_object* v_00_u03b1_372_, lean_object* v_inst_373_, lean_object* v_G_374_, lean_object* v_inst_375_, lean_object* v_S_376_, lean_object* v_x_377_){
_start:
{
uint8_t v_x_137__boxed_378_; lean_object* v_res_379_; 
v_x_137__boxed_378_ = lean_unbox(v_x_377_);
v_res_379_ = lp_ShannonBounds_ShannonBounds_RichPortSystem_fam(v_00_u03b1_372_, v_inst_373_, v_G_374_, v_inst_375_, v_S_376_, v_x_137__boxed_378_);
return v_res_379_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds___private_ShannonBounds_PortRealisation_0__ShannonBounds_Letter_sep_match__1_splitter___redArg(uint8_t v_x_380_, uint8_t v_x_381_, lean_object* v_h__1_382_, lean_object* v_h__2_383_, lean_object* v_h__3_384_, lean_object* v_h__4_385_, lean_object* v_h__5_386_, lean_object* v_h__6_387_, lean_object* v_h__7_388_, lean_object* v_h__8_389_, lean_object* v_h__9_390_, lean_object* v_h__10_391_, lean_object* v_h__11_392_, lean_object* v_h__12_393_, lean_object* v_h__13_394_, lean_object* v_h__14_395_, lean_object* v_h__15_396_, lean_object* v_h__16_397_, lean_object* v_h__17_398_, lean_object* v_h__18_399_, lean_object* v_h__19_400_, lean_object* v_h__20_401_, lean_object* v_h__21_402_, lean_object* v_h__22_403_, lean_object* v_h__23_404_){
_start:
{
switch(v_x_380_)
{
case 0:
{
lean_dec(v_h__22_403_);
lean_dec(v_h__21_402_);
lean_dec(v_h__20_401_);
lean_dec(v_h__19_400_);
lean_dec(v_h__18_399_);
lean_dec(v_h__17_398_);
lean_dec(v_h__16_397_);
lean_dec(v_h__15_396_);
lean_dec(v_h__14_395_);
lean_dec(v_h__13_394_);
lean_dec(v_h__12_393_);
lean_dec(v_h__11_392_);
lean_dec(v_h__10_391_);
lean_dec(v_h__9_390_);
lean_dec(v_h__8_389_);
lean_dec(v_h__7_388_);
lean_dec(v_h__6_387_);
lean_dec(v_h__5_386_);
lean_dec(v_h__4_385_);
switch(v_x_381_)
{
case 4:
{
lean_object* v___x_405_; lean_object* v___x_406_; 
lean_dec(v_h__23_404_);
lean_dec(v_h__3_384_);
lean_dec(v_h__2_383_);
v___x_405_ = lean_box(0);
v___x_406_ = lean_apply_1(v_h__1_382_, v___x_405_);
return v___x_406_;
}
case 5:
{
lean_object* v___x_407_; lean_object* v___x_408_; 
lean_dec(v_h__23_404_);
lean_dec(v_h__3_384_);
lean_dec(v_h__1_382_);
v___x_407_ = lean_box(0);
v___x_408_ = lean_apply_1(v_h__2_383_, v___x_407_);
return v___x_408_;
}
case 6:
{
lean_object* v___x_409_; lean_object* v___x_410_; 
lean_dec(v_h__23_404_);
lean_dec(v_h__2_383_);
lean_dec(v_h__1_382_);
v___x_409_ = lean_box(0);
v___x_410_ = lean_apply_1(v_h__3_384_, v___x_409_);
return v___x_410_;
}
default: 
{
lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; 
lean_dec(v_h__3_384_);
lean_dec(v_h__2_383_);
lean_dec(v_h__1_382_);
v___x_411_ = lean_box(v_x_380_);
v___x_412_ = lean_box(v_x_381_);
{
lean_object* _aargs[] = {v___x_411_, v___x_412_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0)};
v___x_413_ = lean_apply_m(v_h__23_404_, 24, _aargs);
}
return v___x_413_;
}
}
}
case 1:
{
lean_dec(v_h__22_403_);
lean_dec(v_h__21_402_);
lean_dec(v_h__20_401_);
lean_dec(v_h__19_400_);
lean_dec(v_h__18_399_);
lean_dec(v_h__17_398_);
lean_dec(v_h__16_397_);
lean_dec(v_h__15_396_);
lean_dec(v_h__14_395_);
lean_dec(v_h__13_394_);
lean_dec(v_h__12_393_);
lean_dec(v_h__11_392_);
lean_dec(v_h__10_391_);
lean_dec(v_h__9_390_);
lean_dec(v_h__3_384_);
lean_dec(v_h__2_383_);
lean_dec(v_h__1_382_);
switch(v_x_381_)
{
case 2:
{
lean_object* v___x_414_; lean_object* v___x_415_; 
lean_dec(v_h__23_404_);
lean_dec(v_h__8_389_);
lean_dec(v_h__7_388_);
lean_dec(v_h__6_387_);
lean_dec(v_h__5_386_);
v___x_414_ = lean_box(0);
v___x_415_ = lean_apply_1(v_h__4_385_, v___x_414_);
return v___x_415_;
}
case 3:
{
lean_object* v___x_416_; lean_object* v___x_417_; 
lean_dec(v_h__23_404_);
lean_dec(v_h__8_389_);
lean_dec(v_h__7_388_);
lean_dec(v_h__6_387_);
lean_dec(v_h__4_385_);
v___x_416_ = lean_box(0);
v___x_417_ = lean_apply_1(v_h__5_386_, v___x_416_);
return v___x_417_;
}
case 4:
{
lean_object* v___x_418_; lean_object* v___x_419_; 
lean_dec(v_h__23_404_);
lean_dec(v_h__8_389_);
lean_dec(v_h__7_388_);
lean_dec(v_h__5_386_);
lean_dec(v_h__4_385_);
v___x_418_ = lean_box(0);
v___x_419_ = lean_apply_1(v_h__6_387_, v___x_418_);
return v___x_419_;
}
case 5:
{
lean_object* v___x_420_; lean_object* v___x_421_; 
lean_dec(v_h__23_404_);
lean_dec(v_h__8_389_);
lean_dec(v_h__6_387_);
lean_dec(v_h__5_386_);
lean_dec(v_h__4_385_);
v___x_420_ = lean_box(0);
v___x_421_ = lean_apply_1(v_h__7_388_, v___x_420_);
return v___x_421_;
}
case 6:
{
lean_object* v___x_422_; lean_object* v___x_423_; 
lean_dec(v_h__23_404_);
lean_dec(v_h__7_388_);
lean_dec(v_h__6_387_);
lean_dec(v_h__5_386_);
lean_dec(v_h__4_385_);
v___x_422_ = lean_box(0);
v___x_423_ = lean_apply_1(v_h__8_389_, v___x_422_);
return v___x_423_;
}
default: 
{
lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; 
lean_dec(v_h__8_389_);
lean_dec(v_h__7_388_);
lean_dec(v_h__6_387_);
lean_dec(v_h__5_386_);
lean_dec(v_h__4_385_);
v___x_424_ = lean_box(v_x_380_);
v___x_425_ = lean_box(v_x_381_);
{
lean_object* _aargs[] = {v___x_424_, v___x_425_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0)};
v___x_426_ = lean_apply_m(v_h__23_404_, 24, _aargs);
}
return v___x_426_;
}
}
}
case 2:
{
lean_dec(v_h__22_403_);
lean_dec(v_h__21_402_);
lean_dec(v_h__20_401_);
lean_dec(v_h__19_400_);
lean_dec(v_h__18_399_);
lean_dec(v_h__17_398_);
lean_dec(v_h__16_397_);
lean_dec(v_h__15_396_);
lean_dec(v_h__14_395_);
lean_dec(v_h__13_394_);
lean_dec(v_h__12_393_);
lean_dec(v_h__8_389_);
lean_dec(v_h__7_388_);
lean_dec(v_h__6_387_);
lean_dec(v_h__5_386_);
lean_dec(v_h__4_385_);
lean_dec(v_h__3_384_);
lean_dec(v_h__2_383_);
lean_dec(v_h__1_382_);
switch(v_x_381_)
{
case 1:
{
lean_object* v___x_427_; lean_object* v___x_428_; 
lean_dec(v_h__23_404_);
lean_dec(v_h__11_392_);
lean_dec(v_h__10_391_);
v___x_427_ = lean_box(0);
v___x_428_ = lean_apply_1(v_h__9_390_, v___x_427_);
return v___x_428_;
}
case 3:
{
lean_object* v___x_429_; lean_object* v___x_430_; 
lean_dec(v_h__23_404_);
lean_dec(v_h__11_392_);
lean_dec(v_h__9_390_);
v___x_429_ = lean_box(0);
v___x_430_ = lean_apply_1(v_h__10_391_, v___x_429_);
return v___x_430_;
}
case 5:
{
lean_object* v___x_431_; lean_object* v___x_432_; 
lean_dec(v_h__23_404_);
lean_dec(v_h__10_391_);
lean_dec(v_h__9_390_);
v___x_431_ = lean_box(0);
v___x_432_ = lean_apply_1(v_h__11_392_, v___x_431_);
return v___x_432_;
}
default: 
{
lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; 
lean_dec(v_h__11_392_);
lean_dec(v_h__10_391_);
lean_dec(v_h__9_390_);
v___x_433_ = lean_box(v_x_380_);
v___x_434_ = lean_box(v_x_381_);
{
lean_object* _aargs[] = {v___x_433_, v___x_434_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0)};
v___x_435_ = lean_apply_m(v_h__23_404_, 24, _aargs);
}
return v___x_435_;
}
}
}
case 3:
{
lean_dec(v_h__22_403_);
lean_dec(v_h__21_402_);
lean_dec(v_h__20_401_);
lean_dec(v_h__19_400_);
lean_dec(v_h__18_399_);
lean_dec(v_h__17_398_);
lean_dec(v_h__16_397_);
lean_dec(v_h__15_396_);
lean_dec(v_h__11_392_);
lean_dec(v_h__10_391_);
lean_dec(v_h__9_390_);
lean_dec(v_h__8_389_);
lean_dec(v_h__7_388_);
lean_dec(v_h__6_387_);
lean_dec(v_h__5_386_);
lean_dec(v_h__4_385_);
lean_dec(v_h__3_384_);
lean_dec(v_h__2_383_);
lean_dec(v_h__1_382_);
switch(v_x_381_)
{
case 1:
{
lean_object* v___x_436_; lean_object* v___x_437_; 
lean_dec(v_h__23_404_);
lean_dec(v_h__14_395_);
lean_dec(v_h__13_394_);
v___x_436_ = lean_box(0);
v___x_437_ = lean_apply_1(v_h__12_393_, v___x_436_);
return v___x_437_;
}
case 2:
{
lean_object* v___x_438_; lean_object* v___x_439_; 
lean_dec(v_h__23_404_);
lean_dec(v_h__14_395_);
lean_dec(v_h__12_393_);
v___x_438_ = lean_box(0);
v___x_439_ = lean_apply_1(v_h__13_394_, v___x_438_);
return v___x_439_;
}
case 6:
{
lean_object* v___x_440_; lean_object* v___x_441_; 
lean_dec(v_h__23_404_);
lean_dec(v_h__13_394_);
lean_dec(v_h__12_393_);
v___x_440_ = lean_box(0);
v___x_441_ = lean_apply_1(v_h__14_395_, v___x_440_);
return v___x_441_;
}
default: 
{
lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; 
lean_dec(v_h__14_395_);
lean_dec(v_h__13_394_);
lean_dec(v_h__12_393_);
v___x_442_ = lean_box(v_x_380_);
v___x_443_ = lean_box(v_x_381_);
{
lean_object* _aargs[] = {v___x_442_, v___x_443_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0)};
v___x_444_ = lean_apply_m(v_h__23_404_, 24, _aargs);
}
return v___x_444_;
}
}
}
case 4:
{
lean_dec(v_h__22_403_);
lean_dec(v_h__21_402_);
lean_dec(v_h__20_401_);
lean_dec(v_h__19_400_);
lean_dec(v_h__18_399_);
lean_dec(v_h__17_398_);
lean_dec(v_h__14_395_);
lean_dec(v_h__13_394_);
lean_dec(v_h__12_393_);
lean_dec(v_h__11_392_);
lean_dec(v_h__10_391_);
lean_dec(v_h__9_390_);
lean_dec(v_h__8_389_);
lean_dec(v_h__7_388_);
lean_dec(v_h__6_387_);
lean_dec(v_h__5_386_);
lean_dec(v_h__4_385_);
lean_dec(v_h__3_384_);
lean_dec(v_h__2_383_);
lean_dec(v_h__1_382_);
switch(v_x_381_)
{
case 0:
{
lean_object* v___x_445_; lean_object* v___x_446_; 
lean_dec(v_h__23_404_);
lean_dec(v_h__16_397_);
v___x_445_ = lean_box(0);
v___x_446_ = lean_apply_1(v_h__15_396_, v___x_445_);
return v___x_446_;
}
case 1:
{
lean_object* v___x_447_; lean_object* v___x_448_; 
lean_dec(v_h__23_404_);
lean_dec(v_h__15_396_);
v___x_447_ = lean_box(0);
v___x_448_ = lean_apply_1(v_h__16_397_, v___x_447_);
return v___x_448_;
}
default: 
{
lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; 
lean_dec(v_h__16_397_);
lean_dec(v_h__15_396_);
v___x_449_ = lean_box(v_x_380_);
v___x_450_ = lean_box(v_x_381_);
{
lean_object* _aargs[] = {v___x_449_, v___x_450_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0)};
v___x_451_ = lean_apply_m(v_h__23_404_, 24, _aargs);
}
return v___x_451_;
}
}
}
case 5:
{
lean_dec(v_h__22_403_);
lean_dec(v_h__21_402_);
lean_dec(v_h__20_401_);
lean_dec(v_h__16_397_);
lean_dec(v_h__15_396_);
lean_dec(v_h__14_395_);
lean_dec(v_h__13_394_);
lean_dec(v_h__12_393_);
lean_dec(v_h__11_392_);
lean_dec(v_h__10_391_);
lean_dec(v_h__9_390_);
lean_dec(v_h__8_389_);
lean_dec(v_h__7_388_);
lean_dec(v_h__6_387_);
lean_dec(v_h__5_386_);
lean_dec(v_h__4_385_);
lean_dec(v_h__3_384_);
lean_dec(v_h__2_383_);
lean_dec(v_h__1_382_);
switch(v_x_381_)
{
case 0:
{
lean_object* v___x_452_; lean_object* v___x_453_; 
lean_dec(v_h__23_404_);
lean_dec(v_h__19_400_);
lean_dec(v_h__18_399_);
v___x_452_ = lean_box(0);
v___x_453_ = lean_apply_1(v_h__17_398_, v___x_452_);
return v___x_453_;
}
case 1:
{
lean_object* v___x_454_; lean_object* v___x_455_; 
lean_dec(v_h__23_404_);
lean_dec(v_h__19_400_);
lean_dec(v_h__17_398_);
v___x_454_ = lean_box(0);
v___x_455_ = lean_apply_1(v_h__18_399_, v___x_454_);
return v___x_455_;
}
case 2:
{
lean_object* v___x_456_; lean_object* v___x_457_; 
lean_dec(v_h__23_404_);
lean_dec(v_h__18_399_);
lean_dec(v_h__17_398_);
v___x_456_ = lean_box(0);
v___x_457_ = lean_apply_1(v_h__19_400_, v___x_456_);
return v___x_457_;
}
default: 
{
lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; 
lean_dec(v_h__19_400_);
lean_dec(v_h__18_399_);
lean_dec(v_h__17_398_);
v___x_458_ = lean_box(v_x_380_);
v___x_459_ = lean_box(v_x_381_);
{
lean_object* _aargs[] = {v___x_458_, v___x_459_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0)};
v___x_460_ = lean_apply_m(v_h__23_404_, 24, _aargs);
}
return v___x_460_;
}
}
}
default: 
{
lean_dec(v_h__19_400_);
lean_dec(v_h__18_399_);
lean_dec(v_h__17_398_);
lean_dec(v_h__16_397_);
lean_dec(v_h__15_396_);
lean_dec(v_h__14_395_);
lean_dec(v_h__13_394_);
lean_dec(v_h__12_393_);
lean_dec(v_h__11_392_);
lean_dec(v_h__10_391_);
lean_dec(v_h__9_390_);
lean_dec(v_h__8_389_);
lean_dec(v_h__7_388_);
lean_dec(v_h__6_387_);
lean_dec(v_h__5_386_);
lean_dec(v_h__4_385_);
lean_dec(v_h__3_384_);
lean_dec(v_h__2_383_);
lean_dec(v_h__1_382_);
switch(v_x_381_)
{
case 0:
{
lean_object* v___x_461_; lean_object* v___x_462_; 
lean_dec(v_h__23_404_);
lean_dec(v_h__22_403_);
lean_dec(v_h__21_402_);
v___x_461_ = lean_box(0);
v___x_462_ = lean_apply_1(v_h__20_401_, v___x_461_);
return v___x_462_;
}
case 1:
{
lean_object* v___x_463_; lean_object* v___x_464_; 
lean_dec(v_h__23_404_);
lean_dec(v_h__22_403_);
lean_dec(v_h__20_401_);
v___x_463_ = lean_box(0);
v___x_464_ = lean_apply_1(v_h__21_402_, v___x_463_);
return v___x_464_;
}
case 3:
{
lean_object* v___x_465_; lean_object* v___x_466_; 
lean_dec(v_h__23_404_);
lean_dec(v_h__21_402_);
lean_dec(v_h__20_401_);
v___x_465_ = lean_box(0);
v___x_466_ = lean_apply_1(v_h__22_403_, v___x_465_);
return v___x_466_;
}
default: 
{
lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; 
lean_dec(v_h__22_403_);
lean_dec(v_h__21_402_);
lean_dec(v_h__20_401_);
v___x_467_ = lean_box(v_x_380_);
v___x_468_ = lean_box(v_x_381_);
{
lean_object* _aargs[] = {v___x_467_, v___x_468_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0)};
v___x_469_ = lean_apply_m(v_h__23_404_, 24, _aargs);
}
return v___x_469_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds___private_ShannonBounds_PortRealisation_0__ShannonBounds_Letter_sep_match__1_splitter___redArg___boxed(lean_object** _args){
lean_object* v_x_470_ = _args[0];
lean_object* v_x_471_ = _args[1];
lean_object* v_h__1_472_ = _args[2];
lean_object* v_h__2_473_ = _args[3];
lean_object* v_h__3_474_ = _args[4];
lean_object* v_h__4_475_ = _args[5];
lean_object* v_h__5_476_ = _args[6];
lean_object* v_h__6_477_ = _args[7];
lean_object* v_h__7_478_ = _args[8];
lean_object* v_h__8_479_ = _args[9];
lean_object* v_h__9_480_ = _args[10];
lean_object* v_h__10_481_ = _args[11];
lean_object* v_h__11_482_ = _args[12];
lean_object* v_h__12_483_ = _args[13];
lean_object* v_h__13_484_ = _args[14];
lean_object* v_h__14_485_ = _args[15];
lean_object* v_h__15_486_ = _args[16];
lean_object* v_h__16_487_ = _args[17];
lean_object* v_h__17_488_ = _args[18];
lean_object* v_h__18_489_ = _args[19];
lean_object* v_h__19_490_ = _args[20];
lean_object* v_h__20_491_ = _args[21];
lean_object* v_h__21_492_ = _args[22];
lean_object* v_h__22_493_ = _args[23];
lean_object* v_h__23_494_ = _args[24];
_start:
{
uint8_t v_x_181__boxed_495_; uint8_t v_x_182__boxed_496_; lean_object* v_res_497_; 
v_x_181__boxed_495_ = lean_unbox(v_x_470_);
v_x_182__boxed_496_ = lean_unbox(v_x_471_);
v_res_497_ = lp_ShannonBounds___private_ShannonBounds_PortRealisation_0__ShannonBounds_Letter_sep_match__1_splitter___redArg(v_x_181__boxed_495_, v_x_182__boxed_496_, v_h__1_472_, v_h__2_473_, v_h__3_474_, v_h__4_475_, v_h__5_476_, v_h__6_477_, v_h__7_478_, v_h__8_479_, v_h__9_480_, v_h__10_481_, v_h__11_482_, v_h__12_483_, v_h__13_484_, v_h__14_485_, v_h__15_486_, v_h__16_487_, v_h__17_488_, v_h__18_489_, v_h__19_490_, v_h__20_491_, v_h__21_492_, v_h__22_493_, v_h__23_494_);
return v_res_497_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds___private_ShannonBounds_PortRealisation_0__ShannonBounds_Letter_sep_match__1_splitter(lean_object* v_motive_498_, uint8_t v_x_499_, uint8_t v_x_500_, lean_object* v_h__1_501_, lean_object* v_h__2_502_, lean_object* v_h__3_503_, lean_object* v_h__4_504_, lean_object* v_h__5_505_, lean_object* v_h__6_506_, lean_object* v_h__7_507_, lean_object* v_h__8_508_, lean_object* v_h__9_509_, lean_object* v_h__10_510_, lean_object* v_h__11_511_, lean_object* v_h__12_512_, lean_object* v_h__13_513_, lean_object* v_h__14_514_, lean_object* v_h__15_515_, lean_object* v_h__16_516_, lean_object* v_h__17_517_, lean_object* v_h__18_518_, lean_object* v_h__19_519_, lean_object* v_h__20_520_, lean_object* v_h__21_521_, lean_object* v_h__22_522_, lean_object* v_h__23_523_){
_start:
{
switch(v_x_499_)
{
case 0:
{
lean_dec(v_h__22_522_);
lean_dec(v_h__21_521_);
lean_dec(v_h__20_520_);
lean_dec(v_h__19_519_);
lean_dec(v_h__18_518_);
lean_dec(v_h__17_517_);
lean_dec(v_h__16_516_);
lean_dec(v_h__15_515_);
lean_dec(v_h__14_514_);
lean_dec(v_h__13_513_);
lean_dec(v_h__12_512_);
lean_dec(v_h__11_511_);
lean_dec(v_h__10_510_);
lean_dec(v_h__9_509_);
lean_dec(v_h__8_508_);
lean_dec(v_h__7_507_);
lean_dec(v_h__6_506_);
lean_dec(v_h__5_505_);
lean_dec(v_h__4_504_);
switch(v_x_500_)
{
case 4:
{
lean_object* v___x_524_; lean_object* v___x_525_; 
lean_dec(v_h__23_523_);
lean_dec(v_h__3_503_);
lean_dec(v_h__2_502_);
v___x_524_ = lean_box(0);
v___x_525_ = lean_apply_1(v_h__1_501_, v___x_524_);
return v___x_525_;
}
case 5:
{
lean_object* v___x_526_; lean_object* v___x_527_; 
lean_dec(v_h__23_523_);
lean_dec(v_h__3_503_);
lean_dec(v_h__1_501_);
v___x_526_ = lean_box(0);
v___x_527_ = lean_apply_1(v_h__2_502_, v___x_526_);
return v___x_527_;
}
case 6:
{
lean_object* v___x_528_; lean_object* v___x_529_; 
lean_dec(v_h__23_523_);
lean_dec(v_h__2_502_);
lean_dec(v_h__1_501_);
v___x_528_ = lean_box(0);
v___x_529_ = lean_apply_1(v_h__3_503_, v___x_528_);
return v___x_529_;
}
default: 
{
lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; 
lean_dec(v_h__3_503_);
lean_dec(v_h__2_502_);
lean_dec(v_h__1_501_);
v___x_530_ = lean_box(v_x_499_);
v___x_531_ = lean_box(v_x_500_);
{
lean_object* _aargs[] = {v___x_530_, v___x_531_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0)};
v___x_532_ = lean_apply_m(v_h__23_523_, 24, _aargs);
}
return v___x_532_;
}
}
}
case 1:
{
lean_dec(v_h__22_522_);
lean_dec(v_h__21_521_);
lean_dec(v_h__20_520_);
lean_dec(v_h__19_519_);
lean_dec(v_h__18_518_);
lean_dec(v_h__17_517_);
lean_dec(v_h__16_516_);
lean_dec(v_h__15_515_);
lean_dec(v_h__14_514_);
lean_dec(v_h__13_513_);
lean_dec(v_h__12_512_);
lean_dec(v_h__11_511_);
lean_dec(v_h__10_510_);
lean_dec(v_h__9_509_);
lean_dec(v_h__3_503_);
lean_dec(v_h__2_502_);
lean_dec(v_h__1_501_);
switch(v_x_500_)
{
case 2:
{
lean_object* v___x_533_; lean_object* v___x_534_; 
lean_dec(v_h__23_523_);
lean_dec(v_h__8_508_);
lean_dec(v_h__7_507_);
lean_dec(v_h__6_506_);
lean_dec(v_h__5_505_);
v___x_533_ = lean_box(0);
v___x_534_ = lean_apply_1(v_h__4_504_, v___x_533_);
return v___x_534_;
}
case 3:
{
lean_object* v___x_535_; lean_object* v___x_536_; 
lean_dec(v_h__23_523_);
lean_dec(v_h__8_508_);
lean_dec(v_h__7_507_);
lean_dec(v_h__6_506_);
lean_dec(v_h__4_504_);
v___x_535_ = lean_box(0);
v___x_536_ = lean_apply_1(v_h__5_505_, v___x_535_);
return v___x_536_;
}
case 4:
{
lean_object* v___x_537_; lean_object* v___x_538_; 
lean_dec(v_h__23_523_);
lean_dec(v_h__8_508_);
lean_dec(v_h__7_507_);
lean_dec(v_h__5_505_);
lean_dec(v_h__4_504_);
v___x_537_ = lean_box(0);
v___x_538_ = lean_apply_1(v_h__6_506_, v___x_537_);
return v___x_538_;
}
case 5:
{
lean_object* v___x_539_; lean_object* v___x_540_; 
lean_dec(v_h__23_523_);
lean_dec(v_h__8_508_);
lean_dec(v_h__6_506_);
lean_dec(v_h__5_505_);
lean_dec(v_h__4_504_);
v___x_539_ = lean_box(0);
v___x_540_ = lean_apply_1(v_h__7_507_, v___x_539_);
return v___x_540_;
}
case 6:
{
lean_object* v___x_541_; lean_object* v___x_542_; 
lean_dec(v_h__23_523_);
lean_dec(v_h__7_507_);
lean_dec(v_h__6_506_);
lean_dec(v_h__5_505_);
lean_dec(v_h__4_504_);
v___x_541_ = lean_box(0);
v___x_542_ = lean_apply_1(v_h__8_508_, v___x_541_);
return v___x_542_;
}
default: 
{
lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; 
lean_dec(v_h__8_508_);
lean_dec(v_h__7_507_);
lean_dec(v_h__6_506_);
lean_dec(v_h__5_505_);
lean_dec(v_h__4_504_);
v___x_543_ = lean_box(v_x_499_);
v___x_544_ = lean_box(v_x_500_);
{
lean_object* _aargs[] = {v___x_543_, v___x_544_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0)};
v___x_545_ = lean_apply_m(v_h__23_523_, 24, _aargs);
}
return v___x_545_;
}
}
}
case 2:
{
lean_dec(v_h__22_522_);
lean_dec(v_h__21_521_);
lean_dec(v_h__20_520_);
lean_dec(v_h__19_519_);
lean_dec(v_h__18_518_);
lean_dec(v_h__17_517_);
lean_dec(v_h__16_516_);
lean_dec(v_h__15_515_);
lean_dec(v_h__14_514_);
lean_dec(v_h__13_513_);
lean_dec(v_h__12_512_);
lean_dec(v_h__8_508_);
lean_dec(v_h__7_507_);
lean_dec(v_h__6_506_);
lean_dec(v_h__5_505_);
lean_dec(v_h__4_504_);
lean_dec(v_h__3_503_);
lean_dec(v_h__2_502_);
lean_dec(v_h__1_501_);
switch(v_x_500_)
{
case 1:
{
lean_object* v___x_546_; lean_object* v___x_547_; 
lean_dec(v_h__23_523_);
lean_dec(v_h__11_511_);
lean_dec(v_h__10_510_);
v___x_546_ = lean_box(0);
v___x_547_ = lean_apply_1(v_h__9_509_, v___x_546_);
return v___x_547_;
}
case 3:
{
lean_object* v___x_548_; lean_object* v___x_549_; 
lean_dec(v_h__23_523_);
lean_dec(v_h__11_511_);
lean_dec(v_h__9_509_);
v___x_548_ = lean_box(0);
v___x_549_ = lean_apply_1(v_h__10_510_, v___x_548_);
return v___x_549_;
}
case 5:
{
lean_object* v___x_550_; lean_object* v___x_551_; 
lean_dec(v_h__23_523_);
lean_dec(v_h__10_510_);
lean_dec(v_h__9_509_);
v___x_550_ = lean_box(0);
v___x_551_ = lean_apply_1(v_h__11_511_, v___x_550_);
return v___x_551_;
}
default: 
{
lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; 
lean_dec(v_h__11_511_);
lean_dec(v_h__10_510_);
lean_dec(v_h__9_509_);
v___x_552_ = lean_box(v_x_499_);
v___x_553_ = lean_box(v_x_500_);
{
lean_object* _aargs[] = {v___x_552_, v___x_553_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0)};
v___x_554_ = lean_apply_m(v_h__23_523_, 24, _aargs);
}
return v___x_554_;
}
}
}
case 3:
{
lean_dec(v_h__22_522_);
lean_dec(v_h__21_521_);
lean_dec(v_h__20_520_);
lean_dec(v_h__19_519_);
lean_dec(v_h__18_518_);
lean_dec(v_h__17_517_);
lean_dec(v_h__16_516_);
lean_dec(v_h__15_515_);
lean_dec(v_h__11_511_);
lean_dec(v_h__10_510_);
lean_dec(v_h__9_509_);
lean_dec(v_h__8_508_);
lean_dec(v_h__7_507_);
lean_dec(v_h__6_506_);
lean_dec(v_h__5_505_);
lean_dec(v_h__4_504_);
lean_dec(v_h__3_503_);
lean_dec(v_h__2_502_);
lean_dec(v_h__1_501_);
switch(v_x_500_)
{
case 1:
{
lean_object* v___x_555_; lean_object* v___x_556_; 
lean_dec(v_h__23_523_);
lean_dec(v_h__14_514_);
lean_dec(v_h__13_513_);
v___x_555_ = lean_box(0);
v___x_556_ = lean_apply_1(v_h__12_512_, v___x_555_);
return v___x_556_;
}
case 2:
{
lean_object* v___x_557_; lean_object* v___x_558_; 
lean_dec(v_h__23_523_);
lean_dec(v_h__14_514_);
lean_dec(v_h__12_512_);
v___x_557_ = lean_box(0);
v___x_558_ = lean_apply_1(v_h__13_513_, v___x_557_);
return v___x_558_;
}
case 6:
{
lean_object* v___x_559_; lean_object* v___x_560_; 
lean_dec(v_h__23_523_);
lean_dec(v_h__13_513_);
lean_dec(v_h__12_512_);
v___x_559_ = lean_box(0);
v___x_560_ = lean_apply_1(v_h__14_514_, v___x_559_);
return v___x_560_;
}
default: 
{
lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; 
lean_dec(v_h__14_514_);
lean_dec(v_h__13_513_);
lean_dec(v_h__12_512_);
v___x_561_ = lean_box(v_x_499_);
v___x_562_ = lean_box(v_x_500_);
{
lean_object* _aargs[] = {v___x_561_, v___x_562_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0)};
v___x_563_ = lean_apply_m(v_h__23_523_, 24, _aargs);
}
return v___x_563_;
}
}
}
case 4:
{
lean_dec(v_h__22_522_);
lean_dec(v_h__21_521_);
lean_dec(v_h__20_520_);
lean_dec(v_h__19_519_);
lean_dec(v_h__18_518_);
lean_dec(v_h__17_517_);
lean_dec(v_h__14_514_);
lean_dec(v_h__13_513_);
lean_dec(v_h__12_512_);
lean_dec(v_h__11_511_);
lean_dec(v_h__10_510_);
lean_dec(v_h__9_509_);
lean_dec(v_h__8_508_);
lean_dec(v_h__7_507_);
lean_dec(v_h__6_506_);
lean_dec(v_h__5_505_);
lean_dec(v_h__4_504_);
lean_dec(v_h__3_503_);
lean_dec(v_h__2_502_);
lean_dec(v_h__1_501_);
switch(v_x_500_)
{
case 0:
{
lean_object* v___x_564_; lean_object* v___x_565_; 
lean_dec(v_h__23_523_);
lean_dec(v_h__16_516_);
v___x_564_ = lean_box(0);
v___x_565_ = lean_apply_1(v_h__15_515_, v___x_564_);
return v___x_565_;
}
case 1:
{
lean_object* v___x_566_; lean_object* v___x_567_; 
lean_dec(v_h__23_523_);
lean_dec(v_h__15_515_);
v___x_566_ = lean_box(0);
v___x_567_ = lean_apply_1(v_h__16_516_, v___x_566_);
return v___x_567_;
}
default: 
{
lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; 
lean_dec(v_h__16_516_);
lean_dec(v_h__15_515_);
v___x_568_ = lean_box(v_x_499_);
v___x_569_ = lean_box(v_x_500_);
{
lean_object* _aargs[] = {v___x_568_, v___x_569_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0)};
v___x_570_ = lean_apply_m(v_h__23_523_, 24, _aargs);
}
return v___x_570_;
}
}
}
case 5:
{
lean_dec(v_h__22_522_);
lean_dec(v_h__21_521_);
lean_dec(v_h__20_520_);
lean_dec(v_h__16_516_);
lean_dec(v_h__15_515_);
lean_dec(v_h__14_514_);
lean_dec(v_h__13_513_);
lean_dec(v_h__12_512_);
lean_dec(v_h__11_511_);
lean_dec(v_h__10_510_);
lean_dec(v_h__9_509_);
lean_dec(v_h__8_508_);
lean_dec(v_h__7_507_);
lean_dec(v_h__6_506_);
lean_dec(v_h__5_505_);
lean_dec(v_h__4_504_);
lean_dec(v_h__3_503_);
lean_dec(v_h__2_502_);
lean_dec(v_h__1_501_);
switch(v_x_500_)
{
case 0:
{
lean_object* v___x_571_; lean_object* v___x_572_; 
lean_dec(v_h__23_523_);
lean_dec(v_h__19_519_);
lean_dec(v_h__18_518_);
v___x_571_ = lean_box(0);
v___x_572_ = lean_apply_1(v_h__17_517_, v___x_571_);
return v___x_572_;
}
case 1:
{
lean_object* v___x_573_; lean_object* v___x_574_; 
lean_dec(v_h__23_523_);
lean_dec(v_h__19_519_);
lean_dec(v_h__17_517_);
v___x_573_ = lean_box(0);
v___x_574_ = lean_apply_1(v_h__18_518_, v___x_573_);
return v___x_574_;
}
case 2:
{
lean_object* v___x_575_; lean_object* v___x_576_; 
lean_dec(v_h__23_523_);
lean_dec(v_h__18_518_);
lean_dec(v_h__17_517_);
v___x_575_ = lean_box(0);
v___x_576_ = lean_apply_1(v_h__19_519_, v___x_575_);
return v___x_576_;
}
default: 
{
lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; 
lean_dec(v_h__19_519_);
lean_dec(v_h__18_518_);
lean_dec(v_h__17_517_);
v___x_577_ = lean_box(v_x_499_);
v___x_578_ = lean_box(v_x_500_);
{
lean_object* _aargs[] = {v___x_577_, v___x_578_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0)};
v___x_579_ = lean_apply_m(v_h__23_523_, 24, _aargs);
}
return v___x_579_;
}
}
}
default: 
{
lean_dec(v_h__19_519_);
lean_dec(v_h__18_518_);
lean_dec(v_h__17_517_);
lean_dec(v_h__16_516_);
lean_dec(v_h__15_515_);
lean_dec(v_h__14_514_);
lean_dec(v_h__13_513_);
lean_dec(v_h__12_512_);
lean_dec(v_h__11_511_);
lean_dec(v_h__10_510_);
lean_dec(v_h__9_509_);
lean_dec(v_h__8_508_);
lean_dec(v_h__7_507_);
lean_dec(v_h__6_506_);
lean_dec(v_h__5_505_);
lean_dec(v_h__4_504_);
lean_dec(v_h__3_503_);
lean_dec(v_h__2_502_);
lean_dec(v_h__1_501_);
switch(v_x_500_)
{
case 0:
{
lean_object* v___x_580_; lean_object* v___x_581_; 
lean_dec(v_h__23_523_);
lean_dec(v_h__22_522_);
lean_dec(v_h__21_521_);
v___x_580_ = lean_box(0);
v___x_581_ = lean_apply_1(v_h__20_520_, v___x_580_);
return v___x_581_;
}
case 1:
{
lean_object* v___x_582_; lean_object* v___x_583_; 
lean_dec(v_h__23_523_);
lean_dec(v_h__22_522_);
lean_dec(v_h__20_520_);
v___x_582_ = lean_box(0);
v___x_583_ = lean_apply_1(v_h__21_521_, v___x_582_);
return v___x_583_;
}
case 3:
{
lean_object* v___x_584_; lean_object* v___x_585_; 
lean_dec(v_h__23_523_);
lean_dec(v_h__21_521_);
lean_dec(v_h__20_520_);
v___x_584_ = lean_box(0);
v___x_585_ = lean_apply_1(v_h__22_522_, v___x_584_);
return v___x_585_;
}
default: 
{
lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; 
lean_dec(v_h__22_522_);
lean_dec(v_h__21_521_);
lean_dec(v_h__20_520_);
v___x_586_ = lean_box(v_x_499_);
v___x_587_ = lean_box(v_x_500_);
{
lean_object* _aargs[] = {v___x_586_, v___x_587_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0)};
v___x_588_ = lean_apply_m(v_h__23_523_, 24, _aargs);
}
return v___x_588_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds___private_ShannonBounds_PortRealisation_0__ShannonBounds_Letter_sep_match__1_splitter___boxed(lean_object** _args){
lean_object* v_motive_589_ = _args[0];
lean_object* v_x_590_ = _args[1];
lean_object* v_x_591_ = _args[2];
lean_object* v_h__1_592_ = _args[3];
lean_object* v_h__2_593_ = _args[4];
lean_object* v_h__3_594_ = _args[5];
lean_object* v_h__4_595_ = _args[6];
lean_object* v_h__5_596_ = _args[7];
lean_object* v_h__6_597_ = _args[8];
lean_object* v_h__7_598_ = _args[9];
lean_object* v_h__8_599_ = _args[10];
lean_object* v_h__9_600_ = _args[11];
lean_object* v_h__10_601_ = _args[12];
lean_object* v_h__11_602_ = _args[13];
lean_object* v_h__12_603_ = _args[14];
lean_object* v_h__13_604_ = _args[15];
lean_object* v_h__14_605_ = _args[16];
lean_object* v_h__15_606_ = _args[17];
lean_object* v_h__16_607_ = _args[18];
lean_object* v_h__17_608_ = _args[19];
lean_object* v_h__18_609_ = _args[20];
lean_object* v_h__19_610_ = _args[21];
lean_object* v_h__20_611_ = _args[22];
lean_object* v_h__21_612_ = _args[23];
lean_object* v_h__22_613_ = _args[24];
lean_object* v_h__23_614_ = _args[25];
_start:
{
uint8_t v_x_317__boxed_615_; uint8_t v_x_318__boxed_616_; lean_object* v_res_617_; 
v_x_317__boxed_615_ = lean_unbox(v_x_590_);
v_x_318__boxed_616_ = lean_unbox(v_x_591_);
v_res_617_ = lp_ShannonBounds___private_ShannonBounds_PortRealisation_0__ShannonBounds_Letter_sep_match__1_splitter(v_motive_589_, v_x_317__boxed_615_, v_x_318__boxed_616_, v_h__1_592_, v_h__2_593_, v_h__3_594_, v_h__4_595_, v_h__5_596_, v_h__6_597_, v_h__7_598_, v_h__8_599_, v_h__9_600_, v_h__10_601_, v_h__11_602_, v_h__12_603_, v_h__13_604_, v_h__14_605_, v_h__15_606_, v_h__16_607_, v_h__17_608_, v_h__18_609_, v_h__19_610_, v_h__20_611_, v_h__21_612_, v_h__22_613_, v_h__23_614_);
return v_res_617_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_toRealisation___redArg(lean_object* v_inst_618_, lean_object* v_G_619_, lean_object* v_inst_620_, lean_object* v_S_621_){
_start:
{
lean_object* v___x_622_; 
v___x_622_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_RichPortSystem_fam___boxed), 6, 5);
lean_closure_set(v___x_622_, 0, lean_box(0));
lean_closure_set(v___x_622_, 1, v_inst_618_);
lean_closure_set(v___x_622_, 2, v_G_619_);
lean_closure_set(v___x_622_, 3, v_inst_620_);
lean_closure_set(v___x_622_, 4, v_S_621_);
return v___x_622_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_toRealisation(lean_object* v_00_u03b1_623_, lean_object* v_inst_624_, lean_object* v_inst_625_, lean_object* v_G_626_, lean_object* v_inst_627_, lean_object* v_S_628_){
_start:
{
lean_object* v___x_629_; 
v___x_629_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_RichPortSystem_fam___boxed), 6, 5);
lean_closure_set(v___x_629_, 0, lean_box(0));
lean_closure_set(v___x_629_, 1, v_inst_625_);
lean_closure_set(v___x_629_, 2, v_G_626_);
lean_closure_set(v___x_629_, 3, v_inst_627_);
lean_closure_set(v___x_629_, 4, v_S_628_);
return v___x_629_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_toRealisation___boxed(lean_object* v_00_u03b1_630_, lean_object* v_inst_631_, lean_object* v_inst_632_, lean_object* v_G_633_, lean_object* v_inst_634_, lean_object* v_S_635_){
_start:
{
lean_object* v_res_636_; 
v_res_636_ = lp_ShannonBounds_ShannonBounds_RichPortSystem_toRealisation(v_00_u03b1_630_, v_inst_631_, v_inst_632_, v_G_633_, v_inst_634_, v_S_635_);
lean_dec(v_inst_631_);
return v_res_636_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_ShannonBounds_ShannonBounds_Layered(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_ShannonBounds_ShannonBounds_PortRealisation(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ShannonBounds_ShannonBounds_Layered(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
