// Lean compiler output
// Module: ShannonBounds.C11AuxiliaryTrade
// Imports: public import Init public meta import Init public import ShannonBounds.CapCertC11
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
lean_object* lean_array_mk(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_List_finRange(lean_object*);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lp_mathlib_Fintype_decidablePiFintype___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_decidableBAll___redArg(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* lp_mathlib_Equiv_symm___redArg(lean_object*);
lean_object* lp_mathlib_Equiv_toEmbedding___redArg___lam__0(lean_object*, lean_object*);
lean_object* lp_mathlib_Multiset_map___redArg(lean_object*, lean_object*);
lean_object* l_Fin_cases___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lp_ShannonBounds_ShannonBounds_Letter_sep___boxed(lean_object*, lean_object*);
lean_object* lp_ShannonBounds_ShannonBounds_CertC11_eg3___boxed(lean_object*);
lean_object* lp_ShannonBounds_ShannonBounds_Substitutions_T3c___boxed(lean_object*);
lean_object* lp_mathlib_Finset_sum___at___00finFunctionFinEquiv_spec__0___redArg(lean_object*, lean_object*);
lean_object* lp_mathlib_Multiset_bind___redArg(lean_object*, lean_object*);
lean_object* lp_mathlib_Multiset_rec___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lp_mathlib_Finset_map___redArg(lean_object*, lean_object*);
lean_object* lp_mathlib_Finset_biUnion___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lp_ShannonBounds_ShannonBounds_sumEquiv___redArg(lean_object*, lean_object*);
lean_object* lp_ShannonBounds_ShannonBounds_CertC11_eh4___boxed(lean_object*);
lean_object* lp_ShannonBounds_ShannonBounds_Substitutions_T2b___boxed(lean_object*);
lean_object* lp_ShannonBounds_ShannonBounds_CertC11_eh5___boxed(lean_object*);
lean_object* lp_ShannonBounds_ShannonBounds_CertC11_eh6___boxed(lean_object*);
lean_object* lp_ShannonBounds_ShannonBounds_CertC11_eh7___boxed(lean_object*);
lean_object* lp_ShannonBounds_ShannonBounds_CertC11_eh8___boxed(lean_object*);
lean_object* lp_ShannonBounds_ShannonBounds_CertC11_eh9___boxed(lean_object*);
lean_object* lp_ShannonBounds_ShannonBounds_CertC11_eb2___boxed(lean_object*);
lean_object* lp_ShannonBounds_ShannonBounds_CertC11_ep11___boxed(lean_object*);
extern lean_object* lp_ShannonBounds_ShannonBounds_BaseC11_base;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lp_mathlib___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_List_Impl_0__List_eraseTR_go___at___00Multiset_erase___at___00Sym_erase___at___00Sym_e1_spec__0_spec__0_spec__1_spec__2(lean_object*, size_t, size_t, lean_object*);
lean_object* l_instDecidableEqFin___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lp_ShannonBounds_ShannonBounds_BaseC11_decG3___boxed(lean_object*, lean_object*);
uint8_t lp_ShannonBounds_ShannonBounds_decidableConflict___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lp_mathlib_Finset_decidableExistsAndFinset___redArg(lean_object*, lean_object*);
lean_object* lp_mathlib_Multiset_filter___redArg(lean_object*, lean_object*);
lean_object* lp_ShannonBounds_ShannonBounds_CertC11_eb3___boxed(lean_object*);
lean_object* lp_ShannonBounds_ShannonBounds_CertC11_eb4___boxed(lean_object*);
lean_object* lp_ShannonBounds_ShannonBounds_CertC11_eb5___boxed(lean_object*);
lean_object* lp_ShannonBounds_ShannonBounds_CertC11_eb6___boxed(lean_object*);
lean_object* lp_ShannonBounds_ShannonBounds_CertC11_eb7___boxed(lean_object*);
lean_object* lp_ShannonBounds_ShannonBounds_CertC11_eb8___boxed(lean_object*);
lean_object* lp_ShannonBounds_ShannonBounds_CertC11_eb9___boxed(lean_object*);
lean_object* lp_ShannonBounds_ShannonBounds_CertC11_eb10___boxed(lean_object*);
lean_object* lp_ShannonBounds_ShannonBounds_CertC11_eb11___boxed(lean_object*);
lean_object* lp_ShannonBounds_ShannonBounds_CertC11_eb12___boxed(lean_object*);
lean_object* lp_ShannonBounds_ShannonBounds_CertC11_eb13___boxed(lean_object*);
lean_object* lp_ShannonBounds_ShannonBounds_CertC11_ex29___boxed(lean_object*);
lean_object* lp_ShannonBounds_ShannonBounds_CertC11_ex27___boxed(lean_object*);
lean_object* lp_ShannonBounds_Multiset_ndinsert___at___00ShannonBounds_TerminalCodes_C3a_spec__0(lean_object*, lean_object*);
lean_object* lp_ShannonBounds_ShannonBounds_CertC11_eT___boxed(lean_object*);
extern lean_object* lp_ShannonBounds_ShannonBounds_TerminalCodes_C3a;
extern lean_object* lp_ShannonBounds_ShannonBounds_CapCertC11_iso207;
lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb13___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rx29___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* lp_ShannonBounds_ShannonBounds_Letter_enumList;
lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chx27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_ShannonBounds_ShannonBounds_Realisation_multiSubst___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_ShannonBounds_ShannonBounds_multiCodeSet___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_mathlib_Finset_image___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_N0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_N0___closed__0;
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_N0;
static lean_once_cell_t lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_N1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_N1___closed__0;
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_N1;
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__0(lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__0___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__1(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__0 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__0_value;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__0_value)} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__1 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__1_value;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__0_value)} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__2 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__2_value;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__2_value)} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__3 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__3_value;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__2_value)} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__4 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__4_value;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__4_value)} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__5 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__5_value;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__3_value)} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__6 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__6_value;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__0_value)} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__7 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__7_value;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__7_value)} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__8 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__8_value;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__8_value)} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__9 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__9_value;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__0_value)} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__10 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__10_value;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__7_value)} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__11 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__11_value;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__11_value)} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__12 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__12_value;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__1_value)} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__13 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__13_value;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__13_value)} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__14 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__14_value;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__2_value)} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__15 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__15_value;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__15_value)} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__16 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__16_value;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__4_value)} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__17 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__17_value;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__0_value)} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__18 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__18_value;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__18_value)} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__19 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__19_value;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__19_value)} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__20 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__20_value;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__18_value)} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__21 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__21_value;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__21_value)} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__22 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__22_value;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__21_value)} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__23 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__23_value;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__18_value)} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__24 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__24_value;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__24_value)} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__25 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__25_value;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__0_value)} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__26 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__26_value;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__2_value)} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__27 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__27_value;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__8_value)} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__28 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__28_value;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__27_value)} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__29 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__29_value;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__2_value)} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__30 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__30_value;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__26_value)} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__31 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__31_value;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__31_value)} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__32 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__32_value;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__11_value)} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__33 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__33_value;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__24_value)} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__34 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__34_value;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__30_value)} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__35 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__35_value;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__19_value)} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__36 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__36_value;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__2_value)} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__37 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__37_value;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__37_value)} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__38 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__38_value;
static const lean_ctor_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__34_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__39 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__39_value;
static lean_once_cell_t lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__40;
static lean_once_cell_t lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__41;
static lean_once_cell_t lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__42_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__42;
static lean_once_cell_t lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__43_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__43;
static lean_once_cell_t lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__44_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__44;
static lean_once_cell_t lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__45_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__45;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__1_value)} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__46 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__46_value;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__1_value)} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__47 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__47_value;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__7_value)} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__48 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__48_value;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__10_value)} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__49 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__49_value;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__10_value)} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__50 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__50_value;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__50_value)} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__51 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__51_value;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__49_value)} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__52 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__52_value;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__1_value)} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__53 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__53_value;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__53_value)} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__54 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__54_value;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__47_value)} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__55 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__55_value;
static const lean_ctor_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__54_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__56 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__56_value;
static lean_once_cell_t lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__57_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__57;
static lean_once_cell_t lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__58_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__58;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__1_value)} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__59 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__59_value;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__26_value)} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__60 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__60_value;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__18_value)} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__61 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__61_value;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__61_value)} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__62 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__62_value;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__1_value)} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__63 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__63_value;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__15_value)} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__64 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__64_value;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__63_value)} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__65 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__65_value;
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix(uint8_t);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___boxed(lean_object*);
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_S3mix___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_S3mix___closed__0 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_S3mix___closed__0_value;
LEAN_EXPORT const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_S3mix = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_S3mix___closed__0_value;
static lean_once_cell_t lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_wx27___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_wx27___closed__0;
static lean_once_cell_t lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_wx27___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_wx27___closed__1;
static lean_once_cell_t lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_wx27___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_wx27___closed__2;
static lean_once_cell_t lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_wx27___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_wx27___closed__3;
static lean_once_cell_t lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_wx27___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_wx27___closed__4;
static lean_once_cell_t lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_wx27___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_wx27___closed__5;
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_wx27(uint8_t);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_wx27___boxed(lean_object*);
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_Rx27___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_Letter_sep___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_Rx27___redArg___closed__0 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_Rx27___redArg___closed__0_value;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_Rx27___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_CertC11_ex27___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_Rx27___redArg___closed__1 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_Rx27___redArg___closed__1_value;
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_Rx27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_Rx27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_terminalChildren___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_terminalChildren___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_terminalChildren___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_terminalChildren___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_terminalChildren___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_terminalChildren___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_terminalChildren(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_terminalChildren___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___redArg___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___redArg___lam__1___closed__0;
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___redArg___lam__2(lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_CertC11_eT___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___redArg___closed__0 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___redArg___closed__0_value;
static lean_once_cell_t lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___redArg___closed__1;
static lean_once_cell_t lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___redArg___closed__2;
static lean_once_cell_t lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___redArg___closed__3;
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code207___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14___lam__0(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_Multiset_pi___at___00Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36_spec__50___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_Multiset_pi___at___00Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36_spec__50___redArg___lam__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_Multiset_Pi_cons___at___00Multiset_pi___at___00Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36_spec__50_spec__61___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_Multiset_Pi_cons___at___00Multiset_pi___at___00Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36_spec__50_spec__61___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_Multiset_pi___at___00Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36_spec__50___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_Multiset_pi___at___00Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36_spec__50___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_Multiset_pi___at___00Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36_spec__50___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_Multiset_pi___at___00Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36_spec__50___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_Multiset_pi___at___00Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36_spec__50___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_ShannonBounds_Multiset_pi___at___00Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36_spec__50___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_Multiset_pi___at___00Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36_spec__50___redArg___lam__3___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ShannonBounds_Multiset_pi___at___00Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36_spec__50___redArg___closed__0 = (const lean_object*)&lp_ShannonBounds_Multiset_pi___at___00Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36_spec__50___redArg___closed__0_value;
static const lean_ctor_object lp_ShannonBounds_Multiset_pi___at___00Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36_spec__50___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_ShannonBounds_Multiset_pi___at___00Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36_spec__50___redArg___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_ShannonBounds_Multiset_pi___at___00Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36_spec__50___redArg___closed__1 = (const lean_object*)&lp_ShannonBounds_Multiset_pi___at___00Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36_spec__50___redArg___closed__1_value;
LEAN_EXPORT lean_object* lp_ShannonBounds_Multiset_pi___at___00Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36_spec__50___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_Multiset_pi___at___00Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36_spec__50___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21___redArg___lam__0(lean_object*, lean_object*);
static const lean_closure_object lp_ShannonBounds_Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21___redArg___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ShannonBounds_Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21___redArg___closed__0 = (const lean_object*)&lp_ShannonBounds_Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21___redArg___closed__0_value;
LEAN_EXPORT lean_object* lp_ShannonBounds_Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_multiSubstSet___at___00ShannonBounds_Realisation_multiSubstFamily___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__24_spec__35___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_ShannonBounds_ShannonBounds_multiSubstSet___at___00ShannonBounds_Realisation_multiSubstFamily___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__24_spec__35___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4___lam__1___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ShannonBounds_ShannonBounds_multiSubstSet___at___00ShannonBounds_Realisation_multiSubstFamily___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__24_spec__35___closed__0 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_multiSubstSet___at___00ShannonBounds_Realisation_multiSubstFamily___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__24_spec__35___closed__0_value;
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_multiSubstSet___at___00ShannonBounds_Realisation_multiSubstFamily___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__24_spec__35(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_multiSubstSet___at___00ShannonBounds_Realisation_multiSubstFamily___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__24_spec__35___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_multiSubstFamily___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__24___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_multiSubstFamily___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__24___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_multiSubstFamily___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__24(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__2_spec__7_spec__17_spec__27_spec__42_spec__56_spec__67___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__2_spec__7_spec__17_spec__27_spec__42_spec__56_spec__67___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25_spec__37_spec__46_spec__57_spec__69_spec__78_spec__86_spec__90___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25_spec__37_spec__46_spec__57_spec__69_spec__78_spec__86_spec__90___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25_spec__37_spec__46_spec__57_spec__69_spec__78_spec__86_spec__90___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__2_spec__7_spec__17_spec__27_spec__42_spec__56_spec__67___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25_spec__37_spec__46_spec__57_spec__69_spec__78_spec__86_spec__90___closed__0 = (const lean_object*)&lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25_spec__37_spec__46_spec__57_spec__69_spec__78_spec__86_spec__90___closed__0_value;
LEAN_EXPORT lean_object* lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25_spec__37_spec__46_spec__57_spec__69_spec__78_spec__86_spec__90(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25_spec__37_spec__46_spec__57_spec__69_spec__78_spec__86_spec__90___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25_spec__37_spec__46_spec__57_spec__69_spec__78_spec__86(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25_spec__37_spec__46_spec__57_spec__69_spec__78___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25_spec__37_spec__46_spec__57(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25_spec__37_spec__46(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25_spec__37___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25___redArg___lam__1(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_mapIso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__30___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__30_spec__38_spec__50_spec__63_spec__72_spec__80_spec__84_spec__88___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__30_spec__38_spec__50_spec__63_spec__72_spec__80_spec__84_spec__88___closed__0;
LEAN_EXPORT lean_object* lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__30_spec__38_spec__50_spec__63_spec__72_spec__80_spec__84_spec__88(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__30_spec__38_spec__50_spec__63_spec__72_spec__80_spec__84_spec__88___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__30_spec__38_spec__50_spec__63_spec__72_spec__80_spec__84(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__30_spec__38_spec__50_spec__63_spec__72_spec__80___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__30_spec__38_spec__50_spec__63(lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__30_spec__38_spec__50(lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__30_spec__38___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_mapIso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__30___redArg___lam__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_mapIso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__30___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_mapIso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__30___redArg(lean_object*, lean_object*);
static lean_once_cell_t lp_ShannonBounds_ShannonBounds_strongPower__one__iso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__29___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ShannonBounds_ShannonBounds_strongPower__one__iso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__29___lam__0___closed__0;
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__one__iso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__29___lam__0(lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__one__iso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__29___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__one__iso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__29___lam__1___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_ShannonBounds_ShannonBounds_strongPower__one__iso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__29___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_strongPower__one__iso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__29___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ShannonBounds_ShannonBounds_strongPower__one__iso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__29___closed__0 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_strongPower__one__iso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__29___closed__0_value;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_strongPower__one__iso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__29___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_strongPower__one__iso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__29___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ShannonBounds_ShannonBounds_strongPower__one__iso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__29___closed__1 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_strongPower__one__iso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__29___closed__1_value;
static const lean_ctor_object lp_ShannonBounds_ShannonBounds_strongPower__one__iso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__29___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_ShannonBounds_ShannonBounds_strongPower__one__iso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__29___closed__0_value),((lean_object*)&lp_ShannonBounds_ShannonBounds_strongPower__one__iso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__29___closed__1_value)}};
static const lean_object* lp_ShannonBounds_ShannonBounds_strongPower__one__iso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__29___closed__2 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_strongPower__one__iso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__29___closed__2_value;
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__one__iso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__29(lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13___lam__0(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chg3___at___00ShannonBounds_CertC11_Rg3___at___00ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40_spec__50_spec__62___lam__1(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chg3___at___00ShannonBounds_CertC11_Rg3___at___00ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40_spec__50_spec__62___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chg3___at___00ShannonBounds_CertC11_Rg3___at___00ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40_spec__50_spec__62(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chg3___at___00ShannonBounds_CertC11_Rg3___at___00ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40_spec__50_spec__62___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rg3___at___00ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40_spec__50___lam__0(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rg3___at___00ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40_spec__50___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_ShannonBounds_ShannonBounds_CertC11_Rg3___at___00ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40_spec__50___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_CertC11_eg3___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rg3___at___00ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40_spec__50___closed__0 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_CertC11_Rg3___at___00ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40_spec__50___closed__0_value;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_CertC11_Rg3___at___00ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40_spec__50___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_Substitutions_T3c___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rg3___at___00ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40_spec__50___closed__1 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_CertC11_Rg3___at___00ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40_spec__50___closed__1_value;
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rg3___at___00ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40_spec__50(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chh4___at___00ShannonBounds_CertC11_Rh4___at___00ShannonBounds_CertC11_chh5___at___00ShannonBounds_CertC11_Rh5___at___00ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42_spec__53_spec__65_spec__76_spec__83(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chh4___at___00ShannonBounds_CertC11_Rh4___at___00ShannonBounds_CertC11_chh5___at___00ShannonBounds_CertC11_Rh5___at___00ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42_spec__53_spec__65_spec__76_spec__83___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rh4___at___00ShannonBounds_CertC11_chh5___at___00ShannonBounds_CertC11_Rh5___at___00ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42_spec__53_spec__65_spec__76___lam__0(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rh4___at___00ShannonBounds_CertC11_chh5___at___00ShannonBounds_CertC11_Rh5___at___00ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42_spec__53_spec__65_spec__76___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_ShannonBounds_ShannonBounds_CertC11_Rh4___at___00ShannonBounds_CertC11_chh5___at___00ShannonBounds_CertC11_Rh5___at___00ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42_spec__53_spec__65_spec__76___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_CertC11_eh4___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rh4___at___00ShannonBounds_CertC11_chh5___at___00ShannonBounds_CertC11_Rh5___at___00ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42_spec__53_spec__65_spec__76___closed__0 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_CertC11_Rh4___at___00ShannonBounds_CertC11_chh5___at___00ShannonBounds_CertC11_Rh5___at___00ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42_spec__53_spec__65_spec__76___closed__0_value;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_CertC11_Rh4___at___00ShannonBounds_CertC11_chh5___at___00ShannonBounds_CertC11_Rh5___at___00ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42_spec__53_spec__65_spec__76___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_Substitutions_T2b___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rh4___at___00ShannonBounds_CertC11_chh5___at___00ShannonBounds_CertC11_Rh5___at___00ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42_spec__53_spec__65_spec__76___closed__1 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_CertC11_Rh4___at___00ShannonBounds_CertC11_chh5___at___00ShannonBounds_CertC11_Rh5___at___00ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42_spec__53_spec__65_spec__76___closed__1_value;
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rh4___at___00ShannonBounds_CertC11_chh5___at___00ShannonBounds_CertC11_Rh5___at___00ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42_spec__53_spec__65_spec__76(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chh5___at___00ShannonBounds_CertC11_Rh5___at___00ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42_spec__53_spec__65(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chh5___at___00ShannonBounds_CertC11_Rh5___at___00ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42_spec__53_spec__65___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rh5___at___00ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42_spec__53___lam__0(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rh5___at___00ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42_spec__53___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_ShannonBounds_ShannonBounds_CertC11_Rh5___at___00ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42_spec__53___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_CertC11_eh5___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rh5___at___00ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42_spec__53___closed__0 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_CertC11_Rh5___at___00ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42_spec__53___closed__0_value;
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rh5___at___00ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42_spec__53(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29___lam__0(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_ShannonBounds_ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_CertC11_eh6___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29___closed__0 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29___closed__0_value;
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chh7___at___00ShannonBounds_CertC11_Rh7___at___00ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18_spec__33_spec__47(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chh7___at___00ShannonBounds_CertC11_Rh7___at___00ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18_spec__33_spec__47___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rh7___at___00ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18_spec__33___lam__0(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rh7___at___00ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18_spec__33___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_ShannonBounds_ShannonBounds_CertC11_Rh7___at___00ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18_spec__33___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_CertC11_eh7___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rh7___at___00ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18_spec__33___closed__0 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_CertC11_Rh7___at___00ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18_spec__33___closed__0_value;
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rh7___at___00ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18_spec__33(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chh8___at___00ShannonBounds_CertC11_Rh8___at___00ShannonBounds_CertC11_chh9___at___00ShannonBounds_CertC11_Rh9___at___00ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18_spec__32_spec__45_spec__56_spec__68(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chh8___at___00ShannonBounds_CertC11_Rh8___at___00ShannonBounds_CertC11_chh9___at___00ShannonBounds_CertC11_Rh9___at___00ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18_spec__32_spec__45_spec__56_spec__68___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rh8___at___00ShannonBounds_CertC11_chh9___at___00ShannonBounds_CertC11_Rh9___at___00ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18_spec__32_spec__45_spec__56___lam__0(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rh8___at___00ShannonBounds_CertC11_chh9___at___00ShannonBounds_CertC11_Rh9___at___00ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18_spec__32_spec__45_spec__56___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_ShannonBounds_ShannonBounds_CertC11_Rh8___at___00ShannonBounds_CertC11_chh9___at___00ShannonBounds_CertC11_Rh9___at___00ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18_spec__32_spec__45_spec__56___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_CertC11_eh8___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rh8___at___00ShannonBounds_CertC11_chh9___at___00ShannonBounds_CertC11_Rh9___at___00ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18_spec__32_spec__45_spec__56___closed__0 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_CertC11_Rh8___at___00ShannonBounds_CertC11_chh9___at___00ShannonBounds_CertC11_Rh9___at___00ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18_spec__32_spec__45_spec__56___closed__0_value;
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rh8___at___00ShannonBounds_CertC11_chh9___at___00ShannonBounds_CertC11_Rh9___at___00ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18_spec__32_spec__45_spec__56(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chh9___at___00ShannonBounds_CertC11_Rh9___at___00ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18_spec__32_spec__45(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chh9___at___00ShannonBounds_CertC11_Rh9___at___00ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18_spec__32_spec__45___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rh9___at___00ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18_spec__32___lam__0(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rh9___at___00ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18_spec__32___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_ShannonBounds_ShannonBounds_CertC11_Rh9___at___00ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18_spec__32___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_CertC11_eh9___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rh9___at___00ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18_spec__32___closed__0 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_CertC11_Rh9___at___00ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18_spec__32___closed__0_value;
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rh9___at___00ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18_spec__32(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18___lam__0(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chb2___at___00ShannonBounds_CertC11_Rb2___at___00ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40_spec__49_spec__60(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chb2___at___00ShannonBounds_CertC11_Rb2___at___00ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40_spec__49_spec__60___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb2___at___00ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40_spec__49___lam__0(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb2___at___00ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40_spec__49___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_ShannonBounds_ShannonBounds_CertC11_Rb2___at___00ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40_spec__49___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_CertC11_eb2___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb2___at___00ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40_spec__49___closed__0 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_CertC11_Rb2___at___00ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40_spec__49___closed__0_value;
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb2___at___00ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40_spec__49(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40___lam__0(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28___lam__0(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_ShannonBounds_ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_CertC11_ep11___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28___closed__0 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28___closed__0_value;
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10___lam__0(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chb3___at___00ShannonBounds_CertC11_Rb3___at___00ShannonBounds_CertC11_chb4___at___00ShannonBounds_CertC11_Rb4___at___00ShannonBounds_CertC11_chb5___at___00ShannonBounds_CertC11_Rb5___at___00ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98_spec__99_spec__100_spec__101_spec__102_spec__103_spec__104(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chb3___at___00ShannonBounds_CertC11_Rb3___at___00ShannonBounds_CertC11_chb4___at___00ShannonBounds_CertC11_Rb4___at___00ShannonBounds_CertC11_chb5___at___00ShannonBounds_CertC11_Rb5___at___00ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98_spec__99_spec__100_spec__101_spec__102_spec__103_spec__104___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb3___at___00ShannonBounds_CertC11_chb4___at___00ShannonBounds_CertC11_Rb4___at___00ShannonBounds_CertC11_chb5___at___00ShannonBounds_CertC11_Rb5___at___00ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98_spec__99_spec__100_spec__101_spec__102_spec__103___lam__0(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb3___at___00ShannonBounds_CertC11_chb4___at___00ShannonBounds_CertC11_Rb4___at___00ShannonBounds_CertC11_chb5___at___00ShannonBounds_CertC11_Rb5___at___00ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98_spec__99_spec__100_spec__101_spec__102_spec__103___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_ShannonBounds_ShannonBounds_CertC11_Rb3___at___00ShannonBounds_CertC11_chb4___at___00ShannonBounds_CertC11_Rb4___at___00ShannonBounds_CertC11_chb5___at___00ShannonBounds_CertC11_Rb5___at___00ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98_spec__99_spec__100_spec__101_spec__102_spec__103___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_CertC11_eb3___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb3___at___00ShannonBounds_CertC11_chb4___at___00ShannonBounds_CertC11_Rb4___at___00ShannonBounds_CertC11_chb5___at___00ShannonBounds_CertC11_Rb5___at___00ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98_spec__99_spec__100_spec__101_spec__102_spec__103___closed__0 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_CertC11_Rb3___at___00ShannonBounds_CertC11_chb4___at___00ShannonBounds_CertC11_Rb4___at___00ShannonBounds_CertC11_chb5___at___00ShannonBounds_CertC11_Rb5___at___00ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98_spec__99_spec__100_spec__101_spec__102_spec__103___closed__0_value;
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb3___at___00ShannonBounds_CertC11_chb4___at___00ShannonBounds_CertC11_Rb4___at___00ShannonBounds_CertC11_chb5___at___00ShannonBounds_CertC11_Rb5___at___00ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98_spec__99_spec__100_spec__101_spec__102_spec__103(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chb4___at___00ShannonBounds_CertC11_Rb4___at___00ShannonBounds_CertC11_chb5___at___00ShannonBounds_CertC11_Rb5___at___00ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98_spec__99_spec__100_spec__101_spec__102(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chb4___at___00ShannonBounds_CertC11_Rb4___at___00ShannonBounds_CertC11_chb5___at___00ShannonBounds_CertC11_Rb5___at___00ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98_spec__99_spec__100_spec__101_spec__102___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb4___at___00ShannonBounds_CertC11_chb5___at___00ShannonBounds_CertC11_Rb5___at___00ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98_spec__99_spec__100_spec__101___lam__0(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb4___at___00ShannonBounds_CertC11_chb5___at___00ShannonBounds_CertC11_Rb5___at___00ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98_spec__99_spec__100_spec__101___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_ShannonBounds_ShannonBounds_CertC11_Rb4___at___00ShannonBounds_CertC11_chb5___at___00ShannonBounds_CertC11_Rb5___at___00ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98_spec__99_spec__100_spec__101___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_CertC11_eb4___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb4___at___00ShannonBounds_CertC11_chb5___at___00ShannonBounds_CertC11_Rb5___at___00ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98_spec__99_spec__100_spec__101___closed__0 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_CertC11_Rb4___at___00ShannonBounds_CertC11_chb5___at___00ShannonBounds_CertC11_Rb5___at___00ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98_spec__99_spec__100_spec__101___closed__0_value;
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb4___at___00ShannonBounds_CertC11_chb5___at___00ShannonBounds_CertC11_Rb5___at___00ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98_spec__99_spec__100_spec__101(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chb5___at___00ShannonBounds_CertC11_Rb5___at___00ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98_spec__99_spec__100(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chb5___at___00ShannonBounds_CertC11_Rb5___at___00ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98_spec__99_spec__100___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb5___at___00ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98_spec__99___lam__0(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb5___at___00ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98_spec__99___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_ShannonBounds_ShannonBounds_CertC11_Rb5___at___00ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98_spec__99___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_CertC11_eb5___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb5___at___00ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98_spec__99___closed__0 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_CertC11_Rb5___at___00ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98_spec__99___closed__0_value;
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb5___at___00ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98_spec__99(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97___lam__0(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_ShannonBounds_ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_CertC11_eb6___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97___closed__0 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97___closed__0_value;
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95___lam__0(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_ShannonBounds_ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_CertC11_eb7___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95___closed__0 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95___closed__0_value;
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91___lam__0(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_ShannonBounds_ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_CertC11_eb8___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91___closed__0 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91___closed__0_value;
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83___lam__0(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_ShannonBounds_ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_CertC11_eb9___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83___closed__0 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83___closed__0_value;
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66___lam__0(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_ShannonBounds_ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_CertC11_eb10___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66___closed__0 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66___closed__0_value;
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41___lam__0(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_ShannonBounds_ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_CertC11_eb11___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41___closed__0 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41___closed__0_value;
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22___lam__0(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_ShannonBounds_ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_CertC11_eb12___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22___closed__0 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22___closed__0_value;
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16___lam__0(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9___lam__0(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_ShannonBounds_ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_CertC11_ex29___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9___closed__0 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9___closed__0_value;
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8___lam__0(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_ShannonBounds_ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_CertC11_eb13___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8___closed__0 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8___closed__0_value;
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3___lam__0(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1___lam__0(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__5_spec__14_spec__24_spec__39_spec__53_spec__64_spec__74___lam__1(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__5_spec__14_spec__24_spec__39_spec__53_spec__64_spec__74___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__5_spec__14_spec__24_spec__39_spec__53_spec__64_spec__74(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__5_spec__14_spec__24_spec__39_spec__53_spec__64_spec__74___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__5_spec__14_spec__24_spec__39_spec__53_spec__64(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__5_spec__14_spec__24_spec__39_spec__53___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__5_spec__14_spec__24(lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__5_spec__14(lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1___closed__0;
static lean_once_cell_t lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1___closed__1;
static lean_once_cell_t lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1___closed__2;
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1(lean_object*, lean_object*);
static lean_once_cell_t lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__2_spec__7_spec__17_spec__27_spec__42_spec__56_spec__67___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__2_spec__7_spec__17_spec__27_spec__42_spec__56_spec__67___lam__1___closed__0;
LEAN_EXPORT uint8_t lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__2_spec__7_spec__17_spec__27_spec__42_spec__56_spec__67___lam__1(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__2_spec__7_spec__17_spec__27_spec__42_spec__56_spec__67___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__2_spec__7_spec__17_spec__27_spec__42_spec__56_spec__67(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__2_spec__7_spec__17_spec__27_spec__42_spec__56_spec__67___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__2_spec__7_spec__17_spec__27_spec__42_spec__56(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__2_spec__7_spec__17_spec__27_spec__42___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__2_spec__7_spec__17(lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__2_spec__7(lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__4_spec__10_spec__18_spec__26_spec__34_spec__47_spec__60___lam__0(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__4_spec__10_spec__18_spec__26_spec__34_spec__47_spec__60___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__4_spec__10_spec__18_spec__26_spec__34_spec__47_spec__60(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__4_spec__10_spec__18_spec__26_spec__34_spec__47_spec__60___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__4_spec__10_spec__18_spec__26_spec__34_spec__47(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__4_spec__10_spec__18_spec__26_spec__34___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__4_spec__10_spec__18(lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__4_spec__10(lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_Finset_image___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__3___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__3___redArg___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__3___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instDecidableEqFin___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1331) << 1) | 1))} };
static const lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__3___redArg___closed__0 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__3___redArg___closed__0_value;
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__3___redArg(lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ShannonBounds_List_elem___at___00List_diff___at___00Multiset_sub___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__1_spec__5_spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_List_elem___at___00List_diff___at___00Multiset_sub___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__1_spec__5_spec__11___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Multiset_ndunion___at___00ShannonBounds_RichPortSystem_Xstar___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__2_spec__7_spec__15_spec__23(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Multiset_ndunion___at___00ShannonBounds_RichPortSystem_Xstar___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__2_spec__7_spec__15_spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_List_foldrTR___at___00Multiset_ndunion___at___00ShannonBounds_RichPortSystem_Xstar___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__2_spec__7_spec__15(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_Multiset_ndunion___at___00ShannonBounds_RichPortSystem_Xstar___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__2_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds___private_Init_Data_List_Impl_0__List_eraseTR_go___at___00List_diff___at___00Multiset_sub___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__1_spec__5_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds___private_Init_Data_List_Impl_0__List_eraseTR_go___at___00List_diff___at___00Multiset_sub___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__1_spec__5_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_ShannonBounds_List_diff___at___00Multiset_sub___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__1_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_ShannonBounds_List_diff___at___00Multiset_sub___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__1_spec__5___closed__0 = (const lean_object*)&lp_ShannonBounds_List_diff___at___00Multiset_sub___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__1_spec__5___closed__0_value;
LEAN_EXPORT lean_object* lp_ShannonBounds_List_diff___at___00Multiset_sub___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__1_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_List_diff___at___00Multiset_sub___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__1_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_Multiset_sub___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_Multiset_sub___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_Xstar___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0___lam__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0(lean_object*, lean_object*);
static lean_once_cell_t lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code207___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code207___closed__0;
static lean_once_cell_t lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code207___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code207___closed__1;
static lean_once_cell_t lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code207___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code207___closed__2;
static lean_once_cell_t lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code207___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code207___closed__3;
static lean_once_cell_t lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code207___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code207___closed__4;
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code207;
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__sum__iso___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__sum__iso___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__sum__iso___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__sum__iso___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__3(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_Finset_image___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__2_spec__7_spec__17_spec__27(lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__5_spec__14_spec__24_spec__39(lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__2_spec__7_spec__17_spec__27_spec__42(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__4_spec__10_spec__18_spec__26(lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_mapIso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__30(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_mapIso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__30___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25_spec__37(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_Multiset_Pi_cons___at___00Multiset_pi___at___00Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36_spec__50_spec__61(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_Multiset_Pi_cons___at___00Multiset_pi___at___00Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36_spec__50_spec__61___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_Multiset_pi___at___00Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36_spec__50(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_Multiset_pi___at___00Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36_spec__50___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__5_spec__14_spec__24_spec__39_spec__53(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__4_spec__10_spec__18_spec__26_spec__34(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__30_spec__38(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25_spec__37_spec__46_spec__57_spec__69(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__30_spec__38_spec__50_spec__63_spec__72(lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25_spec__37_spec__46_spec__57_spec__69_spec__78(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__30_spec__38_spec__50_spec__63_spec__72_spec__80(lean_object*, lean_object*);
static lean_object* _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_N0___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_cstr_to_nat("705688158939417766083006128695703821080101605304173623991920300506716846627203440324635068341693109509608786929844839653207121849017872676157797788816");
return v___x_1_;
}
}
static lean_object* _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_N0(void){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_obj_once(&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_N0___closed__0, &lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_N0___closed__0_once, _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_N0___closed__0);
return v___x_2_;
}
}
static lean_object* _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_N1___closed__0(void){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lean_cstr_to_nat("705692619930489413584189552943991443716392885026759451863953624242911159057444856108323516589876967077721069272782760798453832061060020786354479288616");
return v___x_3_;
}
}
static lean_object* _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_N1(void){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = lean_obj_once(&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_N1___closed__0, &lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_N1___closed__0_once, _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_N1___closed__0);
return v___x_4_;
}
}
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__0(lean_object* v___y_5_){
_start:
{
lean_internal_panic_unreachable();
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__0___boxed(lean_object* v___y_6_){
_start:
{
uint8_t v_res_7_; lean_object* v_r_8_; 
v_res_7_ = lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__0(v___y_6_);
lean_dec(v___y_6_);
v_r_8_ = lean_box(v_res_7_);
return v_r_8_;
}
}
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__1(uint8_t v_x_9_, lean_object* v___f_10_, lean_object* v___y_11_){
_start:
{
lean_object* v___x_12_; lean_object* v___x_13_; uint8_t v___x_14_; 
v___x_12_ = lean_box(v_x_9_);
v___x_13_ = l_Fin_cases___redArg(v___x_12_, v___f_10_, v___y_11_);
lean_dec(v___x_12_);
v___x_14_ = lean_unbox(v___x_13_);
lean_dec(v___x_13_);
return v___x_14_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__1___boxed(lean_object* v_x_15_, lean_object* v___f_16_, lean_object* v___y_17_){
_start:
{
uint8_t v_x_1745__boxed_18_; uint8_t v_res_19_; lean_object* v_r_20_; 
v_x_1745__boxed_18_ = lean_unbox(v_x_15_);
v_res_19_ = lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__1(v_x_1745__boxed_18_, v___f_16_, v___y_17_);
lean_dec(v___y_17_);
v_r_20_ = lean_box(v_res_19_);
return v_r_20_;
}
}
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4(uint8_t v___x_21_, lean_object* v___f_22_, lean_object* v___y_23_){
_start:
{
lean_object* v___x_24_; lean_object* v___x_25_; uint8_t v___x_26_; 
v___x_24_ = lean_box(v___x_21_);
v___x_25_ = l_Fin_cases___redArg(v___x_24_, v___f_22_, v___y_23_);
lean_dec(v___x_24_);
v___x_26_ = lean_unbox(v___x_25_);
lean_dec(v___x_25_);
return v___x_26_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed(lean_object* v___x_27_, lean_object* v___f_28_, lean_object* v___y_29_){
_start:
{
uint8_t v___x_1760__boxed_30_; uint8_t v_res_31_; lean_object* v_r_32_; 
v___x_1760__boxed_30_ = lean_unbox(v___x_27_);
v_res_31_ = lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4(v___x_1760__boxed_30_, v___f_28_, v___y_29_);
lean_dec(v___y_29_);
v_r_32_ = lean_box(v_res_31_);
return v_r_32_;
}
}
static lean_object* _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__40(void){
_start:
{
lean_object* v___x_189_; lean_object* v___f_190_; lean_object* v___x_191_; 
v___x_189_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__39));
v___f_190_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__35));
v___x_191_ = lp_ShannonBounds_Multiset_ndinsert___at___00ShannonBounds_TerminalCodes_C3a_spec__0(v___f_190_, v___x_189_);
return v___x_191_;
}
}
static lean_object* _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__41(void){
_start:
{
lean_object* v___x_192_; lean_object* v___f_193_; lean_object* v___x_194_; 
v___x_192_ = lean_obj_once(&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__40, &lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__40_once, _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__40);
v___f_193_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__36));
v___x_194_ = lp_ShannonBounds_Multiset_ndinsert___at___00ShannonBounds_TerminalCodes_C3a_spec__0(v___f_193_, v___x_192_);
return v___x_194_;
}
}
static lean_object* _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__42(void){
_start:
{
lean_object* v___x_195_; lean_object* v___f_196_; lean_object* v___x_197_; 
v___x_195_ = lean_obj_once(&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__41, &lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__41_once, _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__41);
v___f_196_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__38));
v___x_197_ = lp_ShannonBounds_Multiset_ndinsert___at___00ShannonBounds_TerminalCodes_C3a_spec__0(v___f_196_, v___x_195_);
return v___x_197_;
}
}
static lean_object* _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__43(void){
_start:
{
lean_object* v___x_198_; lean_object* v___f_199_; lean_object* v___x_200_; 
v___x_198_ = lean_obj_once(&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__42, &lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__42_once, _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__42);
v___f_199_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__32));
v___x_200_ = lp_ShannonBounds_Multiset_ndinsert___at___00ShannonBounds_TerminalCodes_C3a_spec__0(v___f_199_, v___x_198_);
return v___x_200_;
}
}
static lean_object* _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__44(void){
_start:
{
lean_object* v___x_201_; lean_object* v___f_202_; lean_object* v___x_203_; 
v___x_201_ = lean_obj_once(&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__43, &lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__43_once, _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__43);
v___f_202_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__29));
v___x_203_ = lp_ShannonBounds_Multiset_ndinsert___at___00ShannonBounds_TerminalCodes_C3a_spec__0(v___f_202_, v___x_201_);
return v___x_203_;
}
}
static lean_object* _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__45(void){
_start:
{
lean_object* v___x_204_; lean_object* v___f_205_; lean_object* v___x_206_; 
v___x_204_ = lean_obj_once(&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__44, &lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__44_once, _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__44);
v___f_205_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__33));
v___x_206_ = lp_ShannonBounds_Multiset_ndinsert___at___00ShannonBounds_TerminalCodes_C3a_spec__0(v___f_205_, v___x_204_);
return v___x_206_;
}
}
static lean_object* _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__57(void){
_start:
{
lean_object* v___x_250_; lean_object* v___f_251_; lean_object* v___x_252_; 
v___x_250_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__56));
v___f_251_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__52));
v___x_252_ = lp_ShannonBounds_Multiset_ndinsert___at___00ShannonBounds_TerminalCodes_C3a_spec__0(v___f_251_, v___x_250_);
return v___x_252_;
}
}
static lean_object* _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__58(void){
_start:
{
lean_object* v___x_253_; lean_object* v___f_254_; lean_object* v___x_255_; 
v___x_253_ = lean_obj_once(&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__57, &lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__57_once, _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__57);
v___f_254_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__55));
v___x_255_ = lp_ShannonBounds_Multiset_ndinsert___at___00ShannonBounds_TerminalCodes_C3a_spec__0(v___f_254_, v___x_253_);
return v___x_255_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix(uint8_t v_x_284_){
_start:
{
switch(v_x_284_)
{
case 0:
{
lean_object* v___f_285_; lean_object* v___x_286_; lean_object* v___f_287_; lean_object* v___x_288_; lean_object* v___f_289_; lean_object* v___x_290_; lean_object* v___f_291_; lean_object* v___f_292_; uint8_t v___x_293_; lean_object* v___x_294_; lean_object* v___f_295_; lean_object* v___f_296_; lean_object* v___f_297_; uint8_t v___x_298_; lean_object* v___x_299_; lean_object* v___f_300_; lean_object* v___f_301_; lean_object* v___x_302_; lean_object* v___f_303_; uint8_t v___x_304_; lean_object* v___f_305_; lean_object* v___f_306_; lean_object* v___f_307_; lean_object* v___f_308_; lean_object* v___x_309_; lean_object* v___f_310_; lean_object* v___f_311_; lean_object* v___f_312_; lean_object* v___f_313_; lean_object* v___f_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; 
v___f_285_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__0));
v___x_286_ = lean_box(v_x_284_);
v___f_287_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__1___boxed), 3, 2);
lean_closure_set(v___f_287_, 0, v___x_286_);
lean_closure_set(v___f_287_, 1, v___f_285_);
v___x_288_ = lean_box(v_x_284_);
lean_inc_ref(v___f_287_);
v___f_289_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__1___boxed), 3, 2);
lean_closure_set(v___f_289_, 0, v___x_288_);
lean_closure_set(v___f_289_, 1, v___f_287_);
v___x_290_ = lean_box(v_x_284_);
v___f_291_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__1___boxed), 3, 2);
lean_closure_set(v___f_291_, 0, v___x_290_);
lean_closure_set(v___f_291_, 1, v___f_289_);
v___f_292_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__5));
v___x_293_ = 3;
v___x_294_ = lean_box(v___x_293_);
v___f_295_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed), 3, 2);
lean_closure_set(v___f_295_, 0, v___x_294_);
lean_closure_set(v___f_295_, 1, v___f_287_);
v___f_296_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__6));
v___f_297_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__9));
v___x_298_ = 6;
v___x_299_ = lean_box(v___x_298_);
v___f_300_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed), 3, 2);
lean_closure_set(v___f_300_, 0, v___x_299_);
lean_closure_set(v___f_300_, 1, v___f_295_);
v___f_301_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__10));
v___x_302_ = lean_box(v_x_284_);
v___f_303_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__1___boxed), 3, 2);
lean_closure_set(v___f_303_, 0, v___x_302_);
lean_closure_set(v___f_303_, 1, v___f_301_);
v___x_304_ = 2;
v___f_305_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__12));
v___f_306_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__14));
v___f_307_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__16));
v___f_308_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__17));
v___x_309_ = lean_box(v___x_304_);
v___f_310_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed), 3, 2);
lean_closure_set(v___f_310_, 0, v___x_309_);
lean_closure_set(v___f_310_, 1, v___f_303_);
v___f_311_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__20));
v___f_312_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__22));
v___f_313_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__23));
v___f_314_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__25));
v___x_315_ = lean_box(0);
v___x_316_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_316_, 0, v___f_300_);
lean_ctor_set(v___x_316_, 1, v___x_315_);
v___x_317_ = lp_ShannonBounds_Multiset_ndinsert___at___00ShannonBounds_TerminalCodes_C3a_spec__0(v___f_305_, v___x_316_);
v___x_318_ = lp_ShannonBounds_Multiset_ndinsert___at___00ShannonBounds_TerminalCodes_C3a_spec__0(v___f_292_, v___x_317_);
v___x_319_ = lp_ShannonBounds_Multiset_ndinsert___at___00ShannonBounds_TerminalCodes_C3a_spec__0(v___f_311_, v___x_318_);
v___x_320_ = lp_ShannonBounds_Multiset_ndinsert___at___00ShannonBounds_TerminalCodes_C3a_spec__0(v___f_306_, v___x_319_);
v___x_321_ = lp_ShannonBounds_Multiset_ndinsert___at___00ShannonBounds_TerminalCodes_C3a_spec__0(v___f_314_, v___x_320_);
v___x_322_ = lp_ShannonBounds_Multiset_ndinsert___at___00ShannonBounds_TerminalCodes_C3a_spec__0(v___f_307_, v___x_321_);
v___x_323_ = lp_ShannonBounds_Multiset_ndinsert___at___00ShannonBounds_TerminalCodes_C3a_spec__0(v___f_296_, v___x_322_);
v___x_324_ = lp_ShannonBounds_Multiset_ndinsert___at___00ShannonBounds_TerminalCodes_C3a_spec__0(v___f_312_, v___x_323_);
v___x_325_ = lp_ShannonBounds_Multiset_ndinsert___at___00ShannonBounds_TerminalCodes_C3a_spec__0(v___f_308_, v___x_324_);
v___x_326_ = lp_ShannonBounds_Multiset_ndinsert___at___00ShannonBounds_TerminalCodes_C3a_spec__0(v___f_310_, v___x_325_);
v___x_327_ = lp_ShannonBounds_Multiset_ndinsert___at___00ShannonBounds_TerminalCodes_C3a_spec__0(v___f_313_, v___x_326_);
v___x_328_ = lp_ShannonBounds_Multiset_ndinsert___at___00ShannonBounds_TerminalCodes_C3a_spec__0(v___f_297_, v___x_327_);
v___x_329_ = lp_ShannonBounds_Multiset_ndinsert___at___00ShannonBounds_TerminalCodes_C3a_spec__0(v___f_291_, v___x_328_);
return v___x_329_;
}
case 1:
{
lean_object* v___f_330_; lean_object* v___x_331_; lean_object* v___f_332_; lean_object* v___x_333_; lean_object* v___f_334_; lean_object* v___x_335_; lean_object* v___f_336_; lean_object* v___f_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; 
v___f_330_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__0));
v___x_331_ = lean_box(v_x_284_);
v___f_332_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__1___boxed), 3, 2);
lean_closure_set(v___f_332_, 0, v___x_331_);
lean_closure_set(v___f_332_, 1, v___f_330_);
v___x_333_ = lean_box(v_x_284_);
v___f_334_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__1___boxed), 3, 2);
lean_closure_set(v___f_334_, 0, v___x_333_);
lean_closure_set(v___f_334_, 1, v___f_332_);
v___x_335_ = lean_box(v_x_284_);
v___f_336_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__1___boxed), 3, 2);
lean_closure_set(v___f_336_, 0, v___x_335_);
lean_closure_set(v___f_336_, 1, v___f_334_);
v___f_337_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__28));
v___x_338_ = lean_obj_once(&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__45, &lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__45_once, _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__45);
v___x_339_ = lp_ShannonBounds_Multiset_ndinsert___at___00ShannonBounds_TerminalCodes_C3a_spec__0(v___f_336_, v___x_338_);
v___x_340_ = lp_ShannonBounds_Multiset_ndinsert___at___00ShannonBounds_TerminalCodes_C3a_spec__0(v___f_337_, v___x_339_);
return v___x_340_;
}
case 2:
{
lean_object* v___f_341_; lean_object* v___x_342_; lean_object* v___f_343_; uint8_t v___x_344_; lean_object* v___f_345_; lean_object* v___x_346_; lean_object* v___f_347_; uint8_t v___x_348_; lean_object* v___f_349_; lean_object* v___x_350_; lean_object* v___f_351_; lean_object* v___x_352_; lean_object* v___f_353_; lean_object* v___x_354_; lean_object* v___f_355_; lean_object* v___x_356_; lean_object* v___f_357_; uint8_t v___x_358_; lean_object* v___f_359_; lean_object* v___x_360_; lean_object* v___f_361_; lean_object* v___x_362_; lean_object* v___f_363_; lean_object* v___x_364_; lean_object* v___f_365_; lean_object* v___f_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; 
v___f_341_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__0));
v___x_342_ = lean_box(v_x_284_);
v___f_343_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__1___boxed), 3, 2);
lean_closure_set(v___f_343_, 0, v___x_342_);
lean_closure_set(v___f_343_, 1, v___f_341_);
v___x_344_ = 0;
v___f_345_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__26));
v___x_346_ = lean_box(v_x_284_);
v___f_347_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__1___boxed), 3, 2);
lean_closure_set(v___f_347_, 0, v___x_346_);
lean_closure_set(v___f_347_, 1, v___f_345_);
v___x_348_ = 1;
v___f_349_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__46));
v___x_350_ = lean_box(v_x_284_);
v___f_351_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__1___boxed), 3, 2);
lean_closure_set(v___f_351_, 0, v___x_350_);
lean_closure_set(v___f_351_, 1, v___f_349_);
v___x_352_ = lean_box(v___x_348_);
v___f_353_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed), 3, 2);
lean_closure_set(v___f_353_, 0, v___x_352_);
lean_closure_set(v___f_353_, 1, v___f_347_);
v___x_354_ = lean_box(v___x_348_);
lean_inc_ref(v___f_343_);
v___f_355_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed), 3, 2);
lean_closure_set(v___f_355_, 0, v___x_354_);
lean_closure_set(v___f_355_, 1, v___f_343_);
v___x_356_ = lean_box(v___x_344_);
v___f_357_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed), 3, 2);
lean_closure_set(v___f_357_, 0, v___x_356_);
lean_closure_set(v___f_357_, 1, v___f_355_);
v___x_358_ = 3;
v___f_359_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__48));
v___x_360_ = lean_box(v_x_284_);
v___f_361_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__1___boxed), 3, 2);
lean_closure_set(v___f_361_, 0, v___x_360_);
lean_closure_set(v___f_361_, 1, v___f_359_);
v___x_362_ = lean_box(v___x_358_);
v___f_363_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed), 3, 2);
lean_closure_set(v___f_363_, 0, v___x_362_);
lean_closure_set(v___f_363_, 1, v___f_343_);
v___x_364_ = lean_box(v___x_344_);
v___f_365_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed), 3, 2);
lean_closure_set(v___f_365_, 0, v___x_364_);
lean_closure_set(v___f_365_, 1, v___f_363_);
v___f_366_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__51));
v___x_367_ = lean_obj_once(&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__58, &lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__58_once, _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__58);
v___x_368_ = lp_ShannonBounds_Multiset_ndinsert___at___00ShannonBounds_TerminalCodes_C3a_spec__0(v___f_361_, v___x_367_);
v___x_369_ = lp_ShannonBounds_Multiset_ndinsert___at___00ShannonBounds_TerminalCodes_C3a_spec__0(v___f_351_, v___x_368_);
v___x_370_ = lp_ShannonBounds_Multiset_ndinsert___at___00ShannonBounds_TerminalCodes_C3a_spec__0(v___f_353_, v___x_369_);
v___x_371_ = lp_ShannonBounds_Multiset_ndinsert___at___00ShannonBounds_TerminalCodes_C3a_spec__0(v___f_366_, v___x_370_);
v___x_372_ = lp_ShannonBounds_Multiset_ndinsert___at___00ShannonBounds_TerminalCodes_C3a_spec__0(v___f_365_, v___x_371_);
v___x_373_ = lp_ShannonBounds_Multiset_ndinsert___at___00ShannonBounds_TerminalCodes_C3a_spec__0(v___f_357_, v___x_372_);
return v___x_373_;
}
case 3:
{
lean_object* v___f_374_; lean_object* v___x_375_; lean_object* v___f_376_; uint8_t v___x_377_; lean_object* v___f_378_; lean_object* v___f_379_; lean_object* v___x_380_; lean_object* v___f_381_; lean_object* v___x_382_; lean_object* v___f_383_; lean_object* v___x_384_; lean_object* v___f_385_; lean_object* v___x_386_; lean_object* v___f_387_; lean_object* v___x_388_; lean_object* v___f_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; 
v___f_374_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__0));
v___x_375_ = lean_box(v_x_284_);
v___f_376_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__1___boxed), 3, 2);
lean_closure_set(v___f_376_, 0, v___x_375_);
lean_closure_set(v___f_376_, 1, v___f_374_);
v___x_377_ = 1;
v___f_378_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__1));
v___f_379_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__59));
v___x_380_ = lean_box(v_x_284_);
v___f_381_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__1___boxed), 3, 2);
lean_closure_set(v___f_381_, 0, v___x_380_);
lean_closure_set(v___f_381_, 1, v___f_379_);
v___x_382_ = lean_box(v_x_284_);
v___f_383_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__1___boxed), 3, 2);
lean_closure_set(v___f_383_, 0, v___x_382_);
lean_closure_set(v___f_383_, 1, v___f_378_);
v___x_384_ = lean_box(v___x_377_);
v___f_385_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed), 3, 2);
lean_closure_set(v___f_385_, 0, v___x_384_);
lean_closure_set(v___f_385_, 1, v___f_383_);
v___x_386_ = lean_box(v___x_377_);
v___f_387_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed), 3, 2);
lean_closure_set(v___f_387_, 0, v___x_386_);
lean_closure_set(v___f_387_, 1, v___f_376_);
v___x_388_ = lean_box(v___x_377_);
v___f_389_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed), 3, 2);
lean_closure_set(v___f_389_, 0, v___x_388_);
lean_closure_set(v___f_389_, 1, v___f_387_);
v___x_390_ = lean_box(0);
v___x_391_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_391_, 0, v___f_381_);
lean_ctor_set(v___x_391_, 1, v___x_390_);
v___x_392_ = lp_ShannonBounds_Multiset_ndinsert___at___00ShannonBounds_TerminalCodes_C3a_spec__0(v___f_385_, v___x_391_);
v___x_393_ = lp_ShannonBounds_Multiset_ndinsert___at___00ShannonBounds_TerminalCodes_C3a_spec__0(v___f_389_, v___x_392_);
return v___x_393_;
}
case 4:
{
lean_object* v___x_394_; 
v___x_394_ = lean_box(0);
return v___x_394_;
}
case 5:
{
lean_object* v___f_395_; lean_object* v___x_396_; lean_object* v___f_397_; uint8_t v___x_398_; lean_object* v___x_399_; lean_object* v___f_400_; uint8_t v___x_401_; lean_object* v___f_402_; lean_object* v___x_403_; lean_object* v___f_404_; lean_object* v___x_405_; lean_object* v___f_406_; lean_object* v___f_407_; lean_object* v___x_408_; lean_object* v___f_409_; lean_object* v___x_410_; lean_object* v___f_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; 
v___f_395_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__0));
v___x_396_ = lean_box(v_x_284_);
v___f_397_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__1___boxed), 3, 2);
lean_closure_set(v___f_397_, 0, v___x_396_);
lean_closure_set(v___f_397_, 1, v___f_395_);
v___x_398_ = 0;
v___x_399_ = lean_box(v___x_398_);
v___f_400_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed), 3, 2);
lean_closure_set(v___f_400_, 0, v___x_399_);
lean_closure_set(v___f_400_, 1, v___f_397_);
v___x_401_ = 1;
v___f_402_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__60));
v___x_403_ = lean_box(v_x_284_);
v___f_404_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__1___boxed), 3, 2);
lean_closure_set(v___f_404_, 0, v___x_403_);
lean_closure_set(v___f_404_, 1, v___f_402_);
v___x_405_ = lean_box(v___x_401_);
v___f_406_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed), 3, 2);
lean_closure_set(v___f_406_, 0, v___x_405_);
lean_closure_set(v___f_406_, 1, v___f_400_);
v___f_407_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__1));
v___x_408_ = lean_box(v_x_284_);
v___f_409_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__1___boxed), 3, 2);
lean_closure_set(v___f_409_, 0, v___x_408_);
lean_closure_set(v___f_409_, 1, v___f_407_);
v___x_410_ = lean_box(v___x_398_);
v___f_411_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed), 3, 2);
lean_closure_set(v___f_411_, 0, v___x_410_);
lean_closure_set(v___f_411_, 1, v___f_409_);
v___x_412_ = lean_box(0);
v___x_413_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_413_, 0, v___f_404_);
lean_ctor_set(v___x_413_, 1, v___x_412_);
v___x_414_ = lp_ShannonBounds_Multiset_ndinsert___at___00ShannonBounds_TerminalCodes_C3a_spec__0(v___f_406_, v___x_413_);
v___x_415_ = lp_ShannonBounds_Multiset_ndinsert___at___00ShannonBounds_TerminalCodes_C3a_spec__0(v___f_411_, v___x_414_);
return v___x_415_;
}
default: 
{
lean_object* v___f_416_; lean_object* v___x_417_; lean_object* v___f_418_; uint8_t v___x_419_; lean_object* v___x_420_; lean_object* v___f_421_; lean_object* v___x_422_; lean_object* v___f_423_; lean_object* v___f_424_; lean_object* v___x_425_; lean_object* v___f_426_; lean_object* v___x_427_; lean_object* v___f_428_; lean_object* v___f_429_; lean_object* v___x_430_; lean_object* v___f_431_; uint8_t v___x_432_; lean_object* v___x_433_; lean_object* v___f_434_; lean_object* v___f_435_; lean_object* v___f_436_; uint8_t v___x_437_; lean_object* v___f_438_; lean_object* v___x_439_; lean_object* v___f_440_; lean_object* v___f_441_; lean_object* v___x_442_; lean_object* v___f_443_; lean_object* v___x_444_; lean_object* v___f_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; 
v___f_416_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__0));
v___x_417_ = lean_box(v_x_284_);
v___f_418_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__1___boxed), 3, 2);
lean_closure_set(v___f_418_, 0, v___x_417_);
lean_closure_set(v___f_418_, 1, v___f_416_);
v___x_419_ = 1;
v___x_420_ = lean_box(v___x_419_);
lean_inc_ref(v___f_418_);
v___f_421_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed), 3, 2);
lean_closure_set(v___f_421_, 0, v___x_420_);
lean_closure_set(v___f_421_, 1, v___f_418_);
v___x_422_ = lean_box(v___x_419_);
v___f_423_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed), 3, 2);
lean_closure_set(v___f_423_, 0, v___x_422_);
lean_closure_set(v___f_423_, 1, v___f_421_);
v___f_424_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__1));
v___x_425_ = lean_box(v_x_284_);
v___f_426_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__1___boxed), 3, 2);
lean_closure_set(v___f_426_, 0, v___x_425_);
lean_closure_set(v___f_426_, 1, v___f_424_);
v___x_427_ = lean_box(v___x_419_);
lean_inc_ref(v___f_426_);
v___f_428_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed), 3, 2);
lean_closure_set(v___f_428_, 0, v___x_427_);
lean_closure_set(v___f_428_, 1, v___f_426_);
v___f_429_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__59));
v___x_430_ = lean_box(v_x_284_);
v___f_431_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__1___boxed), 3, 2);
lean_closure_set(v___f_431_, 0, v___x_430_);
lean_closure_set(v___f_431_, 1, v___f_429_);
v___x_432_ = 2;
v___x_433_ = lean_box(v___x_432_);
v___f_434_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed), 3, 2);
lean_closure_set(v___f_434_, 0, v___x_433_);
lean_closure_set(v___f_434_, 1, v___f_426_);
v___f_435_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__62));
v___f_436_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__64));
v___x_437_ = 3;
v___f_438_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__48));
v___x_439_ = lean_box(v_x_284_);
v___f_440_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__1___boxed), 3, 2);
lean_closure_set(v___f_440_, 0, v___x_439_);
lean_closure_set(v___f_440_, 1, v___f_438_);
v___f_441_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___closed__65));
v___x_442_ = lean_box(v___x_437_);
v___f_443_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed), 3, 2);
lean_closure_set(v___f_443_, 0, v___x_442_);
lean_closure_set(v___f_443_, 1, v___f_418_);
v___x_444_ = lean_box(v___x_419_);
v___f_445_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___lam__4___boxed), 3, 2);
lean_closure_set(v___f_445_, 0, v___x_444_);
lean_closure_set(v___f_445_, 1, v___f_443_);
v___x_446_ = lean_box(0);
v___x_447_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_447_, 0, v___f_440_);
lean_ctor_set(v___x_447_, 1, v___x_446_);
v___x_448_ = lp_ShannonBounds_Multiset_ndinsert___at___00ShannonBounds_TerminalCodes_C3a_spec__0(v___f_431_, v___x_447_);
v___x_449_ = lp_ShannonBounds_Multiset_ndinsert___at___00ShannonBounds_TerminalCodes_C3a_spec__0(v___f_435_, v___x_448_);
v___x_450_ = lp_ShannonBounds_Multiset_ndinsert___at___00ShannonBounds_TerminalCodes_C3a_spec__0(v___f_441_, v___x_449_);
v___x_451_ = lp_ShannonBounds_Multiset_ndinsert___at___00ShannonBounds_TerminalCodes_C3a_spec__0(v___f_434_, v___x_450_);
v___x_452_ = lp_ShannonBounds_Multiset_ndinsert___at___00ShannonBounds_TerminalCodes_C3a_spec__0(v___f_428_, v___x_451_);
v___x_453_ = lp_ShannonBounds_Multiset_ndinsert___at___00ShannonBounds_TerminalCodes_C3a_spec__0(v___f_445_, v___x_452_);
v___x_454_ = lp_ShannonBounds_Multiset_ndinsert___at___00ShannonBounds_TerminalCodes_C3a_spec__0(v___f_436_, v___x_453_);
v___x_455_ = lp_ShannonBounds_Multiset_ndinsert___at___00ShannonBounds_TerminalCodes_C3a_spec__0(v___f_423_, v___x_454_);
return v___x_455_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix___boxed(lean_object* v_x_456_){
_start:
{
uint8_t v_x_2235__boxed_457_; lean_object* v_res_458_; 
v_x_2235__boxed_457_ = lean_unbox(v_x_456_);
v_res_458_ = lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_T3mix(v_x_2235__boxed_457_);
return v_res_458_;
}
}
static lean_object* _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_wx27___closed__0(void){
_start:
{
lean_object* v___x_461_; 
v___x_461_ = lean_cstr_to_nat("29838441714094862993252839013822328163235607901233033567784");
return v___x_461_;
}
}
static lean_object* _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_wx27___closed__1(void){
_start:
{
lean_object* v___x_462_; 
v___x_462_ = lean_cstr_to_nat("16419042195110117076482146261872104062736709010101742840630");
return v___x_462_;
}
}
static lean_object* _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_wx27___closed__2(void){
_start:
{
lean_object* v___x_463_; 
v___x_463_ = lean_cstr_to_nat("15927372935116998524593435502424494652953852367704485281765");
return v___x_463_;
}
}
static lean_object* _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_wx27___closed__3(void){
_start:
{
lean_object* v___x_464_; 
v___x_464_ = lean_cstr_to_nat("7696826188722826294170981742359508014219650447768917984455");
return v___x_464_;
}
}
static lean_object* _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_wx27___closed__4(void){
_start:
{
lean_object* v___x_465_; 
v___x_465_ = lean_cstr_to_nat("10236321091594989029757595214383341180131411905782531251025");
return v___x_465_;
}
}
static lean_object* _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_wx27___closed__5(void){
_start:
{
lean_object* v___x_466_; 
v___x_466_ = lean_cstr_to_nat("12797544891705780685227304634800778404795174307344939401927");
return v___x_466_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_wx27(uint8_t v_x_467_){
_start:
{
switch(v_x_467_)
{
case 0:
{
lean_object* v___x_468_; 
v___x_468_ = lean_obj_once(&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_wx27___closed__0, &lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_wx27___closed__0_once, _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_wx27___closed__0);
return v___x_468_;
}
case 1:
{
lean_object* v___x_469_; 
v___x_469_ = lean_obj_once(&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_wx27___closed__1, &lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_wx27___closed__1_once, _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_wx27___closed__1);
return v___x_469_;
}
case 2:
{
lean_object* v___x_470_; 
v___x_470_ = lean_obj_once(&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_wx27___closed__2, &lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_wx27___closed__2_once, _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_wx27___closed__2);
return v___x_470_;
}
case 3:
{
lean_object* v___x_471_; 
v___x_471_ = lean_obj_once(&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_wx27___closed__3, &lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_wx27___closed__3_once, _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_wx27___closed__3);
return v___x_471_;
}
case 4:
{
lean_object* v___x_472_; 
v___x_472_ = lean_unsigned_to_nat(0u);
return v___x_472_;
}
case 5:
{
lean_object* v___x_473_; 
v___x_473_ = lean_obj_once(&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_wx27___closed__4, &lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_wx27___closed__4_once, _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_wx27___closed__4);
return v___x_473_;
}
default: 
{
lean_object* v___x_474_; 
v___x_474_ = lean_obj_once(&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_wx27___closed__5, &lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_wx27___closed__5_once, _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_wx27___closed__5);
return v___x_474_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_wx27___boxed(lean_object* v_x_475_){
_start:
{
uint8_t v_x_86__boxed_476_; lean_object* v_res_477_; 
v_x_86__boxed_476_ = lean_unbox(v_x_475_);
v_res_477_ = lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_wx27(v_x_86__boxed_476_);
return v_res_477_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_Rx27___redArg(lean_object* v_inst_480_, lean_object* v_inst_481_, lean_object* v_G_482_, lean_object* v_inst_483_, lean_object* v_R_484_){
_start:
{
lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; 
v___x_485_ = lp_ShannonBounds_ShannonBounds_Letter_enumList;
v___x_486_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_Rx27___redArg___closed__0));
v___x_487_ = lean_unsigned_to_nat(3u);
v___x_488_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_Rx27___redArg___closed__1));
lean_inc_ref(v_inst_483_);
lean_inc_ref(v_inst_481_);
v___x_489_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_CertC11_chx27___boxed), 7, 6);
lean_closure_set(v___x_489_, 0, lean_box(0));
lean_closure_set(v___x_489_, 1, v_inst_480_);
lean_closure_set(v___x_489_, 2, v_inst_481_);
lean_closure_set(v___x_489_, 3, v_G_482_);
lean_closure_set(v___x_489_, 4, v_inst_483_);
lean_closure_set(v___x_489_, 5, v_R_484_);
v___x_490_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_S3mix___closed__0));
v___x_491_ = lp_ShannonBounds_ShannonBounds_Realisation_multiSubst___redArg(v_inst_481_, v___x_485_, v___x_486_, v_G_482_, v_inst_483_, v___x_487_, v___x_488_, v___x_489_, v___x_490_);
return v___x_491_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_Rx27(lean_object* v_00_u03b1_492_, lean_object* v_inst_493_, lean_object* v_inst_494_, lean_object* v_G_495_, lean_object* v_inst_496_, lean_object* v_R_497_){
_start:
{
lean_object* v___x_498_; 
v___x_498_ = lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_Rx27___redArg(v_inst_493_, v_inst_494_, v_G_495_, v_inst_496_, v_R_497_);
return v___x_498_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_terminalChildren___redArg___lam__0(lean_object* v_inst_499_, lean_object* v_inst_500_, lean_object* v_G_501_, lean_object* v_inst_502_, lean_object* v_R_503_, lean_object* v_x_504_, uint8_t v___y_505_){
_start:
{
lean_object* v___x_34__overap_506_; lean_object* v___x_507_; lean_object* v___x_508_; 
v___x_34__overap_506_ = lp_ShannonBounds_ShannonBounds_CertC11_Rb13___redArg(v_inst_499_, v_inst_500_, v_G_501_, v_inst_502_, v_R_503_);
v___x_507_ = lean_box(v___y_505_);
v___x_508_ = lean_apply_1(v___x_34__overap_506_, v___x_507_);
return v___x_508_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_terminalChildren___redArg___lam__0___boxed(lean_object* v_inst_509_, lean_object* v_inst_510_, lean_object* v_G_511_, lean_object* v_inst_512_, lean_object* v_R_513_, lean_object* v_x_514_, lean_object* v___y_515_){
_start:
{
uint8_t v___y_46__boxed_516_; lean_object* v_res_517_; 
v___y_46__boxed_516_ = lean_unbox(v___y_515_);
v_res_517_ = lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_terminalChildren___redArg___lam__0(v_inst_509_, v_inst_510_, v_G_511_, v_inst_512_, v_R_513_, v_x_514_, v___y_46__boxed_516_);
lean_dec(v_x_514_);
return v_res_517_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_terminalChildren___redArg___lam__1(lean_object* v_inst_518_, lean_object* v_inst_519_, lean_object* v_G_520_, lean_object* v_inst_521_, lean_object* v_R_522_, lean_object* v___f_523_, lean_object* v_i_524_, uint8_t v___y_525_){
_start:
{
lean_object* v___x_526_; lean_object* v___x_41__overap_527_; lean_object* v___x_528_; lean_object* v___x_529_; 
v___x_526_ = lp_ShannonBounds_ShannonBounds_CertC11_Rx29___redArg(v_inst_518_, v_inst_519_, v_G_520_, v_inst_521_, v_R_522_);
v___x_41__overap_527_ = l_Fin_cases___redArg(v___x_526_, v___f_523_, v_i_524_);
lean_dec(v___x_526_);
v___x_528_ = lean_box(v___y_525_);
v___x_529_ = lean_apply_1(v___x_41__overap_527_, v___x_528_);
return v___x_529_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_terminalChildren___redArg___lam__1___boxed(lean_object* v_inst_530_, lean_object* v_inst_531_, lean_object* v_G_532_, lean_object* v_inst_533_, lean_object* v_R_534_, lean_object* v___f_535_, lean_object* v_i_536_, lean_object* v___y_537_){
_start:
{
uint8_t v___y_65__boxed_538_; lean_object* v_res_539_; 
v___y_65__boxed_538_ = lean_unbox(v___y_537_);
v_res_539_ = lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_terminalChildren___redArg___lam__1(v_inst_530_, v_inst_531_, v_G_532_, v_inst_533_, v_R_534_, v___f_535_, v_i_536_, v___y_65__boxed_538_);
lean_dec(v_i_536_);
return v_res_539_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_terminalChildren___redArg(lean_object* v_inst_540_, lean_object* v_inst_541_, lean_object* v_G_542_, lean_object* v_inst_543_, lean_object* v_R_544_, lean_object* v_i_545_){
_start:
{
lean_object* v___f_546_; lean_object* v___f_547_; lean_object* v___x_548_; lean_object* v___x_549_; 
lean_inc_n(v_R_544_, 2);
lean_inc_ref_n(v_inst_543_, 2);
lean_inc_ref_n(v_inst_541_, 2);
lean_inc_n(v_inst_540_, 2);
v___f_546_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_terminalChildren___redArg___lam__0___boxed), 7, 5);
lean_closure_set(v___f_546_, 0, v_inst_540_);
lean_closure_set(v___f_546_, 1, v_inst_541_);
lean_closure_set(v___f_546_, 2, v_G_542_);
lean_closure_set(v___f_546_, 3, v_inst_543_);
lean_closure_set(v___f_546_, 4, v_R_544_);
v___f_547_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_terminalChildren___redArg___lam__1___boxed), 8, 6);
lean_closure_set(v___f_547_, 0, v_inst_540_);
lean_closure_set(v___f_547_, 1, v_inst_541_);
lean_closure_set(v___f_547_, 2, v_G_542_);
lean_closure_set(v___f_547_, 3, v_inst_543_);
lean_closure_set(v___f_547_, 4, v_R_544_);
lean_closure_set(v___f_547_, 5, v___f_546_);
v___x_548_ = lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_Rx27___redArg(v_inst_540_, v_inst_541_, v_G_542_, v_inst_543_, v_R_544_);
v___x_549_ = l_Fin_cases___redArg(v___x_548_, v___f_547_, v_i_545_);
lean_dec(v___x_548_);
return v___x_549_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_terminalChildren___redArg___boxed(lean_object* v_inst_550_, lean_object* v_inst_551_, lean_object* v_G_552_, lean_object* v_inst_553_, lean_object* v_R_554_, lean_object* v_i_555_){
_start:
{
lean_object* v_res_556_; 
v_res_556_ = lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_terminalChildren___redArg(v_inst_550_, v_inst_551_, v_G_552_, v_inst_553_, v_R_554_, v_i_555_);
lean_dec(v_i_555_);
return v_res_556_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_terminalChildren(lean_object* v_00_u03b1_557_, lean_object* v_inst_558_, lean_object* v_inst_559_, lean_object* v_G_560_, lean_object* v_inst_561_, lean_object* v_R_562_, lean_object* v_i_563_){
_start:
{
lean_object* v___x_564_; 
v___x_564_ = lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_terminalChildren___redArg(v_inst_558_, v_inst_559_, v_G_560_, v_inst_561_, v_R_562_, v_i_563_);
return v___x_564_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_terminalChildren___boxed(lean_object* v_00_u03b1_565_, lean_object* v_inst_566_, lean_object* v_inst_567_, lean_object* v_G_568_, lean_object* v_inst_569_, lean_object* v_R_570_, lean_object* v_i_571_){
_start:
{
lean_object* v_res_572_; 
v_res_572_ = lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_terminalChildren(v_00_u03b1_565_, v_inst_566_, v_inst_567_, v_G_568_, v_inst_569_, v_R_570_, v_i_571_);
lean_dec(v_i_571_);
return v_res_572_;
}
}
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___redArg___lam__0(lean_object* v_inst_573_, lean_object* v_a_574_, lean_object* v___y_575_, lean_object* v___y_576_){
_start:
{
lean_object* v___x_577_; uint8_t v___x_578_; 
v___x_577_ = lean_apply_2(v_inst_573_, v___y_575_, v___y_576_);
v___x_578_ = lean_unbox(v___x_577_);
return v___x_578_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___redArg___lam__0___boxed(lean_object* v_inst_579_, lean_object* v_a_580_, lean_object* v___y_581_, lean_object* v___y_582_){
_start:
{
uint8_t v_res_583_; lean_object* v_r_584_; 
v_res_583_ = lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___redArg___lam__0(v_inst_579_, v_a_580_, v___y_581_, v___y_582_);
lean_dec(v_a_580_);
v_r_584_ = lean_box(v_res_583_);
return v_r_584_;
}
}
static lean_object* _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___redArg___lam__1___closed__0(void){
_start:
{
lean_object* v___x_585_; lean_object* v___x_586_; 
v___x_585_ = lean_unsigned_to_nat(69u);
v___x_586_ = l_List_finRange(v___x_585_);
return v___x_586_;
}
}
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___redArg___lam__1(lean_object* v___f_587_, lean_object* v_a_588_, lean_object* v_b_589_){
_start:
{
lean_object* v___x_590_; uint8_t v___x_591_; 
v___x_590_ = lean_obj_once(&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___redArg___lam__1___closed__0, &lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___redArg___lam__1___closed__0_once, _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___redArg___lam__1___closed__0);
v___x_591_ = lp_mathlib_Fintype_decidablePiFintype___redArg(v___f_587_, v___x_590_, v_a_588_, v_b_589_);
return v___x_591_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___redArg___lam__1___boxed(lean_object* v___f_592_, lean_object* v_a_593_, lean_object* v_b_594_){
_start:
{
uint8_t v_res_595_; lean_object* v_r_596_; 
v_res_595_ = lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___redArg___lam__1(v___f_592_, v_a_593_, v_b_594_);
v_r_596_ = lean_box(v_res_595_);
return v_r_596_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___redArg___lam__2(lean_object* v___x_597_, lean_object* v___y_598_, lean_object* v___y_599_){
_start:
{
lean_object* v___x_85__overap_600_; lean_object* v___x_601_; 
v___x_85__overap_600_ = lp_mathlib_Equiv_toEmbedding___redArg___lam__0(v___x_597_, v___y_598_);
v___x_601_ = lean_apply_1(v___x_85__overap_600_, v___y_599_);
return v___x_601_;
}
}
static lean_object* _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___redArg___closed__1(void){
_start:
{
lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; 
v___x_603_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___redArg___closed__0));
v___x_604_ = lean_unsigned_to_nat(3u);
v___x_605_ = lp_ShannonBounds_ShannonBounds_sumEquiv___redArg(v___x_604_, v___x_603_);
return v___x_605_;
}
}
static lean_object* _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___redArg___closed__2(void){
_start:
{
lean_object* v___x_606_; lean_object* v___x_607_; 
v___x_606_ = lean_obj_once(&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___redArg___closed__1, &lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___redArg___closed__1_once, _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___redArg___closed__1);
v___x_607_ = lp_mathlib_Equiv_symm___redArg(v___x_606_);
return v___x_607_;
}
}
static lean_object* _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___redArg___closed__3(void){
_start:
{
lean_object* v___x_608_; lean_object* v___f_609_; 
v___x_608_ = lean_obj_once(&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___redArg___closed__2, &lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___redArg___closed__2_once, _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___redArg___closed__2);
v___f_609_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___redArg___lam__2), 3, 1);
lean_closure_set(v___f_609_, 0, v___x_608_);
return v___f_609_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___redArg(lean_object* v_inst_610_, lean_object* v_inst_611_, lean_object* v_G_612_, lean_object* v_inst_613_, lean_object* v_R_614_){
_start:
{
lean_object* v___f_615_; lean_object* v___f_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___f_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; 
lean_inc_ref_n(v_inst_611_, 2);
v___f_615_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_615_, 0, v_inst_611_);
v___f_616_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_616_, 0, v___f_615_);
v___x_617_ = lp_ShannonBounds_ShannonBounds_Letter_enumList;
v___x_618_ = lean_unsigned_to_nat(3u);
v___x_619_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___redArg___closed__0));
v___f_620_ = lean_obj_once(&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___redArg___closed__3, &lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___redArg___closed__3_once, _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___redArg___closed__3);
v___x_621_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_Rx27___redArg___closed__0));
lean_inc_ref(v_inst_613_);
v___x_622_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_terminalChildren___boxed), 7, 6);
lean_closure_set(v___x_622_, 0, lean_box(0));
lean_closure_set(v___x_622_, 1, v_inst_610_);
lean_closure_set(v___x_622_, 2, v_inst_611_);
lean_closure_set(v___x_622_, 3, v_G_612_);
lean_closure_set(v___x_622_, 4, v_inst_613_);
lean_closure_set(v___x_622_, 5, v_R_614_);
v___x_623_ = lp_ShannonBounds_ShannonBounds_TerminalCodes_C3a;
v___x_624_ = lp_ShannonBounds_ShannonBounds_multiCodeSet___redArg(v_inst_611_, v___x_617_, v___x_621_, v_G_612_, v_inst_613_, v___x_618_, v___x_619_, v___x_622_, v___x_623_);
v___x_625_ = lp_mathlib_Finset_image___redArg(v___f_616_, v___f_620_, v___x_624_);
return v___x_625_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69(lean_object* v_00_u03b1_626_, lean_object* v_inst_627_, lean_object* v_inst_628_, lean_object* v_G_629_, lean_object* v_inst_630_, lean_object* v_R_631_){
_start:
{
lean_object* v___x_632_; 
v___x_632_ = lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___redArg(v_inst_627_, v_inst_628_, v_G_629_, v_inst_630_, v_R_631_);
return v___x_632_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code207___lam__0(lean_object* v___x_633_, lean_object* v___y_634_, lean_object* v___y_635_){
_start:
{
lean_object* v___x_3763__overap_636_; lean_object* v___x_637_; 
v___x_3763__overap_636_ = lp_mathlib_Equiv_toEmbedding___redArg___lam__0(v___x_633_, v___y_634_);
v___x_637_ = lean_apply_1(v___x_3763__overap_636_, v___y_635_);
return v___x_637_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14___lam__0(lean_object* v_e_638_, lean_object* v_i_639_){
_start:
{
lean_object* v___x_640_; 
v___x_640_ = lean_apply_1(v_e_638_, v_i_639_);
return v___x_640_;
}
}
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4___lam__3(lean_object* v___f_641_, lean_object* v___x_642_, lean_object* v_a_643_, lean_object* v_b_644_){
_start:
{
uint8_t v___x_645_; 
v___x_645_ = lp_mathlib_Fintype_decidablePiFintype___redArg(v___f_641_, v___x_642_, v_a_643_, v_b_644_);
return v___x_645_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4___lam__3___boxed(lean_object* v___f_646_, lean_object* v___x_647_, lean_object* v_a_648_, lean_object* v_b_649_){
_start:
{
uint8_t v_res_650_; lean_object* v_r_651_; 
v_res_650_ = lp_ShannonBounds_ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4___lam__3(v___f_646_, v___x_647_, v_a_648_, v_b_649_);
v_r_651_ = lean_box(v_res_650_);
return v_r_651_;
}
}
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4___lam__1(lean_object* v_a_652_, lean_object* v___y_653_, lean_object* v___y_654_){
_start:
{
uint8_t v___x_655_; 
v___x_655_ = lean_nat_dec_eq(v___y_653_, v___y_654_);
return v___x_655_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4___lam__1___boxed(lean_object* v_a_656_, lean_object* v___y_657_, lean_object* v___y_658_){
_start:
{
uint8_t v_res_659_; lean_object* v_r_660_; 
v_res_659_ = lp_ShannonBounds_ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4___lam__1(v_a_656_, v___y_657_, v___y_658_);
lean_dec(v___y_658_);
lean_dec(v___y_657_);
lean_dec(v_a_656_);
v_r_660_ = lean_box(v_res_659_);
return v_r_660_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12___redArg___lam__0(lean_object* v_x_661_, lean_object* v_R_662_, lean_object* v_i_663_){
_start:
{
lean_object* v___x_664_; lean_object* v___x_665_; 
lean_inc(v_i_663_);
v___x_664_ = lean_apply_1(v_x_661_, v_i_663_);
v___x_665_ = lean_apply_2(v_R_662_, v_i_663_, v___x_664_);
return v___x_665_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36___redArg___lam__0(lean_object* v_t_666_, lean_object* v_a_667_){
_start:
{
lean_object* v___x_668_; 
v___x_668_ = lean_apply_1(v_t_666_, v_a_667_);
return v___x_668_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_Multiset_pi___at___00Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36_spec__50___redArg___lam__3(lean_object* v___y_669_, lean_object* v___y_670_){
_start:
{
lean_internal_panic_unreachable();
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_Multiset_pi___at___00Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36_spec__50___redArg___lam__3___boxed(lean_object* v___y_671_, lean_object* v___y_672_){
_start:
{
lean_object* v_res_673_; 
v_res_673_ = lp_ShannonBounds_Multiset_pi___at___00Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36_spec__50___redArg___lam__3(v___y_671_, v___y_672_);
lean_dec(v___y_671_);
return v_res_673_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_Multiset_Pi_cons___at___00Multiset_pi___at___00Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36_spec__50_spec__61___redArg(lean_object* v_a_674_, lean_object* v_b_675_, lean_object* v_f_676_, lean_object* v_a_x27_677_){
_start:
{
uint8_t v___x_678_; 
v___x_678_ = lean_nat_dec_eq(v_a_x27_677_, v_a_674_);
if (v___x_678_ == 0)
{
lean_object* v___x_679_; 
v___x_679_ = lean_apply_2(v_f_676_, v_a_x27_677_, lean_box(0));
return v___x_679_;
}
else
{
lean_dec(v_a_x27_677_);
lean_dec(v_f_676_);
lean_inc(v_b_675_);
return v_b_675_;
}
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_Multiset_Pi_cons___at___00Multiset_pi___at___00Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36_spec__50_spec__61___redArg___boxed(lean_object* v_a_680_, lean_object* v_b_681_, lean_object* v_f_682_, lean_object* v_a_x27_683_){
_start:
{
lean_object* v_res_684_; 
v_res_684_ = lp_ShannonBounds_Multiset_Pi_cons___at___00Multiset_pi___at___00Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36_spec__50_spec__61___redArg(v_a_680_, v_b_681_, v_f_682_, v_a_x27_683_);
lean_dec(v_b_681_);
lean_dec(v_a_680_);
return v_res_684_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_Multiset_pi___at___00Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36_spec__50___redArg___lam__0(lean_object* v_a_685_, lean_object* v_b_686_, lean_object* v___y_687_, lean_object* v___y_688_, lean_object* v___y_689_){
_start:
{
lean_object* v___x_690_; 
v___x_690_ = lp_ShannonBounds_Multiset_Pi_cons___at___00Multiset_pi___at___00Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36_spec__50_spec__61___redArg(v_a_685_, v_b_686_, v___y_687_, v___y_688_);
return v___x_690_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_Multiset_pi___at___00Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36_spec__50___redArg___lam__0___boxed(lean_object* v_a_691_, lean_object* v_b_692_, lean_object* v___y_693_, lean_object* v___y_694_, lean_object* v___y_695_){
_start:
{
lean_object* v_res_696_; 
v_res_696_ = lp_ShannonBounds_Multiset_pi___at___00Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36_spec__50___redArg___lam__0(v_a_691_, v_b_692_, v___y_693_, v___y_694_, v___y_695_);
lean_dec(v_b_692_);
lean_dec(v_a_691_);
return v_res_696_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_Multiset_pi___at___00Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36_spec__50___redArg___lam__1(lean_object* v_a_697_, lean_object* v_p_698_, lean_object* v_b_699_){
_start:
{
lean_object* v___f_700_; lean_object* v___x_701_; 
v___f_700_ = lean_alloc_closure((void*)(lp_ShannonBounds_Multiset_pi___at___00Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36_spec__50___redArg___lam__0___boxed), 5, 2);
lean_closure_set(v___f_700_, 0, v_a_697_);
lean_closure_set(v___f_700_, 1, v_b_699_);
v___x_701_ = lp_mathlib_Multiset_map___redArg(v___f_700_, v_p_698_);
return v___x_701_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_Multiset_pi___at___00Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36_spec__50___redArg___lam__2(lean_object* v_t_702_, lean_object* v_a_703_, lean_object* v_m_704_, lean_object* v_p_705_){
_start:
{
lean_object* v___f_706_; lean_object* v___x_707_; lean_object* v___x_708_; 
lean_inc(v_a_703_);
v___f_706_ = lean_alloc_closure((void*)(lp_ShannonBounds_Multiset_pi___at___00Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36_spec__50___redArg___lam__1), 3, 2);
lean_closure_set(v___f_706_, 0, v_a_703_);
lean_closure_set(v___f_706_, 1, v_p_705_);
v___x_707_ = lean_apply_1(v_t_702_, v_a_703_);
v___x_708_ = lp_mathlib_Multiset_bind___redArg(v___x_707_, v___f_706_);
return v___x_708_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_Multiset_pi___at___00Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36_spec__50___redArg___lam__2___boxed(lean_object* v_t_709_, lean_object* v_a_710_, lean_object* v_m_711_, lean_object* v_p_712_){
_start:
{
lean_object* v_res_713_; 
v_res_713_ = lp_ShannonBounds_Multiset_pi___at___00Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36_spec__50___redArg___lam__2(v_t_709_, v_a_710_, v_m_711_, v_p_712_);
lean_dec(v_m_711_);
return v_res_713_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_Multiset_pi___at___00Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36_spec__50___redArg(lean_object* v_q_718_, lean_object* v_m_719_, lean_object* v_t_720_){
_start:
{
lean_object* v___f_721_; lean_object* v___x_722_; lean_object* v___x_723_; 
v___f_721_ = lean_alloc_closure((void*)(lp_ShannonBounds_Multiset_pi___at___00Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36_spec__50___redArg___lam__2___boxed), 4, 1);
lean_closure_set(v___f_721_, 0, v_t_720_);
v___x_722_ = ((lean_object*)(lp_ShannonBounds_Multiset_pi___at___00Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36_spec__50___redArg___closed__1));
v___x_723_ = lp_mathlib_Multiset_rec___redArg(v___x_722_, v___f_721_, v_m_719_);
return v___x_723_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_Multiset_pi___at___00Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36_spec__50___redArg___boxed(lean_object* v_q_724_, lean_object* v_m_725_, lean_object* v_t_726_){
_start:
{
lean_object* v_res_727_; 
v_res_727_ = lp_ShannonBounds_Multiset_pi___at___00Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36_spec__50___redArg(v_q_724_, v_m_725_, v_t_726_);
lean_dec(v_q_724_);
return v_res_727_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36___redArg(lean_object* v_q_728_, lean_object* v_s_729_, lean_object* v_t_730_){
_start:
{
lean_object* v___f_731_; lean_object* v___x_732_; 
v___f_731_ = lean_alloc_closure((void*)(lp_ShannonBounds_Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36___redArg___lam__0), 2, 1);
lean_closure_set(v___f_731_, 0, v_t_730_);
v___x_732_ = lp_ShannonBounds_Multiset_pi___at___00Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36_spec__50___redArg(v_q_728_, v_s_729_, v___f_731_);
return v___x_732_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36___redArg___boxed(lean_object* v_q_733_, lean_object* v_s_734_, lean_object* v_t_735_){
_start:
{
lean_object* v_res_736_; 
v_res_736_ = lp_ShannonBounds_Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36___redArg(v_q_733_, v_s_734_, v_t_735_);
lean_dec(v_q_733_);
return v_res_736_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21___redArg___lam__0(lean_object* v_f_737_, lean_object* v_a_738_){
_start:
{
lean_object* v___x_739_; 
v___x_739_ = lean_apply_2(v_f_737_, v_a_738_, lean_box(0));
return v___x_739_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21___redArg(lean_object* v_q_741_, lean_object* v_t_742_){
_start:
{
lean_object* v___f_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; 
v___f_743_ = ((lean_object*)(lp_ShannonBounds_Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21___redArg___closed__0));
lean_inc(v_q_741_);
v___x_744_ = l_List_finRange(v_q_741_);
v___x_745_ = lp_ShannonBounds_Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36___redArg(v_q_741_, v___x_744_, v_t_742_);
lean_dec(v_q_741_);
v___x_746_ = lp_mathlib_Finset_map___redArg(v___f_743_, v___x_745_);
return v___x_746_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12___redArg(lean_object* v_q_747_, lean_object* v_R_748_, lean_object* v_x_749_){
_start:
{
lean_object* v___f_750_; lean_object* v___x_751_; 
v___f_750_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12___redArg___lam__0), 3, 2);
lean_closure_set(v___f_750_, 0, v_x_749_);
lean_closure_set(v___f_750_, 1, v_R_748_);
v___x_751_ = lp_ShannonBounds_Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21___redArg(v_q_747_, v___f_750_);
return v___x_751_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_multiSubstSet___at___00ShannonBounds_Realisation_multiSubstFamily___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__24_spec__35___lam__0(lean_object* v_q_752_, lean_object* v_R_753_, lean_object* v___y_754_){
_start:
{
lean_object* v___x_755_; 
v___x_755_ = lp_ShannonBounds_ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12___redArg(v_q_752_, v_R_753_, v___y_754_);
return v___x_755_;
}
}
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4___lam__2(lean_object* v_e_756_, lean_object* v___f_757_, lean_object* v_a_758_, lean_object* v_a_759_, lean_object* v_b_760_){
_start:
{
lean_object* v___x_761_; lean_object* v___x_762_; uint8_t v___x_763_; 
v___x_761_ = lean_apply_1(v_e_756_, v_a_758_);
v___x_762_ = l_List_finRange(v___x_761_);
v___x_763_ = lp_mathlib_Fintype_decidablePiFintype___redArg(v___f_757_, v___x_762_, v_a_759_, v_b_760_);
return v___x_763_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4___lam__2___boxed(lean_object* v_e_764_, lean_object* v___f_765_, lean_object* v_a_766_, lean_object* v_a_767_, lean_object* v_b_768_){
_start:
{
uint8_t v_res_769_; lean_object* v_r_770_; 
v_res_769_ = lp_ShannonBounds_ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4___lam__2(v_e_764_, v___f_765_, v_a_766_, v_a_767_, v_b_768_);
v_r_770_ = lean_box(v_res_769_);
return v_r_770_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_multiSubstSet___at___00ShannonBounds_Realisation_multiSubstFamily___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__24_spec__35(lean_object* v_sep_772_, lean_object* v_G_773_, lean_object* v_q_774_, lean_object* v_e_775_, lean_object* v_R_776_, lean_object* v_S_777_, uint8_t v_a_778_){
_start:
{
lean_object* v___f_779_; lean_object* v___f_780_; lean_object* v___f_781_; lean_object* v___x_782_; lean_object* v___f_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; 
lean_inc(v_q_774_);
v___f_779_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_multiSubstSet___at___00ShannonBounds_Realisation_multiSubstFamily___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__24_spec__35___lam__0), 3, 2);
lean_closure_set(v___f_779_, 0, v_q_774_);
lean_closure_set(v___f_779_, 1, v_R_776_);
v___f_780_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_multiSubstSet___at___00ShannonBounds_Realisation_multiSubstFamily___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__24_spec__35___closed__0));
v___f_781_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4___lam__2___boxed), 5, 2);
lean_closure_set(v___f_781_, 0, v_e_775_);
lean_closure_set(v___f_781_, 1, v___f_780_);
v___x_782_ = l_List_finRange(v_q_774_);
v___f_783_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4___lam__3___boxed), 4, 2);
lean_closure_set(v___f_783_, 0, v___f_781_);
lean_closure_set(v___f_783_, 1, v___x_782_);
v___x_784_ = lean_box(v_a_778_);
v___x_785_ = lean_apply_1(v_S_777_, v___x_784_);
v___x_786_ = lp_mathlib_Finset_biUnion___redArg(v___f_783_, v___x_785_, v___f_779_);
return v___x_786_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_multiSubstSet___at___00ShannonBounds_Realisation_multiSubstFamily___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__24_spec__35___boxed(lean_object* v_sep_787_, lean_object* v_G_788_, lean_object* v_q_789_, lean_object* v_e_790_, lean_object* v_R_791_, lean_object* v_S_792_, lean_object* v_a_793_){
_start:
{
uint8_t v_a_boxed_794_; lean_object* v_res_795_; 
v_a_boxed_794_ = lean_unbox(v_a_793_);
v_res_795_ = lp_ShannonBounds_ShannonBounds_multiSubstSet___at___00ShannonBounds_Realisation_multiSubstFamily___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__24_spec__35(v_sep_787_, v_G_788_, v_q_789_, v_e_790_, v_R_791_, v_S_792_, v_a_boxed_794_);
lean_dec_ref(v_sep_787_);
return v_res_795_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_multiSubstFamily___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__24___lam__0(lean_object* v_sep_796_, lean_object* v_G_797_, lean_object* v_q_798_, lean_object* v_e_799_, lean_object* v_R_800_, lean_object* v_S_801_, uint8_t v___y_802_){
_start:
{
lean_object* v___x_803_; 
v___x_803_ = lp_ShannonBounds_ShannonBounds_multiSubstSet___at___00ShannonBounds_Realisation_multiSubstFamily___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__24_spec__35(v_sep_796_, v_G_797_, v_q_798_, v_e_799_, v_R_800_, v_S_801_, v___y_802_);
return v___x_803_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_multiSubstFamily___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__24___lam__0___boxed(lean_object* v_sep_804_, lean_object* v_G_805_, lean_object* v_q_806_, lean_object* v_e_807_, lean_object* v_R_808_, lean_object* v_S_809_, lean_object* v___y_810_){
_start:
{
uint8_t v___y_4177__boxed_811_; lean_object* v_res_812_; 
v___y_4177__boxed_811_ = lean_unbox(v___y_810_);
v_res_812_ = lp_ShannonBounds_ShannonBounds_Realisation_multiSubstFamily___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__24___lam__0(v_sep_804_, v_G_805_, v_q_806_, v_e_807_, v_R_808_, v_S_809_, v___y_4177__boxed_811_);
lean_dec_ref(v_sep_804_);
return v_res_812_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_multiSubstFamily___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__24(lean_object* v_sep_813_, lean_object* v_G_814_, lean_object* v_q_815_, lean_object* v_e_816_, lean_object* v_R_817_, lean_object* v_S_818_){
_start:
{
lean_object* v___f_819_; 
v___f_819_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_Realisation_multiSubstFamily___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__24___lam__0___boxed), 7, 6);
lean_closure_set(v___f_819_, 0, v_sep_813_);
lean_closure_set(v___f_819_, 1, v_G_814_);
lean_closure_set(v___f_819_, 2, v_q_815_);
lean_closure_set(v___f_819_, 3, v_e_816_);
lean_closure_set(v___f_819_, 4, v_R_817_);
lean_closure_set(v___f_819_, 5, v_S_818_);
return v___f_819_;
}
}
LEAN_EXPORT uint8_t lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__2_spec__7_spec__17_spec__27_spec__42_spec__56_spec__67___lam__0(lean_object* v_a_820_, lean_object* v___y_821_, lean_object* v___y_822_){
_start:
{
uint8_t v___x_823_; 
v___x_823_ = lean_nat_dec_eq(v___y_821_, v___y_822_);
return v___x_823_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__2_spec__7_spec__17_spec__27_spec__42_spec__56_spec__67___lam__0___boxed(lean_object* v_a_824_, lean_object* v___y_825_, lean_object* v___y_826_){
_start:
{
uint8_t v_res_827_; lean_object* v_r_828_; 
v_res_827_ = lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__2_spec__7_spec__17_spec__27_spec__42_spec__56_spec__67___lam__0(v_a_824_, v___y_825_, v___y_826_);
lean_dec(v___y_826_);
lean_dec(v___y_825_);
lean_dec(v_a_824_);
v_r_828_ = lean_box(v_res_827_);
return v_r_828_;
}
}
LEAN_EXPORT uint8_t lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25_spec__37_spec__46_spec__57_spec__69_spec__78_spec__86_spec__90___lam__1(lean_object* v___f_829_, lean_object* v___x_830_, lean_object* v___x_831_, uint8_t v___x_832_, lean_object* v___y_833_){
_start:
{
uint8_t v___x_834_; 
v___x_834_ = lp_mathlib_Fintype_decidablePiFintype___redArg(v___f_829_, v___x_830_, v___x_831_, v___y_833_);
if (v___x_834_ == 0)
{
uint8_t v___x_835_; 
v___x_835_ = 1;
return v___x_835_;
}
else
{
return v___x_832_;
}
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25_spec__37_spec__46_spec__57_spec__69_spec__78_spec__86_spec__90___lam__1___boxed(lean_object* v___f_836_, lean_object* v___x_837_, lean_object* v___x_838_, lean_object* v___x_839_, lean_object* v___y_840_){
_start:
{
uint8_t v___x_4195__boxed_841_; uint8_t v_res_842_; lean_object* v_r_843_; 
v___x_4195__boxed_841_ = lean_unbox(v___x_839_);
v_res_842_ = lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25_spec__37_spec__46_spec__57_spec__69_spec__78_spec__86_spec__90___lam__1(v___f_836_, v___x_837_, v___x_838_, v___x_4195__boxed_841_, v___y_840_);
v_r_843_ = lean_box(v_res_842_);
return v_r_843_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25_spec__37_spec__46_spec__57_spec__69_spec__78_spec__86_spec__90(lean_object* v___x_845_, lean_object* v_as_846_, size_t v_i_847_, size_t v_stop_848_, lean_object* v_b_849_){
_start:
{
uint8_t v___x_850_; 
v___x_850_ = lean_usize_dec_eq(v_i_847_, v_stop_848_);
if (v___x_850_ == 0)
{
lean_object* v___f_851_; lean_object* v___x_852_; size_t v___x_853_; size_t v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___f_857_; uint8_t v___x_858_; 
v___f_851_ = ((lean_object*)(lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25_spec__37_spec__46_spec__57_spec__69_spec__78_spec__86_spec__90___closed__0));
lean_inc(v___x_845_);
v___x_852_ = l_List_finRange(v___x_845_);
v___x_853_ = ((size_t)1ULL);
v___x_854_ = lean_usize_sub(v_i_847_, v___x_853_);
v___x_855_ = lean_array_uget_borrowed(v_as_846_, v___x_854_);
v___x_856_ = lean_box(v___x_850_);
lean_inc(v___x_855_);
v___f_857_ = lean_alloc_closure((void*)(lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25_spec__37_spec__46_spec__57_spec__69_spec__78_spec__86_spec__90___lam__1___boxed), 5, 4);
lean_closure_set(v___f_857_, 0, v___f_851_);
lean_closure_set(v___f_857_, 1, v___x_852_);
lean_closure_set(v___f_857_, 2, v___x_855_);
lean_closure_set(v___f_857_, 3, v___x_856_);
lean_inc(v_b_849_);
v___x_858_ = l_List_decidableBAll___redArg(v___f_857_, v_b_849_);
if (v___x_858_ == 0)
{
v_i_847_ = v___x_854_;
goto _start;
}
else
{
lean_object* v___x_860_; 
lean_inc(v___x_855_);
v___x_860_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_860_, 0, v___x_855_);
lean_ctor_set(v___x_860_, 1, v_b_849_);
v_i_847_ = v___x_854_;
v_b_849_ = v___x_860_;
goto _start;
}
}
else
{
lean_dec(v___x_845_);
return v_b_849_;
}
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25_spec__37_spec__46_spec__57_spec__69_spec__78_spec__86_spec__90___boxed(lean_object* v___x_862_, lean_object* v_as_863_, lean_object* v_i_864_, lean_object* v_stop_865_, lean_object* v_b_866_){
_start:
{
size_t v_i_boxed_867_; size_t v_stop_boxed_868_; lean_object* v_res_869_; 
v_i_boxed_867_ = lean_unbox_usize(v_i_864_);
lean_dec(v_i_864_);
v_stop_boxed_868_ = lean_unbox_usize(v_stop_865_);
lean_dec(v_stop_865_);
v_res_869_ = lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25_spec__37_spec__46_spec__57_spec__69_spec__78_spec__86_spec__90(v___x_862_, v_as_863_, v_i_boxed_867_, v_stop_boxed_868_, v_b_866_);
lean_dec_ref(v_as_863_);
return v_res_869_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25_spec__37_spec__46_spec__57_spec__69_spec__78_spec__86(lean_object* v___x_870_, lean_object* v_init_871_, lean_object* v_l_872_){
_start:
{
lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; uint8_t v___x_876_; 
v___x_873_ = lean_array_mk(v_l_872_);
v___x_874_ = lean_array_get_size(v___x_873_);
v___x_875_ = lean_unsigned_to_nat(0u);
v___x_876_ = lean_nat_dec_lt(v___x_875_, v___x_874_);
if (v___x_876_ == 0)
{
lean_dec_ref(v___x_873_);
lean_dec(v___x_870_);
return v_init_871_;
}
else
{
size_t v___x_877_; size_t v___x_878_; lean_object* v___x_879_; 
v___x_877_ = lean_usize_of_nat(v___x_874_);
v___x_878_ = ((size_t)0ULL);
v___x_879_ = lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25_spec__37_spec__46_spec__57_spec__69_spec__78_spec__86_spec__90(v___x_870_, v___x_873_, v___x_877_, v___x_878_, v_init_871_);
lean_dec_ref(v___x_873_);
return v___x_879_;
}
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25_spec__37_spec__46_spec__57_spec__69_spec__78___redArg(lean_object* v___x_880_, lean_object* v_l_881_){
_start:
{
lean_object* v___x_882_; lean_object* v___x_883_; 
v___x_882_ = lean_box(0);
v___x_883_ = lp_ShannonBounds_List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25_spec__37_spec__46_spec__57_spec__69_spec__78_spec__86(v___x_880_, v___x_882_, v_l_881_);
return v___x_883_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25_spec__37_spec__46_spec__57(lean_object* v___x_884_, lean_object* v_s_885_){
_start:
{
lean_object* v___x_886_; 
v___x_886_ = lp_ShannonBounds_List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25_spec__37_spec__46_spec__57_spec__69_spec__78___redArg(v___x_884_, v_s_885_);
return v___x_886_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25_spec__37_spec__46(lean_object* v___x_887_, lean_object* v_s_888_){
_start:
{
lean_object* v___x_889_; 
v___x_889_ = lp_ShannonBounds_List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25_spec__37_spec__46_spec__57_spec__69_spec__78___redArg(v___x_887_, v_s_888_);
return v___x_889_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25_spec__37___redArg(lean_object* v___x_890_, lean_object* v_f_891_, lean_object* v_s_892_){
_start:
{
lean_object* v___x_893_; lean_object* v___x_894_; 
v___x_893_ = lp_mathlib_Multiset_map___redArg(v_f_891_, v_s_892_);
v___x_894_ = lp_ShannonBounds_List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25_spec__37_spec__46_spec__57_spec__69_spec__78___redArg(v___x_890_, v___x_893_);
return v___x_894_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25___redArg___lam__1(lean_object* v_R_895_, lean_object* v___x_896_, lean_object* v___f_897_, uint8_t v_a_898_){
_start:
{
lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; 
v___x_899_ = lean_box(v_a_898_);
v___x_900_ = lean_apply_1(v_R_895_, v___x_899_);
v___x_901_ = lp_ShannonBounds_Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25_spec__37___redArg(v___x_896_, v___f_897_, v___x_900_);
return v___x_901_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25___redArg___lam__1___boxed(lean_object* v_R_902_, lean_object* v___x_903_, lean_object* v___f_904_, lean_object* v_a_905_){
_start:
{
uint8_t v_a_boxed_906_; lean_object* v_res_907_; 
v_a_boxed_906_ = lean_unbox(v_a_905_);
v_res_907_ = lp_ShannonBounds_ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25___redArg___lam__1(v_R_902_, v___x_903_, v___f_904_, v_a_boxed_906_);
return v_res_907_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25___redArg___lam__0(lean_object* v_f_908_, lean_object* v___y_909_, lean_object* v___y_910_){
_start:
{
lean_object* v___x_3842__overap_911_; lean_object* v___x_912_; 
v___x_3842__overap_911_ = lp_mathlib_Equiv_toEmbedding___redArg___lam__0(v_f_908_, v___y_909_);
v___x_912_ = lean_apply_1(v___x_3842__overap_911_, v___y_910_);
return v___x_912_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25___redArg(lean_object* v___x_913_, lean_object* v_R_914_, lean_object* v_f_915_){
_start:
{
lean_object* v___f_916_; lean_object* v___f_917_; 
v___f_916_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25___redArg___lam__0), 3, 1);
lean_closure_set(v___f_916_, 0, v_f_915_);
v___f_917_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_917_, 0, v_R_914_);
lean_closure_set(v___f_917_, 1, v___x_913_);
lean_closure_set(v___f_917_, 2, v___f_916_);
return v___f_917_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14(lean_object* v_sep_918_, lean_object* v_G_919_, lean_object* v_q_920_, lean_object* v_e_921_, lean_object* v_R_922_, lean_object* v_S_923_){
_start:
{
lean_object* v___f_924_; lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___f_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; 
lean_inc_ref_n(v_e_921_, 2);
v___f_924_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14___lam__0), 2, 1);
lean_closure_set(v___f_924_, 0, v_e_921_);
lean_inc_n(v_q_920_, 2);
v___x_925_ = l_List_finRange(v_q_920_);
v___x_926_ = lp_mathlib_Finset_sum___at___00finFunctionFinEquiv_spec__0___redArg(v___x_925_, v___f_924_);
v___f_927_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_Realisation_multiSubstFamily___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__24___lam__0___boxed), 7, 6);
lean_closure_set(v___f_927_, 0, v_sep_918_);
lean_closure_set(v___f_927_, 1, v_G_919_);
lean_closure_set(v___f_927_, 2, v_q_920_);
lean_closure_set(v___f_927_, 3, v_e_921_);
lean_closure_set(v___f_927_, 4, v_R_922_);
lean_closure_set(v___f_927_, 5, v_S_923_);
v___x_928_ = lp_ShannonBounds_ShannonBounds_sumEquiv___redArg(v_q_920_, v_e_921_);
lean_dec(v_q_920_);
v___x_929_ = lp_mathlib_Equiv_symm___redArg(v___x_928_);
v___x_930_ = lp_ShannonBounds_ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25___redArg(v___x_926_, v___f_927_, v___x_929_);
return v___x_930_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_mapIso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__30___redArg___lam__0(lean_object* v_f_931_, lean_object* v___y_932_, lean_object* v___y_933_){
_start:
{
lean_object* v___x_3862__overap_934_; lean_object* v___x_935_; 
v___x_3862__overap_934_ = lp_mathlib_Equiv_toEmbedding___redArg___lam__0(v_f_931_, v___y_932_);
v___x_935_ = lean_apply_1(v___x_3862__overap_934_, v___y_933_);
return v___x_935_;
}
}
static lean_object* _init_lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__30_spec__38_spec__50_spec__63_spec__72_spec__80_spec__84_spec__88___closed__0(void){
_start:
{
lean_object* v___x_936_; lean_object* v___x_937_; 
v___x_936_ = lean_unsigned_to_nat(1u);
v___x_937_ = l_List_finRange(v___x_936_);
return v___x_937_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__30_spec__38_spec__50_spec__63_spec__72_spec__80_spec__84_spec__88(lean_object* v_as_938_, size_t v_i_939_, size_t v_stop_940_, lean_object* v_b_941_){
_start:
{
uint8_t v___x_942_; 
v___x_942_ = lean_usize_dec_eq(v_i_939_, v_stop_940_);
if (v___x_942_ == 0)
{
lean_object* v___f_943_; lean_object* v___x_944_; size_t v___x_945_; size_t v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___f_949_; uint8_t v___x_950_; 
v___f_943_ = ((lean_object*)(lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25_spec__37_spec__46_spec__57_spec__69_spec__78_spec__86_spec__90___closed__0));
v___x_944_ = lean_obj_once(&lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__30_spec__38_spec__50_spec__63_spec__72_spec__80_spec__84_spec__88___closed__0, &lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__30_spec__38_spec__50_spec__63_spec__72_spec__80_spec__84_spec__88___closed__0_once, _init_lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__30_spec__38_spec__50_spec__63_spec__72_spec__80_spec__84_spec__88___closed__0);
v___x_945_ = ((size_t)1ULL);
v___x_946_ = lean_usize_sub(v_i_939_, v___x_945_);
v___x_947_ = lean_array_uget_borrowed(v_as_938_, v___x_946_);
v___x_948_ = lean_box(v___x_942_);
lean_inc(v___x_947_);
v___f_949_ = lean_alloc_closure((void*)(lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25_spec__37_spec__46_spec__57_spec__69_spec__78_spec__86_spec__90___lam__1___boxed), 5, 4);
lean_closure_set(v___f_949_, 0, v___f_943_);
lean_closure_set(v___f_949_, 1, v___x_944_);
lean_closure_set(v___f_949_, 2, v___x_947_);
lean_closure_set(v___f_949_, 3, v___x_948_);
lean_inc(v_b_941_);
v___x_950_ = l_List_decidableBAll___redArg(v___f_949_, v_b_941_);
if (v___x_950_ == 0)
{
v_i_939_ = v___x_946_;
goto _start;
}
else
{
lean_object* v___x_952_; 
lean_inc(v___x_947_);
v___x_952_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_952_, 0, v___x_947_);
lean_ctor_set(v___x_952_, 1, v_b_941_);
v_i_939_ = v___x_946_;
v_b_941_ = v___x_952_;
goto _start;
}
}
else
{
return v_b_941_;
}
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__30_spec__38_spec__50_spec__63_spec__72_spec__80_spec__84_spec__88___boxed(lean_object* v_as_954_, lean_object* v_i_955_, lean_object* v_stop_956_, lean_object* v_b_957_){
_start:
{
size_t v_i_boxed_958_; size_t v_stop_boxed_959_; lean_object* v_res_960_; 
v_i_boxed_958_ = lean_unbox_usize(v_i_955_);
lean_dec(v_i_955_);
v_stop_boxed_959_ = lean_unbox_usize(v_stop_956_);
lean_dec(v_stop_956_);
v_res_960_ = lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__30_spec__38_spec__50_spec__63_spec__72_spec__80_spec__84_spec__88(v_as_954_, v_i_boxed_958_, v_stop_boxed_959_, v_b_957_);
lean_dec_ref(v_as_954_);
return v_res_960_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__30_spec__38_spec__50_spec__63_spec__72_spec__80_spec__84(lean_object* v_init_961_, lean_object* v_l_962_){
_start:
{
lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; uint8_t v___x_966_; 
v___x_963_ = lean_array_mk(v_l_962_);
v___x_964_ = lean_array_get_size(v___x_963_);
v___x_965_ = lean_unsigned_to_nat(0u);
v___x_966_ = lean_nat_dec_lt(v___x_965_, v___x_964_);
if (v___x_966_ == 0)
{
lean_dec_ref(v___x_963_);
return v_init_961_;
}
else
{
size_t v___x_967_; size_t v___x_968_; lean_object* v___x_969_; 
v___x_967_ = lean_usize_of_nat(v___x_964_);
v___x_968_ = ((size_t)0ULL);
v___x_969_ = lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__30_spec__38_spec__50_spec__63_spec__72_spec__80_spec__84_spec__88(v___x_963_, v___x_967_, v___x_968_, v_init_961_);
lean_dec_ref(v___x_963_);
return v___x_969_;
}
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__30_spec__38_spec__50_spec__63_spec__72_spec__80___redArg(lean_object* v_l_970_){
_start:
{
lean_object* v___x_971_; lean_object* v___x_972_; 
v___x_971_ = lean_box(0);
v___x_972_ = lp_ShannonBounds_List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__30_spec__38_spec__50_spec__63_spec__72_spec__80_spec__84(v___x_971_, v_l_970_);
return v___x_972_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__30_spec__38_spec__50_spec__63(lean_object* v_s_973_){
_start:
{
lean_object* v___x_974_; 
v___x_974_ = lp_ShannonBounds_List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__30_spec__38_spec__50_spec__63_spec__72_spec__80___redArg(v_s_973_);
return v___x_974_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__30_spec__38_spec__50(lean_object* v_s_975_){
_start:
{
lean_object* v___x_976_; 
v___x_976_ = lp_ShannonBounds_List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__30_spec__38_spec__50_spec__63_spec__72_spec__80___redArg(v_s_975_);
return v___x_976_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__30_spec__38___redArg(lean_object* v_f_977_, lean_object* v_s_978_){
_start:
{
lean_object* v___x_979_; lean_object* v___x_980_; 
v___x_979_ = lp_mathlib_Multiset_map___redArg(v_f_977_, v_s_978_);
v___x_980_ = lp_ShannonBounds_List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__30_spec__38_spec__50_spec__63_spec__72_spec__80___redArg(v___x_979_);
return v___x_980_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_mapIso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__30___redArg___lam__1(lean_object* v_R_981_, lean_object* v___f_982_, uint8_t v_a_983_){
_start:
{
lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; 
v___x_984_ = lean_box(v_a_983_);
v___x_985_ = lean_apply_1(v_R_981_, v___x_984_);
v___x_986_ = lp_ShannonBounds_Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__30_spec__38___redArg(v___f_982_, v___x_985_);
return v___x_986_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_mapIso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__30___redArg___lam__1___boxed(lean_object* v_R_987_, lean_object* v___f_988_, lean_object* v_a_989_){
_start:
{
uint8_t v_a_boxed_990_; lean_object* v_res_991_; 
v_a_boxed_990_ = lean_unbox(v_a_989_);
v_res_991_ = lp_ShannonBounds_ShannonBounds_Realisation_mapIso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__30___redArg___lam__1(v_R_987_, v___f_988_, v_a_boxed_990_);
return v_res_991_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_mapIso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__30___redArg(lean_object* v_R_992_, lean_object* v_f_993_){
_start:
{
lean_object* v___f_994_; lean_object* v___f_995_; 
v___f_994_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_Realisation_mapIso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__30___redArg___lam__0), 3, 1);
lean_closure_set(v___f_994_, 0, v_f_993_);
v___f_995_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_Realisation_mapIso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__30___redArg___lam__1___boxed), 3, 2);
lean_closure_set(v___f_995_, 0, v_R_992_);
lean_closure_set(v___f_995_, 1, v___f_994_);
return v___f_995_;
}
}
static lean_object* _init_lp_ShannonBounds_ShannonBounds_strongPower__one__iso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__29___lam__0___closed__0(void){
_start:
{
lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; 
v___x_996_ = lean_unsigned_to_nat(1u);
v___x_997_ = lean_unsigned_to_nat(0u);
v___x_998_ = lean_nat_mod(v___x_997_, v___x_996_);
return v___x_998_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__one__iso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__29___lam__0(lean_object* v_f_999_){
_start:
{
lean_object* v___x_1000_; lean_object* v___x_1001_; 
v___x_1000_ = lean_obj_once(&lp_ShannonBounds_ShannonBounds_strongPower__one__iso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__29___lam__0___closed__0, &lp_ShannonBounds_ShannonBounds_strongPower__one__iso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__29___lam__0___closed__0_once, _init_lp_ShannonBounds_ShannonBounds_strongPower__one__iso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__29___lam__0___closed__0);
v___x_1001_ = lean_apply_1(v_f_999_, v___x_1000_);
return v___x_1001_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__one__iso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__29___lam__1(lean_object* v_x_1002_, lean_object* v_x_1003_){
_start:
{
lean_inc(v_x_1002_);
return v_x_1002_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__one__iso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__29___lam__1___boxed(lean_object* v_x_1004_, lean_object* v_x_1005_){
_start:
{
lean_object* v_res_1006_; 
v_res_1006_ = lp_ShannonBounds_ShannonBounds_strongPower__one__iso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__29___lam__1(v_x_1004_, v_x_1005_);
lean_dec(v_x_1005_);
lean_dec(v_x_1004_);
return v_res_1006_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__one__iso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__29(lean_object* v_G_1012_){
_start:
{
lean_object* v___x_1013_; 
v___x_1013_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_strongPower__one__iso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__29___closed__2));
return v___x_1013_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21(lean_object* v_G_1014_, lean_object* v_R_1015_){
_start:
{
lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; 
v___x_1016_ = lp_ShannonBounds_ShannonBounds_strongPower__one__iso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__29(v_G_1014_);
v___x_1017_ = lp_mathlib_Equiv_symm___redArg(v___x_1016_);
v___x_1018_ = lp_ShannonBounds_ShannonBounds_Realisation_mapIso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__30___redArg(v_R_1015_, v___x_1017_);
return v___x_1018_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13___lam__0(lean_object* v_G_1019_, lean_object* v_R_1020_, lean_object* v_x_1021_, uint8_t v___y_1022_){
_start:
{
lean_object* v___x_3813__overap_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; 
v___x_3813__overap_1023_ = lp_ShannonBounds_ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21(v_G_1019_, v_R_1020_);
v___x_1024_ = lean_box(v___y_1022_);
v___x_1025_ = lean_apply_1(v___x_3813__overap_1023_, v___x_1024_);
return v___x_1025_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13___lam__0___boxed(lean_object* v_G_1026_, lean_object* v_R_1027_, lean_object* v_x_1028_, lean_object* v___y_1029_){
_start:
{
uint8_t v___y_4436__boxed_1030_; lean_object* v_res_1031_; 
v___y_4436__boxed_1030_ = lean_unbox(v___y_1029_);
v_res_1031_ = lp_ShannonBounds_ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13___lam__0(v_G_1026_, v_R_1027_, v_x_1028_, v___y_4436__boxed_1030_);
lean_dec(v_x_1028_);
return v_res_1031_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chg3___at___00ShannonBounds_CertC11_Rg3___at___00ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40_spec__50_spec__62___lam__1(lean_object* v___x_1032_, lean_object* v___f_1033_, lean_object* v_i_1034_, uint8_t v___y_1035_){
_start:
{
lean_object* v___x_3946__overap_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; 
v___x_3946__overap_1036_ = l_Fin_cases___redArg(v___x_1032_, v___f_1033_, v_i_1034_);
v___x_1037_ = lean_box(v___y_1035_);
v___x_1038_ = lean_apply_1(v___x_3946__overap_1036_, v___x_1037_);
return v___x_1038_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chg3___at___00ShannonBounds_CertC11_Rg3___at___00ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40_spec__50_spec__62___lam__1___boxed(lean_object* v___x_1039_, lean_object* v___f_1040_, lean_object* v_i_1041_, lean_object* v___y_1042_){
_start:
{
uint8_t v___y_4447__boxed_1043_; lean_object* v_res_1044_; 
v___y_4447__boxed_1043_ = lean_unbox(v___y_1042_);
v_res_1044_ = lp_ShannonBounds_ShannonBounds_CertC11_chg3___at___00ShannonBounds_CertC11_Rg3___at___00ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40_spec__50_spec__62___lam__1(v___x_1039_, v___f_1040_, v_i_1041_, v___y_4447__boxed_1043_);
lean_dec(v_i_1041_);
lean_dec(v___x_1039_);
return v_res_1044_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chg3___at___00ShannonBounds_CertC11_Rg3___at___00ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40_spec__50_spec__62(lean_object* v_G_1045_, lean_object* v_R_1046_, lean_object* v_i_1047_){
_start:
{
lean_object* v___f_1048_; lean_object* v___x_1049_; lean_object* v___f_1050_; lean_object* v___x_1051_; 
lean_inc(v_R_1046_);
v___f_1048_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1048_, 0, v_G_1045_);
lean_closure_set(v___f_1048_, 1, v_R_1046_);
v___x_1049_ = lp_ShannonBounds_ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21(v_G_1045_, v_R_1046_);
lean_inc(v___x_1049_);
v___f_1050_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_CertC11_chg3___at___00ShannonBounds_CertC11_Rg3___at___00ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40_spec__50_spec__62___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1050_, 0, v___x_1049_);
lean_closure_set(v___f_1050_, 1, v___f_1048_);
v___x_1051_ = l_Fin_cases___redArg(v___x_1049_, v___f_1050_, v_i_1047_);
lean_dec(v___x_1049_);
return v___x_1051_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chg3___at___00ShannonBounds_CertC11_Rg3___at___00ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40_spec__50_spec__62___boxed(lean_object* v_G_1052_, lean_object* v_R_1053_, lean_object* v_i_1054_){
_start:
{
lean_object* v_res_1055_; 
v_res_1055_ = lp_ShannonBounds_ShannonBounds_CertC11_chg3___at___00ShannonBounds_CertC11_Rg3___at___00ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40_spec__50_spec__62(v_G_1052_, v_R_1053_, v_i_1054_);
lean_dec(v_i_1054_);
return v_res_1055_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rg3___at___00ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40_spec__50___lam__0(lean_object* v_G_1056_, lean_object* v_R_1057_, lean_object* v___y_1058_, uint8_t v___y_1059_){
_start:
{
lean_object* v___x_3916__overap_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; 
v___x_3916__overap_1060_ = lp_ShannonBounds_ShannonBounds_CertC11_chg3___at___00ShannonBounds_CertC11_Rg3___at___00ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40_spec__50_spec__62(v_G_1056_, v_R_1057_, v___y_1058_);
v___x_1061_ = lean_box(v___y_1059_);
v___x_1062_ = lean_apply_1(v___x_3916__overap_1060_, v___x_1061_);
return v___x_1062_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rg3___at___00ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40_spec__50___lam__0___boxed(lean_object* v_G_1063_, lean_object* v_R_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_){
_start:
{
uint8_t v___y_4467__boxed_1067_; lean_object* v_res_1068_; 
v___y_4467__boxed_1067_ = lean_unbox(v___y_1066_);
v_res_1068_ = lp_ShannonBounds_ShannonBounds_CertC11_Rg3___at___00ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40_spec__50___lam__0(v_G_1063_, v_R_1064_, v___y_1065_, v___y_4467__boxed_1067_);
lean_dec(v___y_1065_);
return v_res_1068_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rg3___at___00ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40_spec__50(lean_object* v_G_1071_, lean_object* v_R_1072_){
_start:
{
lean_object* v___f_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; 
v___f_1073_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_CertC11_Rg3___at___00ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40_spec__50___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1073_, 0, v_G_1071_);
lean_closure_set(v___f_1073_, 1, v_R_1072_);
v___x_1074_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_Rx27___redArg___closed__0));
v___x_1075_ = lean_unsigned_to_nat(3u);
v___x_1076_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_CertC11_Rg3___at___00ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40_spec__50___closed__0));
v___x_1077_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_CertC11_Rg3___at___00ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40_spec__50___closed__1));
v___x_1078_ = lp_ShannonBounds_ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14(v___x_1074_, v_G_1071_, v___x_1075_, v___x_1076_, v___f_1073_, v___x_1077_);
return v___x_1078_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chh4___at___00ShannonBounds_CertC11_Rh4___at___00ShannonBounds_CertC11_chh5___at___00ShannonBounds_CertC11_Rh5___at___00ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42_spec__53_spec__65_spec__76_spec__83(lean_object* v_G_1079_, lean_object* v_R_1080_, lean_object* v_i_1081_){
_start:
{
lean_object* v___f_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; 
lean_inc(v_R_1080_);
v___f_1082_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1082_, 0, v_G_1079_);
lean_closure_set(v___f_1082_, 1, v_R_1080_);
v___x_1083_ = lp_ShannonBounds_ShannonBounds_CertC11_Rg3___at___00ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40_spec__50(v_G_1079_, v_R_1080_);
v___x_1084_ = l_Fin_cases___redArg(v___x_1083_, v___f_1082_, v_i_1081_);
lean_dec(v___x_1083_);
return v___x_1084_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chh4___at___00ShannonBounds_CertC11_Rh4___at___00ShannonBounds_CertC11_chh5___at___00ShannonBounds_CertC11_Rh5___at___00ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42_spec__53_spec__65_spec__76_spec__83___boxed(lean_object* v_G_1085_, lean_object* v_R_1086_, lean_object* v_i_1087_){
_start:
{
lean_object* v_res_1088_; 
v_res_1088_ = lp_ShannonBounds_ShannonBounds_CertC11_chh4___at___00ShannonBounds_CertC11_Rh4___at___00ShannonBounds_CertC11_chh5___at___00ShannonBounds_CertC11_Rh5___at___00ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42_spec__53_spec__65_spec__76_spec__83(v_G_1085_, v_R_1086_, v_i_1087_);
lean_dec(v_i_1087_);
return v_res_1088_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rh4___at___00ShannonBounds_CertC11_chh5___at___00ShannonBounds_CertC11_Rh5___at___00ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42_spec__53_spec__65_spec__76___lam__0(lean_object* v_G_1089_, lean_object* v_R_1090_, lean_object* v___y_1091_, uint8_t v___y_1092_){
_start:
{
lean_object* v___x_3974__overap_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; 
v___x_3974__overap_1093_ = lp_ShannonBounds_ShannonBounds_CertC11_chh4___at___00ShannonBounds_CertC11_Rh4___at___00ShannonBounds_CertC11_chh5___at___00ShannonBounds_CertC11_Rh5___at___00ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42_spec__53_spec__65_spec__76_spec__83(v_G_1089_, v_R_1090_, v___y_1091_);
v___x_1094_ = lean_box(v___y_1092_);
v___x_1095_ = lean_apply_1(v___x_3974__overap_1093_, v___x_1094_);
return v___x_1095_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rh4___at___00ShannonBounds_CertC11_chh5___at___00ShannonBounds_CertC11_Rh5___at___00ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42_spec__53_spec__65_spec__76___lam__0___boxed(lean_object* v_G_1096_, lean_object* v_R_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_){
_start:
{
uint8_t v___y_4502__boxed_1100_; lean_object* v_res_1101_; 
v___y_4502__boxed_1100_ = lean_unbox(v___y_1099_);
v_res_1101_ = lp_ShannonBounds_ShannonBounds_CertC11_Rh4___at___00ShannonBounds_CertC11_chh5___at___00ShannonBounds_CertC11_Rh5___at___00ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42_spec__53_spec__65_spec__76___lam__0(v_G_1096_, v_R_1097_, v___y_1098_, v___y_4502__boxed_1100_);
lean_dec(v___y_1098_);
return v_res_1101_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rh4___at___00ShannonBounds_CertC11_chh5___at___00ShannonBounds_CertC11_Rh5___at___00ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42_spec__53_spec__65_spec__76(lean_object* v_G_1104_, lean_object* v_R_1105_){
_start:
{
lean_object* v___f_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; 
v___f_1106_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_CertC11_Rh4___at___00ShannonBounds_CertC11_chh5___at___00ShannonBounds_CertC11_Rh5___at___00ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42_spec__53_spec__65_spec__76___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1106_, 0, v_G_1104_);
lean_closure_set(v___f_1106_, 1, v_R_1105_);
v___x_1107_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_Rx27___redArg___closed__0));
v___x_1108_ = lean_unsigned_to_nat(2u);
v___x_1109_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_CertC11_Rh4___at___00ShannonBounds_CertC11_chh5___at___00ShannonBounds_CertC11_Rh5___at___00ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42_spec__53_spec__65_spec__76___closed__0));
v___x_1110_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_CertC11_Rh4___at___00ShannonBounds_CertC11_chh5___at___00ShannonBounds_CertC11_Rh5___at___00ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42_spec__53_spec__65_spec__76___closed__1));
v___x_1111_ = lp_ShannonBounds_ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14(v___x_1107_, v_G_1104_, v___x_1108_, v___x_1109_, v___f_1106_, v___x_1110_);
return v___x_1111_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chh5___at___00ShannonBounds_CertC11_Rh5___at___00ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42_spec__53_spec__65(lean_object* v_G_1112_, lean_object* v_R_1113_, lean_object* v_i_1114_){
_start:
{
lean_object* v___f_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; 
lean_inc(v_R_1113_);
v___f_1115_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1115_, 0, v_G_1112_);
lean_closure_set(v___f_1115_, 1, v_R_1113_);
v___x_1116_ = lp_ShannonBounds_ShannonBounds_CertC11_Rh4___at___00ShannonBounds_CertC11_chh5___at___00ShannonBounds_CertC11_Rh5___at___00ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42_spec__53_spec__65_spec__76(v_G_1112_, v_R_1113_);
v___x_1117_ = l_Fin_cases___redArg(v___x_1116_, v___f_1115_, v_i_1114_);
lean_dec(v___x_1116_);
return v___x_1117_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chh5___at___00ShannonBounds_CertC11_Rh5___at___00ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42_spec__53_spec__65___boxed(lean_object* v_G_1118_, lean_object* v_R_1119_, lean_object* v_i_1120_){
_start:
{
lean_object* v_res_1121_; 
v_res_1121_ = lp_ShannonBounds_ShannonBounds_CertC11_chh5___at___00ShannonBounds_CertC11_Rh5___at___00ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42_spec__53_spec__65(v_G_1118_, v_R_1119_, v_i_1120_);
lean_dec(v_i_1120_);
return v_res_1121_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rh5___at___00ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42_spec__53___lam__0(lean_object* v_G_1122_, lean_object* v_R_1123_, lean_object* v___y_1124_, uint8_t v___y_1125_){
_start:
{
lean_object* v___x_3919__overap_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; 
v___x_3919__overap_1126_ = lp_ShannonBounds_ShannonBounds_CertC11_chh5___at___00ShannonBounds_CertC11_Rh5___at___00ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42_spec__53_spec__65(v_G_1122_, v_R_1123_, v___y_1124_);
v___x_1127_ = lean_box(v___y_1125_);
v___x_1128_ = lean_apply_1(v___x_3919__overap_1126_, v___x_1127_);
return v___x_1128_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rh5___at___00ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42_spec__53___lam__0___boxed(lean_object* v_G_1129_, lean_object* v_R_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_){
_start:
{
uint8_t v___y_4537__boxed_1133_; lean_object* v_res_1134_; 
v___y_4537__boxed_1133_ = lean_unbox(v___y_1132_);
v_res_1134_ = lp_ShannonBounds_ShannonBounds_CertC11_Rh5___at___00ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42_spec__53___lam__0(v_G_1129_, v_R_1130_, v___y_1131_, v___y_4537__boxed_1133_);
lean_dec(v___y_1131_);
return v_res_1134_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rh5___at___00ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42_spec__53(lean_object* v_G_1136_, lean_object* v_R_1137_){
_start:
{
lean_object* v___f_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; 
v___f_1138_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_CertC11_Rh5___at___00ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42_spec__53___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1138_, 0, v_G_1136_);
lean_closure_set(v___f_1138_, 1, v_R_1137_);
v___x_1139_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_Rx27___redArg___closed__0));
v___x_1140_ = lean_unsigned_to_nat(2u);
v___x_1141_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_CertC11_Rh5___at___00ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42_spec__53___closed__0));
v___x_1142_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_CertC11_Rh4___at___00ShannonBounds_CertC11_chh5___at___00ShannonBounds_CertC11_Rh5___at___00ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42_spec__53_spec__65_spec__76___closed__1));
v___x_1143_ = lp_ShannonBounds_ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14(v___x_1139_, v_G_1136_, v___x_1140_, v___x_1141_, v___f_1138_, v___x_1142_);
return v___x_1143_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42(lean_object* v_G_1144_, lean_object* v_R_1145_, lean_object* v_i_1146_){
_start:
{
lean_object* v___f_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; 
lean_inc(v_R_1145_);
v___f_1147_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1147_, 0, v_G_1144_);
lean_closure_set(v___f_1147_, 1, v_R_1145_);
v___x_1148_ = lp_ShannonBounds_ShannonBounds_CertC11_Rh5___at___00ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42_spec__53(v_G_1144_, v_R_1145_);
v___x_1149_ = l_Fin_cases___redArg(v___x_1148_, v___f_1147_, v_i_1146_);
lean_dec(v___x_1148_);
return v___x_1149_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42___boxed(lean_object* v_G_1150_, lean_object* v_R_1151_, lean_object* v_i_1152_){
_start:
{
lean_object* v_res_1153_; 
v_res_1153_ = lp_ShannonBounds_ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42(v_G_1150_, v_R_1151_, v_i_1152_);
lean_dec(v_i_1152_);
return v_res_1153_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29___lam__0(lean_object* v_G_1154_, lean_object* v_R_1155_, lean_object* v___y_1156_, uint8_t v___y_1157_){
_start:
{
lean_object* v___x_3852__overap_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; 
v___x_3852__overap_1158_ = lp_ShannonBounds_ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42(v_G_1154_, v_R_1155_, v___y_1156_);
v___x_1159_ = lean_box(v___y_1157_);
v___x_1160_ = lean_apply_1(v___x_3852__overap_1158_, v___x_1159_);
return v___x_1160_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29___lam__0___boxed(lean_object* v_G_1161_, lean_object* v_R_1162_, lean_object* v___y_1163_, lean_object* v___y_1164_){
_start:
{
uint8_t v___y_4570__boxed_1165_; lean_object* v_res_1166_; 
v___y_4570__boxed_1165_ = lean_unbox(v___y_1164_);
v_res_1166_ = lp_ShannonBounds_ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29___lam__0(v_G_1161_, v_R_1162_, v___y_1163_, v___y_4570__boxed_1165_);
lean_dec(v___y_1163_);
return v_res_1166_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29(lean_object* v_G_1168_, lean_object* v_R_1169_){
_start:
{
lean_object* v___f_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; 
v___f_1170_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1170_, 0, v_G_1168_);
lean_closure_set(v___f_1170_, 1, v_R_1169_);
v___x_1171_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_Rx27___redArg___closed__0));
v___x_1172_ = lean_unsigned_to_nat(2u);
v___x_1173_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29___closed__0));
v___x_1174_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_CertC11_Rh4___at___00ShannonBounds_CertC11_chh5___at___00ShannonBounds_CertC11_Rh5___at___00ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42_spec__53_spec__65_spec__76___closed__1));
v___x_1175_ = lp_ShannonBounds_ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14(v___x_1171_, v_G_1168_, v___x_1172_, v___x_1173_, v___f_1170_, v___x_1174_);
return v___x_1175_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chh7___at___00ShannonBounds_CertC11_Rh7___at___00ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18_spec__33_spec__47(lean_object* v_G_1176_, lean_object* v_R_1177_, lean_object* v_i_1178_){
_start:
{
lean_object* v___f_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; 
lean_inc(v_R_1177_);
v___f_1179_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1179_, 0, v_G_1176_);
lean_closure_set(v___f_1179_, 1, v_R_1177_);
v___x_1180_ = lp_ShannonBounds_ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29(v_G_1176_, v_R_1177_);
v___x_1181_ = l_Fin_cases___redArg(v___x_1180_, v___f_1179_, v_i_1178_);
lean_dec(v___x_1180_);
return v___x_1181_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chh7___at___00ShannonBounds_CertC11_Rh7___at___00ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18_spec__33_spec__47___boxed(lean_object* v_G_1182_, lean_object* v_R_1183_, lean_object* v_i_1184_){
_start:
{
lean_object* v_res_1185_; 
v_res_1185_ = lp_ShannonBounds_ShannonBounds_CertC11_chh7___at___00ShannonBounds_CertC11_Rh7___at___00ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18_spec__33_spec__47(v_G_1182_, v_R_1183_, v_i_1184_);
lean_dec(v_i_1184_);
return v_res_1185_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rh7___at___00ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18_spec__33___lam__0(lean_object* v_G_1186_, lean_object* v_R_1187_, lean_object* v___y_1188_, uint8_t v___y_1189_){
_start:
{
lean_object* v___x_3858__overap_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; 
v___x_3858__overap_1190_ = lp_ShannonBounds_ShannonBounds_CertC11_chh7___at___00ShannonBounds_CertC11_Rh7___at___00ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18_spec__33_spec__47(v_G_1186_, v_R_1187_, v___y_1188_);
v___x_1191_ = lean_box(v___y_1189_);
v___x_1192_ = lean_apply_1(v___x_3858__overap_1190_, v___x_1191_);
return v___x_1192_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rh7___at___00ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18_spec__33___lam__0___boxed(lean_object* v_G_1193_, lean_object* v_R_1194_, lean_object* v___y_1195_, lean_object* v___y_1196_){
_start:
{
uint8_t v___y_4603__boxed_1197_; lean_object* v_res_1198_; 
v___y_4603__boxed_1197_ = lean_unbox(v___y_1196_);
v_res_1198_ = lp_ShannonBounds_ShannonBounds_CertC11_Rh7___at___00ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18_spec__33___lam__0(v_G_1193_, v_R_1194_, v___y_1195_, v___y_4603__boxed_1197_);
lean_dec(v___y_1195_);
return v_res_1198_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rh7___at___00ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18_spec__33(lean_object* v_G_1200_, lean_object* v_R_1201_){
_start:
{
lean_object* v___f_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; 
v___f_1202_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_CertC11_Rh7___at___00ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18_spec__33___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1202_, 0, v_G_1200_);
lean_closure_set(v___f_1202_, 1, v_R_1201_);
v___x_1203_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_Rx27___redArg___closed__0));
v___x_1204_ = lean_unsigned_to_nat(2u);
v___x_1205_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_CertC11_Rh7___at___00ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18_spec__33___closed__0));
v___x_1206_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_CertC11_Rh4___at___00ShannonBounds_CertC11_chh5___at___00ShannonBounds_CertC11_Rh5___at___00ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42_spec__53_spec__65_spec__76___closed__1));
v___x_1207_ = lp_ShannonBounds_ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14(v___x_1203_, v_G_1200_, v___x_1204_, v___x_1205_, v___f_1202_, v___x_1206_);
return v___x_1207_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chh8___at___00ShannonBounds_CertC11_Rh8___at___00ShannonBounds_CertC11_chh9___at___00ShannonBounds_CertC11_Rh9___at___00ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18_spec__32_spec__45_spec__56_spec__68(lean_object* v_G_1208_, lean_object* v_R_1209_, lean_object* v_i_1210_){
_start:
{
lean_object* v___f_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; 
lean_inc(v_R_1209_);
v___f_1211_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1211_, 0, v_G_1208_);
lean_closure_set(v___f_1211_, 1, v_R_1209_);
v___x_1212_ = lp_ShannonBounds_ShannonBounds_CertC11_Rh7___at___00ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18_spec__33(v_G_1208_, v_R_1209_);
v___x_1213_ = l_Fin_cases___redArg(v___x_1212_, v___f_1211_, v_i_1210_);
lean_dec(v___x_1212_);
return v___x_1213_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chh8___at___00ShannonBounds_CertC11_Rh8___at___00ShannonBounds_CertC11_chh9___at___00ShannonBounds_CertC11_Rh9___at___00ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18_spec__32_spec__45_spec__56_spec__68___boxed(lean_object* v_G_1214_, lean_object* v_R_1215_, lean_object* v_i_1216_){
_start:
{
lean_object* v_res_1217_; 
v_res_1217_ = lp_ShannonBounds_ShannonBounds_CertC11_chh8___at___00ShannonBounds_CertC11_Rh8___at___00ShannonBounds_CertC11_chh9___at___00ShannonBounds_CertC11_Rh9___at___00ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18_spec__32_spec__45_spec__56_spec__68(v_G_1214_, v_R_1215_, v_i_1216_);
lean_dec(v_i_1216_);
return v_res_1217_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rh8___at___00ShannonBounds_CertC11_chh9___at___00ShannonBounds_CertC11_Rh9___at___00ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18_spec__32_spec__45_spec__56___lam__0(lean_object* v_G_1218_, lean_object* v_R_1219_, lean_object* v___y_1220_, uint8_t v___y_1221_){
_start:
{
lean_object* v___x_3922__overap_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; 
v___x_3922__overap_1222_ = lp_ShannonBounds_ShannonBounds_CertC11_chh8___at___00ShannonBounds_CertC11_Rh8___at___00ShannonBounds_CertC11_chh9___at___00ShannonBounds_CertC11_Rh9___at___00ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18_spec__32_spec__45_spec__56_spec__68(v_G_1218_, v_R_1219_, v___y_1220_);
v___x_1223_ = lean_box(v___y_1221_);
v___x_1224_ = lean_apply_1(v___x_3922__overap_1222_, v___x_1223_);
return v___x_1224_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rh8___at___00ShannonBounds_CertC11_chh9___at___00ShannonBounds_CertC11_Rh9___at___00ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18_spec__32_spec__45_spec__56___lam__0___boxed(lean_object* v_G_1225_, lean_object* v_R_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_){
_start:
{
uint8_t v___y_4636__boxed_1229_; lean_object* v_res_1230_; 
v___y_4636__boxed_1229_ = lean_unbox(v___y_1228_);
v_res_1230_ = lp_ShannonBounds_ShannonBounds_CertC11_Rh8___at___00ShannonBounds_CertC11_chh9___at___00ShannonBounds_CertC11_Rh9___at___00ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18_spec__32_spec__45_spec__56___lam__0(v_G_1225_, v_R_1226_, v___y_1227_, v___y_4636__boxed_1229_);
lean_dec(v___y_1227_);
return v_res_1230_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rh8___at___00ShannonBounds_CertC11_chh9___at___00ShannonBounds_CertC11_Rh9___at___00ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18_spec__32_spec__45_spec__56(lean_object* v_G_1232_, lean_object* v_R_1233_){
_start:
{
lean_object* v___f_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; 
v___f_1234_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_CertC11_Rh8___at___00ShannonBounds_CertC11_chh9___at___00ShannonBounds_CertC11_Rh9___at___00ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18_spec__32_spec__45_spec__56___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1234_, 0, v_G_1232_);
lean_closure_set(v___f_1234_, 1, v_R_1233_);
v___x_1235_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_Rx27___redArg___closed__0));
v___x_1236_ = lean_unsigned_to_nat(2u);
v___x_1237_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_CertC11_Rh8___at___00ShannonBounds_CertC11_chh9___at___00ShannonBounds_CertC11_Rh9___at___00ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18_spec__32_spec__45_spec__56___closed__0));
v___x_1238_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_CertC11_Rh4___at___00ShannonBounds_CertC11_chh5___at___00ShannonBounds_CertC11_Rh5___at___00ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42_spec__53_spec__65_spec__76___closed__1));
v___x_1239_ = lp_ShannonBounds_ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14(v___x_1235_, v_G_1232_, v___x_1236_, v___x_1237_, v___f_1234_, v___x_1238_);
return v___x_1239_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chh9___at___00ShannonBounds_CertC11_Rh9___at___00ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18_spec__32_spec__45(lean_object* v_G_1240_, lean_object* v_R_1241_, lean_object* v_i_1242_){
_start:
{
lean_object* v___f_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; 
lean_inc(v_R_1241_);
v___f_1243_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1243_, 0, v_G_1240_);
lean_closure_set(v___f_1243_, 1, v_R_1241_);
v___x_1244_ = lp_ShannonBounds_ShannonBounds_CertC11_Rh8___at___00ShannonBounds_CertC11_chh9___at___00ShannonBounds_CertC11_Rh9___at___00ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18_spec__32_spec__45_spec__56(v_G_1240_, v_R_1241_);
v___x_1245_ = l_Fin_cases___redArg(v___x_1244_, v___f_1243_, v_i_1242_);
lean_dec(v___x_1244_);
return v___x_1245_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chh9___at___00ShannonBounds_CertC11_Rh9___at___00ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18_spec__32_spec__45___boxed(lean_object* v_G_1246_, lean_object* v_R_1247_, lean_object* v_i_1248_){
_start:
{
lean_object* v_res_1249_; 
v_res_1249_ = lp_ShannonBounds_ShannonBounds_CertC11_chh9___at___00ShannonBounds_CertC11_Rh9___at___00ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18_spec__32_spec__45(v_G_1246_, v_R_1247_, v_i_1248_);
lean_dec(v_i_1248_);
return v_res_1249_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rh9___at___00ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18_spec__32___lam__0(lean_object* v_G_1250_, lean_object* v_R_1251_, lean_object* v___y_1252_, uint8_t v___y_1253_){
_start:
{
lean_object* v___x_3855__overap_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; 
v___x_3855__overap_1254_ = lp_ShannonBounds_ShannonBounds_CertC11_chh9___at___00ShannonBounds_CertC11_Rh9___at___00ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18_spec__32_spec__45(v_G_1250_, v_R_1251_, v___y_1252_);
v___x_1255_ = lean_box(v___y_1253_);
v___x_1256_ = lean_apply_1(v___x_3855__overap_1254_, v___x_1255_);
return v___x_1256_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rh9___at___00ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18_spec__32___lam__0___boxed(lean_object* v_G_1257_, lean_object* v_R_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_){
_start:
{
uint8_t v___y_4669__boxed_1261_; lean_object* v_res_1262_; 
v___y_4669__boxed_1261_ = lean_unbox(v___y_1260_);
v_res_1262_ = lp_ShannonBounds_ShannonBounds_CertC11_Rh9___at___00ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18_spec__32___lam__0(v_G_1257_, v_R_1258_, v___y_1259_, v___y_4669__boxed_1261_);
lean_dec(v___y_1259_);
return v_res_1262_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rh9___at___00ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18_spec__32(lean_object* v_G_1264_, lean_object* v_R_1265_){
_start:
{
lean_object* v___f_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; 
v___f_1266_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_CertC11_Rh9___at___00ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18_spec__32___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1266_, 0, v_G_1264_);
lean_closure_set(v___f_1266_, 1, v_R_1265_);
v___x_1267_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_Rx27___redArg___closed__0));
v___x_1268_ = lean_unsigned_to_nat(2u);
v___x_1269_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_CertC11_Rh9___at___00ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18_spec__32___closed__0));
v___x_1270_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_CertC11_Rh4___at___00ShannonBounds_CertC11_chh5___at___00ShannonBounds_CertC11_Rh5___at___00ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42_spec__53_spec__65_spec__76___closed__1));
v___x_1271_ = lp_ShannonBounds_ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14(v___x_1267_, v_G_1264_, v___x_1268_, v___x_1269_, v___f_1266_, v___x_1270_);
return v___x_1271_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18___lam__0(lean_object* v_G_1272_, lean_object* v_R_1273_, lean_object* v_x_1274_, uint8_t v___y_1275_){
_start:
{
lean_object* v___x_3824__overap_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; 
v___x_3824__overap_1276_ = lp_ShannonBounds_ShannonBounds_CertC11_Rh9___at___00ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18_spec__32(v_G_1272_, v_R_1273_);
v___x_1277_ = lean_box(v___y_1275_);
v___x_1278_ = lean_apply_1(v___x_3824__overap_1276_, v___x_1277_);
return v___x_1278_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18___lam__0___boxed(lean_object* v_G_1279_, lean_object* v_R_1280_, lean_object* v_x_1281_, lean_object* v___y_1282_){
_start:
{
uint8_t v___y_4696__boxed_1283_; lean_object* v_res_1284_; 
v___y_4696__boxed_1283_ = lean_unbox(v___y_1282_);
v_res_1284_ = lp_ShannonBounds_ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18___lam__0(v_G_1279_, v_R_1280_, v_x_1281_, v___y_4696__boxed_1283_);
lean_dec(v_x_1281_);
return v_res_1284_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40___lam__1(lean_object* v_G_1285_, lean_object* v_R_1286_, lean_object* v___f_1287_, lean_object* v_i_1288_, uint8_t v___y_1289_){
_start:
{
lean_object* v___x_1290_; lean_object* v___x_3887__overap_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; 
v___x_1290_ = lp_ShannonBounds_ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29(v_G_1285_, v_R_1286_);
v___x_3887__overap_1291_ = l_Fin_cases___redArg(v___x_1290_, v___f_1287_, v_i_1288_);
lean_dec(v___x_1290_);
v___x_1292_ = lean_box(v___y_1289_);
v___x_1293_ = lean_apply_1(v___x_3887__overap_1291_, v___x_1292_);
return v___x_1293_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40___lam__1___boxed(lean_object* v_G_1294_, lean_object* v_R_1295_, lean_object* v___f_1296_, lean_object* v_i_1297_, lean_object* v___y_1298_){
_start:
{
uint8_t v___y_4706__boxed_1299_; lean_object* v_res_1300_; 
v___y_4706__boxed_1299_ = lean_unbox(v___y_1298_);
v_res_1300_ = lp_ShannonBounds_ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40___lam__1(v_G_1294_, v_R_1295_, v___f_1296_, v_i_1297_, v___y_4706__boxed_1299_);
lean_dec(v_i_1297_);
return v_res_1300_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chb2___at___00ShannonBounds_CertC11_Rb2___at___00ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40_spec__49_spec__60(lean_object* v_G_1301_, lean_object* v_R_1302_, lean_object* v_i_1303_){
_start:
{
lean_object* v___f_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; 
lean_inc(v_R_1302_);
v___f_1304_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1304_, 0, v_G_1301_);
lean_closure_set(v___f_1304_, 1, v_R_1302_);
v___x_1305_ = lp_ShannonBounds_ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21(v_G_1301_, v_R_1302_);
v___x_1306_ = l_Fin_cases___redArg(v___x_1305_, v___f_1304_, v_i_1303_);
lean_dec(v___x_1305_);
return v___x_1306_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chb2___at___00ShannonBounds_CertC11_Rb2___at___00ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40_spec__49_spec__60___boxed(lean_object* v_G_1307_, lean_object* v_R_1308_, lean_object* v_i_1309_){
_start:
{
lean_object* v_res_1310_; 
v_res_1310_ = lp_ShannonBounds_ShannonBounds_CertC11_chb2___at___00ShannonBounds_CertC11_Rb2___at___00ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40_spec__49_spec__60(v_G_1307_, v_R_1308_, v_i_1309_);
lean_dec(v_i_1309_);
return v_res_1310_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb2___at___00ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40_spec__49___lam__0(lean_object* v_G_1311_, lean_object* v_R_1312_, lean_object* v___y_1313_, uint8_t v___y_1314_){
_start:
{
lean_object* v___x_3913__overap_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; 
v___x_3913__overap_1315_ = lp_ShannonBounds_ShannonBounds_CertC11_chb2___at___00ShannonBounds_CertC11_Rb2___at___00ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40_spec__49_spec__60(v_G_1311_, v_R_1312_, v___y_1313_);
v___x_1316_ = lean_box(v___y_1314_);
v___x_1317_ = lean_apply_1(v___x_3913__overap_1315_, v___x_1316_);
return v___x_1317_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb2___at___00ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40_spec__49___lam__0___boxed(lean_object* v_G_1318_, lean_object* v_R_1319_, lean_object* v___y_1320_, lean_object* v___y_1321_){
_start:
{
uint8_t v___y_4724__boxed_1322_; lean_object* v_res_1323_; 
v___y_4724__boxed_1322_ = lean_unbox(v___y_1321_);
v_res_1323_ = lp_ShannonBounds_ShannonBounds_CertC11_Rb2___at___00ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40_spec__49___lam__0(v_G_1318_, v_R_1319_, v___y_1320_, v___y_4724__boxed_1322_);
lean_dec(v___y_1320_);
return v_res_1323_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb2___at___00ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40_spec__49(lean_object* v_G_1325_, lean_object* v_R_1326_){
_start:
{
lean_object* v___f_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; 
v___f_1327_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_CertC11_Rb2___at___00ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40_spec__49___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1327_, 0, v_G_1325_);
lean_closure_set(v___f_1327_, 1, v_R_1326_);
v___x_1328_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_Rx27___redArg___closed__0));
v___x_1329_ = lean_unsigned_to_nat(2u);
v___x_1330_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_CertC11_Rb2___at___00ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40_spec__49___closed__0));
v___x_1331_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_CertC11_Rh4___at___00ShannonBounds_CertC11_chh5___at___00ShannonBounds_CertC11_Rh5___at___00ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42_spec__53_spec__65_spec__76___closed__1));
v___x_1332_ = lp_ShannonBounds_ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14(v___x_1328_, v_G_1325_, v___x_1329_, v___x_1330_, v___f_1327_, v___x_1331_);
return v___x_1332_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40___lam__0(lean_object* v_G_1333_, lean_object* v_R_1334_, lean_object* v_x_1335_, uint8_t v___y_1336_){
_start:
{
lean_object* v___x_3883__overap_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; 
v___x_3883__overap_1337_ = lp_ShannonBounds_ShannonBounds_CertC11_Rb2___at___00ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40_spec__49(v_G_1333_, v_R_1334_);
v___x_1338_ = lean_box(v___y_1336_);
v___x_1339_ = lean_apply_1(v___x_3883__overap_1337_, v___x_1338_);
return v___x_1339_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40___lam__0___boxed(lean_object* v_G_1340_, lean_object* v_R_1341_, lean_object* v_x_1342_, lean_object* v___y_1343_){
_start:
{
uint8_t v___y_4751__boxed_1344_; lean_object* v_res_1345_; 
v___y_4751__boxed_1344_ = lean_unbox(v___y_1343_);
v_res_1345_ = lp_ShannonBounds_ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40___lam__0(v_G_1340_, v_R_1341_, v_x_1342_, v___y_4751__boxed_1344_);
lean_dec(v_x_1342_);
return v_res_1345_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40(lean_object* v_G_1346_, lean_object* v_R_1347_, lean_object* v_i_1348_){
_start:
{
lean_object* v___f_1349_; lean_object* v___f_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; 
lean_inc_n(v_R_1347_, 2);
v___f_1349_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1349_, 0, v_G_1346_);
lean_closure_set(v___f_1349_, 1, v_R_1347_);
v___f_1350_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40___lam__1___boxed), 5, 3);
lean_closure_set(v___f_1350_, 0, v_G_1346_);
lean_closure_set(v___f_1350_, 1, v_R_1347_);
lean_closure_set(v___f_1350_, 2, v___f_1349_);
v___x_1351_ = lp_ShannonBounds_ShannonBounds_CertC11_Rg3___at___00ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40_spec__50(v_G_1346_, v_R_1347_);
v___x_1352_ = l_Fin_cases___redArg(v___x_1351_, v___f_1350_, v_i_1348_);
lean_dec(v___x_1351_);
return v___x_1352_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40___boxed(lean_object* v_G_1353_, lean_object* v_R_1354_, lean_object* v_i_1355_){
_start:
{
lean_object* v_res_1356_; 
v_res_1356_ = lp_ShannonBounds_ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40(v_G_1353_, v_R_1354_, v_i_1355_);
lean_dec(v_i_1355_);
return v_res_1356_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28___lam__0(lean_object* v_G_1357_, lean_object* v_R_1358_, lean_object* v___y_1359_, uint8_t v___y_1360_){
_start:
{
lean_object* v___x_3849__overap_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; 
v___x_3849__overap_1361_ = lp_ShannonBounds_ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40(v_G_1357_, v_R_1358_, v___y_1359_);
v___x_1362_ = lean_box(v___y_1360_);
v___x_1363_ = lean_apply_1(v___x_3849__overap_1361_, v___x_1362_);
return v___x_1363_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28___lam__0___boxed(lean_object* v_G_1364_, lean_object* v_R_1365_, lean_object* v___y_1366_, lean_object* v___y_1367_){
_start:
{
uint8_t v___y_4769__boxed_1368_; lean_object* v_res_1369_; 
v___y_4769__boxed_1368_ = lean_unbox(v___y_1367_);
v_res_1369_ = lp_ShannonBounds_ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28___lam__0(v_G_1364_, v_R_1365_, v___y_1366_, v___y_4769__boxed_1368_);
lean_dec(v___y_1366_);
return v_res_1369_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28(lean_object* v_G_1371_, lean_object* v_R_1372_){
_start:
{
lean_object* v___f_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; 
v___f_1373_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1373_, 0, v_G_1371_);
lean_closure_set(v___f_1373_, 1, v_R_1372_);
v___x_1374_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_Rx27___redArg___closed__0));
v___x_1375_ = lean_unsigned_to_nat(3u);
v___x_1376_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28___closed__0));
v___x_1377_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_CertC11_Rg3___at___00ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40_spec__50___closed__1));
v___x_1378_ = lp_ShannonBounds_ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14(v___x_1374_, v_G_1371_, v___x_1375_, v___x_1376_, v___f_1373_, v___x_1377_);
return v___x_1378_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18___lam__1(lean_object* v_G_1379_, lean_object* v_R_1380_, lean_object* v___f_1381_, lean_object* v_i_1382_, uint8_t v___y_1383_){
_start:
{
lean_object* v___x_1384_; lean_object* v___x_3828__overap_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; 
v___x_1384_ = lp_ShannonBounds_ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28(v_G_1379_, v_R_1380_);
v___x_3828__overap_1385_ = l_Fin_cases___redArg(v___x_1384_, v___f_1381_, v_i_1382_);
lean_dec(v___x_1384_);
v___x_1386_ = lean_box(v___y_1383_);
v___x_1387_ = lean_apply_1(v___x_3828__overap_1385_, v___x_1386_);
return v___x_1387_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18___lam__1___boxed(lean_object* v_G_1388_, lean_object* v_R_1389_, lean_object* v___f_1390_, lean_object* v_i_1391_, lean_object* v___y_1392_){
_start:
{
uint8_t v___y_4796__boxed_1393_; lean_object* v_res_1394_; 
v___y_4796__boxed_1393_ = lean_unbox(v___y_1392_);
v_res_1394_ = lp_ShannonBounds_ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18___lam__1(v_G_1388_, v_R_1389_, v___f_1390_, v_i_1391_, v___y_4796__boxed_1393_);
lean_dec(v_i_1391_);
return v_res_1394_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18(lean_object* v_G_1395_, lean_object* v_R_1396_, lean_object* v_i_1397_){
_start:
{
lean_object* v___f_1398_; lean_object* v___f_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; 
lean_inc_n(v_R_1396_, 2);
v___f_1398_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1398_, 0, v_G_1395_);
lean_closure_set(v___f_1398_, 1, v_R_1396_);
v___f_1399_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18___lam__1___boxed), 5, 3);
lean_closure_set(v___f_1399_, 0, v_G_1395_);
lean_closure_set(v___f_1399_, 1, v_R_1396_);
lean_closure_set(v___f_1399_, 2, v___f_1398_);
v___x_1400_ = lp_ShannonBounds_ShannonBounds_CertC11_Rh7___at___00ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18_spec__33(v_G_1395_, v_R_1396_);
v___x_1401_ = l_Fin_cases___redArg(v___x_1400_, v___f_1399_, v_i_1397_);
lean_dec(v___x_1400_);
return v___x_1401_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18___boxed(lean_object* v_G_1402_, lean_object* v_R_1403_, lean_object* v_i_1404_){
_start:
{
lean_object* v_res_1405_; 
v_res_1405_ = lp_ShannonBounds_ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18(v_G_1402_, v_R_1403_, v_i_1404_);
lean_dec(v_i_1404_);
return v_res_1405_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10___lam__0(lean_object* v_G_1406_, lean_object* v_R_1407_, lean_object* v___y_1408_, uint8_t v___y_1409_){
_start:
{
lean_object* v___x_3808__overap_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; 
v___x_3808__overap_1410_ = lp_ShannonBounds_ShannonBounds_CertC11_chx27___at___00ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10_spec__18(v_G_1406_, v_R_1407_, v___y_1408_);
v___x_1411_ = lean_box(v___y_1409_);
v___x_1412_ = lean_apply_1(v___x_3808__overap_1410_, v___x_1411_);
return v___x_1412_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10___lam__0___boxed(lean_object* v_G_1413_, lean_object* v_R_1414_, lean_object* v___y_1415_, lean_object* v___y_1416_){
_start:
{
uint8_t v___y_4816__boxed_1417_; lean_object* v_res_1418_; 
v___y_4816__boxed_1417_ = lean_unbox(v___y_1416_);
v_res_1418_ = lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10___lam__0(v_G_1413_, v_R_1414_, v___y_1415_, v___y_4816__boxed_1417_);
lean_dec(v___y_1415_);
return v_res_1418_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10(lean_object* v_G_1419_, lean_object* v_R_1420_){
_start:
{
lean_object* v___f_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; 
v___f_1421_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1421_, 0, v_G_1419_);
lean_closure_set(v___f_1421_, 1, v_R_1420_);
v___x_1422_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_Rx27___redArg___closed__0));
v___x_1423_ = lean_unsigned_to_nat(3u);
v___x_1424_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_Rx27___redArg___closed__1));
v___x_1425_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_S3mix___closed__0));
v___x_1426_ = lp_ShannonBounds_ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14(v___x_1422_, v_G_1419_, v___x_1423_, v___x_1424_, v___f_1421_, v___x_1425_);
return v___x_1426_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chb3___at___00ShannonBounds_CertC11_Rb3___at___00ShannonBounds_CertC11_chb4___at___00ShannonBounds_CertC11_Rb4___at___00ShannonBounds_CertC11_chb5___at___00ShannonBounds_CertC11_Rb5___at___00ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98_spec__99_spec__100_spec__101_spec__102_spec__103_spec__104(lean_object* v_G_1427_, lean_object* v_R_1428_, lean_object* v_i_1429_){
_start:
{
lean_object* v___f_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; 
lean_inc(v_R_1428_);
v___f_1430_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1430_, 0, v_G_1427_);
lean_closure_set(v___f_1430_, 1, v_R_1428_);
v___x_1431_ = lp_ShannonBounds_ShannonBounds_CertC11_Rb2___at___00ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40_spec__49(v_G_1427_, v_R_1428_);
v___x_1432_ = l_Fin_cases___redArg(v___x_1431_, v___f_1430_, v_i_1429_);
lean_dec(v___x_1431_);
return v___x_1432_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chb3___at___00ShannonBounds_CertC11_Rb3___at___00ShannonBounds_CertC11_chb4___at___00ShannonBounds_CertC11_Rb4___at___00ShannonBounds_CertC11_chb5___at___00ShannonBounds_CertC11_Rb5___at___00ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98_spec__99_spec__100_spec__101_spec__102_spec__103_spec__104___boxed(lean_object* v_G_1433_, lean_object* v_R_1434_, lean_object* v_i_1435_){
_start:
{
lean_object* v_res_1436_; 
v_res_1436_ = lp_ShannonBounds_ShannonBounds_CertC11_chb3___at___00ShannonBounds_CertC11_Rb3___at___00ShannonBounds_CertC11_chb4___at___00ShannonBounds_CertC11_Rb4___at___00ShannonBounds_CertC11_chb5___at___00ShannonBounds_CertC11_Rb5___at___00ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98_spec__99_spec__100_spec__101_spec__102_spec__103_spec__104(v_G_1433_, v_R_1434_, v_i_1435_);
lean_dec(v_i_1435_);
return v_res_1436_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb3___at___00ShannonBounds_CertC11_chb4___at___00ShannonBounds_CertC11_Rb4___at___00ShannonBounds_CertC11_chb5___at___00ShannonBounds_CertC11_Rb5___at___00ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98_spec__99_spec__100_spec__101_spec__102_spec__103___lam__0(lean_object* v_G_1437_, lean_object* v_R_1438_, lean_object* v___y_1439_, uint8_t v___y_1440_){
_start:
{
lean_object* v___x_4039__overap_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; 
v___x_4039__overap_1441_ = lp_ShannonBounds_ShannonBounds_CertC11_chb3___at___00ShannonBounds_CertC11_Rb3___at___00ShannonBounds_CertC11_chb4___at___00ShannonBounds_CertC11_Rb4___at___00ShannonBounds_CertC11_chb5___at___00ShannonBounds_CertC11_Rb5___at___00ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98_spec__99_spec__100_spec__101_spec__102_spec__103_spec__104(v_G_1437_, v_R_1438_, v___y_1439_);
v___x_1442_ = lean_box(v___y_1440_);
v___x_1443_ = lean_apply_1(v___x_4039__overap_1441_, v___x_1442_);
return v___x_1443_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb3___at___00ShannonBounds_CertC11_chb4___at___00ShannonBounds_CertC11_Rb4___at___00ShannonBounds_CertC11_chb5___at___00ShannonBounds_CertC11_Rb5___at___00ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98_spec__99_spec__100_spec__101_spec__102_spec__103___lam__0___boxed(lean_object* v_G_1444_, lean_object* v_R_1445_, lean_object* v___y_1446_, lean_object* v___y_1447_){
_start:
{
uint8_t v___y_4847__boxed_1448_; lean_object* v_res_1449_; 
v___y_4847__boxed_1448_ = lean_unbox(v___y_1447_);
v_res_1449_ = lp_ShannonBounds_ShannonBounds_CertC11_Rb3___at___00ShannonBounds_CertC11_chb4___at___00ShannonBounds_CertC11_Rb4___at___00ShannonBounds_CertC11_chb5___at___00ShannonBounds_CertC11_Rb5___at___00ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98_spec__99_spec__100_spec__101_spec__102_spec__103___lam__0(v_G_1444_, v_R_1445_, v___y_1446_, v___y_4847__boxed_1448_);
lean_dec(v___y_1446_);
return v_res_1449_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb3___at___00ShannonBounds_CertC11_chb4___at___00ShannonBounds_CertC11_Rb4___at___00ShannonBounds_CertC11_chb5___at___00ShannonBounds_CertC11_Rb5___at___00ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98_spec__99_spec__100_spec__101_spec__102_spec__103(lean_object* v_G_1451_, lean_object* v_R_1452_){
_start:
{
lean_object* v___f_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; 
v___f_1453_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_CertC11_Rb3___at___00ShannonBounds_CertC11_chb4___at___00ShannonBounds_CertC11_Rb4___at___00ShannonBounds_CertC11_chb5___at___00ShannonBounds_CertC11_Rb5___at___00ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98_spec__99_spec__100_spec__101_spec__102_spec__103___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1453_, 0, v_G_1451_);
lean_closure_set(v___f_1453_, 1, v_R_1452_);
v___x_1454_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_Rx27___redArg___closed__0));
v___x_1455_ = lean_unsigned_to_nat(2u);
v___x_1456_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_CertC11_Rb3___at___00ShannonBounds_CertC11_chb4___at___00ShannonBounds_CertC11_Rb4___at___00ShannonBounds_CertC11_chb5___at___00ShannonBounds_CertC11_Rb5___at___00ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98_spec__99_spec__100_spec__101_spec__102_spec__103___closed__0));
v___x_1457_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_CertC11_Rh4___at___00ShannonBounds_CertC11_chh5___at___00ShannonBounds_CertC11_Rh5___at___00ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42_spec__53_spec__65_spec__76___closed__1));
v___x_1458_ = lp_ShannonBounds_ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14(v___x_1454_, v_G_1451_, v___x_1455_, v___x_1456_, v___f_1453_, v___x_1457_);
return v___x_1458_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chb4___at___00ShannonBounds_CertC11_Rb4___at___00ShannonBounds_CertC11_chb5___at___00ShannonBounds_CertC11_Rb5___at___00ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98_spec__99_spec__100_spec__101_spec__102(lean_object* v_G_1459_, lean_object* v_R_1460_, lean_object* v_i_1461_){
_start:
{
lean_object* v___f_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; 
lean_inc(v_R_1460_);
v___f_1462_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1462_, 0, v_G_1459_);
lean_closure_set(v___f_1462_, 1, v_R_1460_);
v___x_1463_ = lp_ShannonBounds_ShannonBounds_CertC11_Rb3___at___00ShannonBounds_CertC11_chb4___at___00ShannonBounds_CertC11_Rb4___at___00ShannonBounds_CertC11_chb5___at___00ShannonBounds_CertC11_Rb5___at___00ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98_spec__99_spec__100_spec__101_spec__102_spec__103(v_G_1459_, v_R_1460_);
v___x_1464_ = l_Fin_cases___redArg(v___x_1463_, v___f_1462_, v_i_1461_);
lean_dec(v___x_1463_);
return v___x_1464_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chb4___at___00ShannonBounds_CertC11_Rb4___at___00ShannonBounds_CertC11_chb5___at___00ShannonBounds_CertC11_Rb5___at___00ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98_spec__99_spec__100_spec__101_spec__102___boxed(lean_object* v_G_1465_, lean_object* v_R_1466_, lean_object* v_i_1467_){
_start:
{
lean_object* v_res_1468_; 
v_res_1468_ = lp_ShannonBounds_ShannonBounds_CertC11_chb4___at___00ShannonBounds_CertC11_Rb4___at___00ShannonBounds_CertC11_chb5___at___00ShannonBounds_CertC11_Rb5___at___00ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98_spec__99_spec__100_spec__101_spec__102(v_G_1465_, v_R_1466_, v_i_1467_);
lean_dec(v_i_1467_);
return v_res_1468_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb4___at___00ShannonBounds_CertC11_chb5___at___00ShannonBounds_CertC11_Rb5___at___00ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98_spec__99_spec__100_spec__101___lam__0(lean_object* v_G_1469_, lean_object* v_R_1470_, lean_object* v___y_1471_, uint8_t v___y_1472_){
_start:
{
lean_object* v___x_4033__overap_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; 
v___x_4033__overap_1473_ = lp_ShannonBounds_ShannonBounds_CertC11_chb4___at___00ShannonBounds_CertC11_Rb4___at___00ShannonBounds_CertC11_chb5___at___00ShannonBounds_CertC11_Rb5___at___00ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98_spec__99_spec__100_spec__101_spec__102(v_G_1469_, v_R_1470_, v___y_1471_);
v___x_1474_ = lean_box(v___y_1472_);
v___x_1475_ = lean_apply_1(v___x_4033__overap_1473_, v___x_1474_);
return v___x_1475_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb4___at___00ShannonBounds_CertC11_chb5___at___00ShannonBounds_CertC11_Rb5___at___00ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98_spec__99_spec__100_spec__101___lam__0___boxed(lean_object* v_G_1476_, lean_object* v_R_1477_, lean_object* v___y_1478_, lean_object* v___y_1479_){
_start:
{
uint8_t v___y_4880__boxed_1480_; lean_object* v_res_1481_; 
v___y_4880__boxed_1480_ = lean_unbox(v___y_1479_);
v_res_1481_ = lp_ShannonBounds_ShannonBounds_CertC11_Rb4___at___00ShannonBounds_CertC11_chb5___at___00ShannonBounds_CertC11_Rb5___at___00ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98_spec__99_spec__100_spec__101___lam__0(v_G_1476_, v_R_1477_, v___y_1478_, v___y_4880__boxed_1480_);
lean_dec(v___y_1478_);
return v_res_1481_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb4___at___00ShannonBounds_CertC11_chb5___at___00ShannonBounds_CertC11_Rb5___at___00ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98_spec__99_spec__100_spec__101(lean_object* v_G_1483_, lean_object* v_R_1484_){
_start:
{
lean_object* v___f_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; 
v___f_1485_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_CertC11_Rb4___at___00ShannonBounds_CertC11_chb5___at___00ShannonBounds_CertC11_Rb5___at___00ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98_spec__99_spec__100_spec__101___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1485_, 0, v_G_1483_);
lean_closure_set(v___f_1485_, 1, v_R_1484_);
v___x_1486_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_Rx27___redArg___closed__0));
v___x_1487_ = lean_unsigned_to_nat(2u);
v___x_1488_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_CertC11_Rb4___at___00ShannonBounds_CertC11_chb5___at___00ShannonBounds_CertC11_Rb5___at___00ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98_spec__99_spec__100_spec__101___closed__0));
v___x_1489_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_CertC11_Rh4___at___00ShannonBounds_CertC11_chh5___at___00ShannonBounds_CertC11_Rh5___at___00ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42_spec__53_spec__65_spec__76___closed__1));
v___x_1490_ = lp_ShannonBounds_ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14(v___x_1486_, v_G_1483_, v___x_1487_, v___x_1488_, v___f_1485_, v___x_1489_);
return v___x_1490_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chb5___at___00ShannonBounds_CertC11_Rb5___at___00ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98_spec__99_spec__100(lean_object* v_G_1491_, lean_object* v_R_1492_, lean_object* v_i_1493_){
_start:
{
lean_object* v___f_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; 
lean_inc(v_R_1492_);
v___f_1494_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1494_, 0, v_G_1491_);
lean_closure_set(v___f_1494_, 1, v_R_1492_);
v___x_1495_ = lp_ShannonBounds_ShannonBounds_CertC11_Rb4___at___00ShannonBounds_CertC11_chb5___at___00ShannonBounds_CertC11_Rb5___at___00ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98_spec__99_spec__100_spec__101(v_G_1491_, v_R_1492_);
v___x_1496_ = l_Fin_cases___redArg(v___x_1495_, v___f_1494_, v_i_1493_);
lean_dec(v___x_1495_);
return v___x_1496_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chb5___at___00ShannonBounds_CertC11_Rb5___at___00ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98_spec__99_spec__100___boxed(lean_object* v_G_1497_, lean_object* v_R_1498_, lean_object* v_i_1499_){
_start:
{
lean_object* v_res_1500_; 
v_res_1500_ = lp_ShannonBounds_ShannonBounds_CertC11_chb5___at___00ShannonBounds_CertC11_Rb5___at___00ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98_spec__99_spec__100(v_G_1497_, v_R_1498_, v_i_1499_);
lean_dec(v_i_1499_);
return v_res_1500_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb5___at___00ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98_spec__99___lam__0(lean_object* v_G_1501_, lean_object* v_R_1502_, lean_object* v___y_1503_, uint8_t v___y_1504_){
_start:
{
lean_object* v___x_4027__overap_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; 
v___x_4027__overap_1505_ = lp_ShannonBounds_ShannonBounds_CertC11_chb5___at___00ShannonBounds_CertC11_Rb5___at___00ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98_spec__99_spec__100(v_G_1501_, v_R_1502_, v___y_1503_);
v___x_1506_ = lean_box(v___y_1504_);
v___x_1507_ = lean_apply_1(v___x_4027__overap_1505_, v___x_1506_);
return v___x_1507_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb5___at___00ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98_spec__99___lam__0___boxed(lean_object* v_G_1508_, lean_object* v_R_1509_, lean_object* v___y_1510_, lean_object* v___y_1511_){
_start:
{
uint8_t v___y_4913__boxed_1512_; lean_object* v_res_1513_; 
v___y_4913__boxed_1512_ = lean_unbox(v___y_1511_);
v_res_1513_ = lp_ShannonBounds_ShannonBounds_CertC11_Rb5___at___00ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98_spec__99___lam__0(v_G_1508_, v_R_1509_, v___y_1510_, v___y_4913__boxed_1512_);
lean_dec(v___y_1510_);
return v_res_1513_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb5___at___00ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98_spec__99(lean_object* v_G_1515_, lean_object* v_R_1516_){
_start:
{
lean_object* v___f_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; 
v___f_1517_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_CertC11_Rb5___at___00ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98_spec__99___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1517_, 0, v_G_1515_);
lean_closure_set(v___f_1517_, 1, v_R_1516_);
v___x_1518_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_Rx27___redArg___closed__0));
v___x_1519_ = lean_unsigned_to_nat(2u);
v___x_1520_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_CertC11_Rb5___at___00ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98_spec__99___closed__0));
v___x_1521_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_CertC11_Rh4___at___00ShannonBounds_CertC11_chh5___at___00ShannonBounds_CertC11_Rh5___at___00ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42_spec__53_spec__65_spec__76___closed__1));
v___x_1522_ = lp_ShannonBounds_ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14(v___x_1518_, v_G_1515_, v___x_1519_, v___x_1520_, v___f_1517_, v___x_1521_);
return v___x_1522_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98(lean_object* v_G_1523_, lean_object* v_R_1524_, lean_object* v_i_1525_){
_start:
{
lean_object* v___f_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; 
lean_inc(v_R_1524_);
v___f_1526_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1526_, 0, v_G_1523_);
lean_closure_set(v___f_1526_, 1, v_R_1524_);
v___x_1527_ = lp_ShannonBounds_ShannonBounds_CertC11_Rb5___at___00ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98_spec__99(v_G_1523_, v_R_1524_);
v___x_1528_ = l_Fin_cases___redArg(v___x_1527_, v___f_1526_, v_i_1525_);
lean_dec(v___x_1527_);
return v___x_1528_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98___boxed(lean_object* v_G_1529_, lean_object* v_R_1530_, lean_object* v_i_1531_){
_start:
{
lean_object* v_res_1532_; 
v_res_1532_ = lp_ShannonBounds_ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98(v_G_1529_, v_R_1530_, v_i_1531_);
lean_dec(v_i_1531_);
return v_res_1532_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97___lam__0(lean_object* v_G_1533_, lean_object* v_R_1534_, lean_object* v___y_1535_, uint8_t v___y_1536_){
_start:
{
lean_object* v___x_4021__overap_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; 
v___x_4021__overap_1537_ = lp_ShannonBounds_ShannonBounds_CertC11_chb6___at___00ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97_spec__98(v_G_1533_, v_R_1534_, v___y_1535_);
v___x_1538_ = lean_box(v___y_1536_);
v___x_1539_ = lean_apply_1(v___x_4021__overap_1537_, v___x_1538_);
return v___x_1539_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97___lam__0___boxed(lean_object* v_G_1540_, lean_object* v_R_1541_, lean_object* v___y_1542_, lean_object* v___y_1543_){
_start:
{
uint8_t v___y_4946__boxed_1544_; lean_object* v_res_1545_; 
v___y_4946__boxed_1544_ = lean_unbox(v___y_1543_);
v_res_1545_ = lp_ShannonBounds_ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97___lam__0(v_G_1540_, v_R_1541_, v___y_1542_, v___y_4946__boxed_1544_);
lean_dec(v___y_1542_);
return v_res_1545_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97(lean_object* v_G_1547_, lean_object* v_R_1548_){
_start:
{
lean_object* v___f_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; 
v___f_1549_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1549_, 0, v_G_1547_);
lean_closure_set(v___f_1549_, 1, v_R_1548_);
v___x_1550_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_Rx27___redArg___closed__0));
v___x_1551_ = lean_unsigned_to_nat(2u);
v___x_1552_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97___closed__0));
v___x_1553_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_CertC11_Rh4___at___00ShannonBounds_CertC11_chh5___at___00ShannonBounds_CertC11_Rh5___at___00ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42_spec__53_spec__65_spec__76___closed__1));
v___x_1554_ = lp_ShannonBounds_ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14(v___x_1550_, v_G_1547_, v___x_1551_, v___x_1552_, v___f_1549_, v___x_1553_);
return v___x_1554_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96(lean_object* v_G_1555_, lean_object* v_R_1556_, lean_object* v_i_1557_){
_start:
{
lean_object* v___f_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; 
lean_inc(v_R_1556_);
v___f_1558_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1558_, 0, v_G_1555_);
lean_closure_set(v___f_1558_, 1, v_R_1556_);
v___x_1559_ = lp_ShannonBounds_ShannonBounds_CertC11_Rb6___at___00ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96_spec__97(v_G_1555_, v_R_1556_);
v___x_1560_ = l_Fin_cases___redArg(v___x_1559_, v___f_1558_, v_i_1557_);
lean_dec(v___x_1559_);
return v___x_1560_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96___boxed(lean_object* v_G_1561_, lean_object* v_R_1562_, lean_object* v_i_1563_){
_start:
{
lean_object* v_res_1564_; 
v_res_1564_ = lp_ShannonBounds_ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96(v_G_1561_, v_R_1562_, v_i_1563_);
lean_dec(v_i_1563_);
return v_res_1564_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95___lam__0(lean_object* v_G_1565_, lean_object* v_R_1566_, lean_object* v___y_1567_, uint8_t v___y_1568_){
_start:
{
lean_object* v___x_4015__overap_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; 
v___x_4015__overap_1569_ = lp_ShannonBounds_ShannonBounds_CertC11_chb7___at___00ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95_spec__96(v_G_1565_, v_R_1566_, v___y_1567_);
v___x_1570_ = lean_box(v___y_1568_);
v___x_1571_ = lean_apply_1(v___x_4015__overap_1569_, v___x_1570_);
return v___x_1571_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95___lam__0___boxed(lean_object* v_G_1572_, lean_object* v_R_1573_, lean_object* v___y_1574_, lean_object* v___y_1575_){
_start:
{
uint8_t v___y_4979__boxed_1576_; lean_object* v_res_1577_; 
v___y_4979__boxed_1576_ = lean_unbox(v___y_1575_);
v_res_1577_ = lp_ShannonBounds_ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95___lam__0(v_G_1572_, v_R_1573_, v___y_1574_, v___y_4979__boxed_1576_);
lean_dec(v___y_1574_);
return v_res_1577_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95(lean_object* v_G_1579_, lean_object* v_R_1580_){
_start:
{
lean_object* v___f_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; 
v___f_1581_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1581_, 0, v_G_1579_);
lean_closure_set(v___f_1581_, 1, v_R_1580_);
v___x_1582_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_Rx27___redArg___closed__0));
v___x_1583_ = lean_unsigned_to_nat(2u);
v___x_1584_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95___closed__0));
v___x_1585_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_CertC11_Rh4___at___00ShannonBounds_CertC11_chh5___at___00ShannonBounds_CertC11_Rh5___at___00ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42_spec__53_spec__65_spec__76___closed__1));
v___x_1586_ = lp_ShannonBounds_ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14(v___x_1582_, v_G_1579_, v___x_1583_, v___x_1584_, v___f_1581_, v___x_1585_);
return v___x_1586_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93(lean_object* v_G_1587_, lean_object* v_R_1588_, lean_object* v_i_1589_){
_start:
{
lean_object* v___f_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; 
lean_inc(v_R_1588_);
v___f_1590_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1590_, 0, v_G_1587_);
lean_closure_set(v___f_1590_, 1, v_R_1588_);
v___x_1591_ = lp_ShannonBounds_ShannonBounds_CertC11_Rb7___at___00ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93_spec__95(v_G_1587_, v_R_1588_);
v___x_1592_ = l_Fin_cases___redArg(v___x_1591_, v___f_1590_, v_i_1589_);
lean_dec(v___x_1591_);
return v___x_1592_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93___boxed(lean_object* v_G_1593_, lean_object* v_R_1594_, lean_object* v_i_1595_){
_start:
{
lean_object* v_res_1596_; 
v_res_1596_ = lp_ShannonBounds_ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93(v_G_1593_, v_R_1594_, v_i_1595_);
lean_dec(v_i_1595_);
return v_res_1596_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91___lam__0(lean_object* v_G_1597_, lean_object* v_R_1598_, lean_object* v___y_1599_, uint8_t v___y_1600_){
_start:
{
lean_object* v___x_4009__overap_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; 
v___x_4009__overap_1601_ = lp_ShannonBounds_ShannonBounds_CertC11_chb8___at___00ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91_spec__93(v_G_1597_, v_R_1598_, v___y_1599_);
v___x_1602_ = lean_box(v___y_1600_);
v___x_1603_ = lean_apply_1(v___x_4009__overap_1601_, v___x_1602_);
return v___x_1603_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91___lam__0___boxed(lean_object* v_G_1604_, lean_object* v_R_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_){
_start:
{
uint8_t v___y_5012__boxed_1608_; lean_object* v_res_1609_; 
v___y_5012__boxed_1608_ = lean_unbox(v___y_1607_);
v_res_1609_ = lp_ShannonBounds_ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91___lam__0(v_G_1604_, v_R_1605_, v___y_1606_, v___y_5012__boxed_1608_);
lean_dec(v___y_1606_);
return v_res_1609_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91(lean_object* v_G_1611_, lean_object* v_R_1612_){
_start:
{
lean_object* v___f_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; 
v___f_1613_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1613_, 0, v_G_1611_);
lean_closure_set(v___f_1613_, 1, v_R_1612_);
v___x_1614_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_Rx27___redArg___closed__0));
v___x_1615_ = lean_unsigned_to_nat(2u);
v___x_1616_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91___closed__0));
v___x_1617_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_CertC11_Rh4___at___00ShannonBounds_CertC11_chh5___at___00ShannonBounds_CertC11_Rh5___at___00ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42_spec__53_spec__65_spec__76___closed__1));
v___x_1618_ = lp_ShannonBounds_ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14(v___x_1614_, v_G_1611_, v___x_1615_, v___x_1616_, v___f_1613_, v___x_1617_);
return v___x_1618_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87(lean_object* v_G_1619_, lean_object* v_R_1620_, lean_object* v_i_1621_){
_start:
{
lean_object* v___f_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; 
lean_inc(v_R_1620_);
v___f_1622_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1622_, 0, v_G_1619_);
lean_closure_set(v___f_1622_, 1, v_R_1620_);
v___x_1623_ = lp_ShannonBounds_ShannonBounds_CertC11_Rb8___at___00ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87_spec__91(v_G_1619_, v_R_1620_);
v___x_1624_ = l_Fin_cases___redArg(v___x_1623_, v___f_1622_, v_i_1621_);
lean_dec(v___x_1623_);
return v___x_1624_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87___boxed(lean_object* v_G_1625_, lean_object* v_R_1626_, lean_object* v_i_1627_){
_start:
{
lean_object* v_res_1628_; 
v_res_1628_ = lp_ShannonBounds_ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87(v_G_1625_, v_R_1626_, v_i_1627_);
lean_dec(v_i_1627_);
return v_res_1628_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83___lam__0(lean_object* v_G_1629_, lean_object* v_R_1630_, lean_object* v___y_1631_, uint8_t v___y_1632_){
_start:
{
lean_object* v___x_3983__overap_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; 
v___x_3983__overap_1633_ = lp_ShannonBounds_ShannonBounds_CertC11_chb9___at___00ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83_spec__87(v_G_1629_, v_R_1630_, v___y_1631_);
v___x_1634_ = lean_box(v___y_1632_);
v___x_1635_ = lean_apply_1(v___x_3983__overap_1633_, v___x_1634_);
return v___x_1635_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83___lam__0___boxed(lean_object* v_G_1636_, lean_object* v_R_1637_, lean_object* v___y_1638_, lean_object* v___y_1639_){
_start:
{
uint8_t v___y_5045__boxed_1640_; lean_object* v_res_1641_; 
v___y_5045__boxed_1640_ = lean_unbox(v___y_1639_);
v_res_1641_ = lp_ShannonBounds_ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83___lam__0(v_G_1636_, v_R_1637_, v___y_1638_, v___y_5045__boxed_1640_);
lean_dec(v___y_1638_);
return v_res_1641_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83(lean_object* v_G_1643_, lean_object* v_R_1644_){
_start:
{
lean_object* v___f_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; 
v___f_1645_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1645_, 0, v_G_1643_);
lean_closure_set(v___f_1645_, 1, v_R_1644_);
v___x_1646_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_Rx27___redArg___closed__0));
v___x_1647_ = lean_unsigned_to_nat(2u);
v___x_1648_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83___closed__0));
v___x_1649_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_CertC11_Rh4___at___00ShannonBounds_CertC11_chh5___at___00ShannonBounds_CertC11_Rh5___at___00ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42_spec__53_spec__65_spec__76___closed__1));
v___x_1650_ = lp_ShannonBounds_ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14(v___x_1646_, v_G_1643_, v___x_1647_, v___x_1648_, v___f_1645_, v___x_1649_);
return v___x_1650_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75(lean_object* v_G_1651_, lean_object* v_R_1652_, lean_object* v_i_1653_){
_start:
{
lean_object* v___f_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; 
lean_inc(v_R_1652_);
v___f_1654_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1654_, 0, v_G_1651_);
lean_closure_set(v___f_1654_, 1, v_R_1652_);
v___x_1655_ = lp_ShannonBounds_ShannonBounds_CertC11_Rb9___at___00ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75_spec__83(v_G_1651_, v_R_1652_);
v___x_1656_ = l_Fin_cases___redArg(v___x_1655_, v___f_1654_, v_i_1653_);
lean_dec(v___x_1655_);
return v___x_1656_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75___boxed(lean_object* v_G_1657_, lean_object* v_R_1658_, lean_object* v_i_1659_){
_start:
{
lean_object* v_res_1660_; 
v_res_1660_ = lp_ShannonBounds_ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75(v_G_1657_, v_R_1658_, v_i_1659_);
lean_dec(v_i_1659_);
return v_res_1660_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66___lam__0(lean_object* v_G_1661_, lean_object* v_R_1662_, lean_object* v___y_1663_, uint8_t v___y_1664_){
_start:
{
lean_object* v___x_3971__overap_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; 
v___x_3971__overap_1665_ = lp_ShannonBounds_ShannonBounds_CertC11_chb10___at___00ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66_spec__75(v_G_1661_, v_R_1662_, v___y_1663_);
v___x_1666_ = lean_box(v___y_1664_);
v___x_1667_ = lean_apply_1(v___x_3971__overap_1665_, v___x_1666_);
return v___x_1667_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66___lam__0___boxed(lean_object* v_G_1668_, lean_object* v_R_1669_, lean_object* v___y_1670_, lean_object* v___y_1671_){
_start:
{
uint8_t v___y_5078__boxed_1672_; lean_object* v_res_1673_; 
v___y_5078__boxed_1672_ = lean_unbox(v___y_1671_);
v_res_1673_ = lp_ShannonBounds_ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66___lam__0(v_G_1668_, v_R_1669_, v___y_1670_, v___y_5078__boxed_1672_);
lean_dec(v___y_1670_);
return v_res_1673_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66(lean_object* v_G_1675_, lean_object* v_R_1676_){
_start:
{
lean_object* v___f_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; 
v___f_1677_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1677_, 0, v_G_1675_);
lean_closure_set(v___f_1677_, 1, v_R_1676_);
v___x_1678_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_Rx27___redArg___closed__0));
v___x_1679_ = lean_unsigned_to_nat(2u);
v___x_1680_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66___closed__0));
v___x_1681_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_CertC11_Rh4___at___00ShannonBounds_CertC11_chh5___at___00ShannonBounds_CertC11_Rh5___at___00ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42_spec__53_spec__65_spec__76___closed__1));
v___x_1682_ = lp_ShannonBounds_ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14(v___x_1678_, v_G_1675_, v___x_1679_, v___x_1680_, v___f_1677_, v___x_1681_);
return v___x_1682_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53(lean_object* v_G_1683_, lean_object* v_R_1684_, lean_object* v_i_1685_){
_start:
{
lean_object* v___f_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; 
lean_inc(v_R_1684_);
v___f_1686_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1686_, 0, v_G_1683_);
lean_closure_set(v___f_1686_, 1, v_R_1684_);
v___x_1687_ = lp_ShannonBounds_ShannonBounds_CertC11_Rb10___at___00ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53_spec__66(v_G_1683_, v_R_1684_);
v___x_1688_ = l_Fin_cases___redArg(v___x_1687_, v___f_1686_, v_i_1685_);
lean_dec(v___x_1687_);
return v___x_1688_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53___boxed(lean_object* v_G_1689_, lean_object* v_R_1690_, lean_object* v_i_1691_){
_start:
{
lean_object* v_res_1692_; 
v_res_1692_ = lp_ShannonBounds_ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53(v_G_1689_, v_R_1690_, v_i_1691_);
lean_dec(v_i_1691_);
return v_res_1692_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41___lam__0(lean_object* v_G_1693_, lean_object* v_R_1694_, lean_object* v___y_1695_, uint8_t v___y_1696_){
_start:
{
lean_object* v___x_3910__overap_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; 
v___x_3910__overap_1697_ = lp_ShannonBounds_ShannonBounds_CertC11_chb11___at___00ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41_spec__53(v_G_1693_, v_R_1694_, v___y_1695_);
v___x_1698_ = lean_box(v___y_1696_);
v___x_1699_ = lean_apply_1(v___x_3910__overap_1697_, v___x_1698_);
return v___x_1699_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41___lam__0___boxed(lean_object* v_G_1700_, lean_object* v_R_1701_, lean_object* v___y_1702_, lean_object* v___y_1703_){
_start:
{
uint8_t v___y_5111__boxed_1704_; lean_object* v_res_1705_; 
v___y_5111__boxed_1704_ = lean_unbox(v___y_1703_);
v_res_1705_ = lp_ShannonBounds_ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41___lam__0(v_G_1700_, v_R_1701_, v___y_1702_, v___y_5111__boxed_1704_);
lean_dec(v___y_1702_);
return v_res_1705_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41(lean_object* v_G_1707_, lean_object* v_R_1708_){
_start:
{
lean_object* v___f_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; 
v___f_1709_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1709_, 0, v_G_1707_);
lean_closure_set(v___f_1709_, 1, v_R_1708_);
v___x_1710_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_Rx27___redArg___closed__0));
v___x_1711_ = lean_unsigned_to_nat(2u);
v___x_1712_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41___closed__0));
v___x_1713_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_CertC11_Rh4___at___00ShannonBounds_CertC11_chh5___at___00ShannonBounds_CertC11_Rh5___at___00ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42_spec__53_spec__65_spec__76___closed__1));
v___x_1714_ = lp_ShannonBounds_ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14(v___x_1710_, v_G_1707_, v___x_1711_, v___x_1712_, v___f_1709_, v___x_1713_);
return v___x_1714_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32(lean_object* v_G_1715_, lean_object* v_R_1716_, lean_object* v_i_1717_){
_start:
{
lean_object* v___f_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; 
lean_inc(v_R_1716_);
v___f_1718_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1718_, 0, v_G_1715_);
lean_closure_set(v___f_1718_, 1, v_R_1716_);
v___x_1719_ = lp_ShannonBounds_ShannonBounds_CertC11_Rb11___at___00ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32_spec__41(v_G_1715_, v_R_1716_);
v___x_1720_ = l_Fin_cases___redArg(v___x_1719_, v___f_1718_, v_i_1717_);
lean_dec(v___x_1719_);
return v___x_1720_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32___boxed(lean_object* v_G_1721_, lean_object* v_R_1722_, lean_object* v_i_1723_){
_start:
{
lean_object* v_res_1724_; 
v_res_1724_ = lp_ShannonBounds_ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32(v_G_1721_, v_R_1722_, v_i_1723_);
lean_dec(v_i_1723_);
return v_res_1724_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22___lam__0(lean_object* v_G_1725_, lean_object* v_R_1726_, lean_object* v___y_1727_, uint8_t v___y_1728_){
_start:
{
lean_object* v___x_3837__overap_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; 
v___x_3837__overap_1729_ = lp_ShannonBounds_ShannonBounds_CertC11_chb12___at___00ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22_spec__32(v_G_1725_, v_R_1726_, v___y_1727_);
v___x_1730_ = lean_box(v___y_1728_);
v___x_1731_ = lean_apply_1(v___x_3837__overap_1729_, v___x_1730_);
return v___x_1731_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22___lam__0___boxed(lean_object* v_G_1732_, lean_object* v_R_1733_, lean_object* v___y_1734_, lean_object* v___y_1735_){
_start:
{
uint8_t v___y_5144__boxed_1736_; lean_object* v_res_1737_; 
v___y_5144__boxed_1736_ = lean_unbox(v___y_1735_);
v_res_1737_ = lp_ShannonBounds_ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22___lam__0(v_G_1732_, v_R_1733_, v___y_1734_, v___y_5144__boxed_1736_);
lean_dec(v___y_1734_);
return v_res_1737_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22(lean_object* v_G_1739_, lean_object* v_R_1740_){
_start:
{
lean_object* v___f_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; 
v___f_1741_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1741_, 0, v_G_1739_);
lean_closure_set(v___f_1741_, 1, v_R_1740_);
v___x_1742_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_Rx27___redArg___closed__0));
v___x_1743_ = lean_unsigned_to_nat(2u);
v___x_1744_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22___closed__0));
v___x_1745_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_CertC11_Rh4___at___00ShannonBounds_CertC11_chh5___at___00ShannonBounds_CertC11_Rh5___at___00ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42_spec__53_spec__65_spec__76___closed__1));
v___x_1746_ = lp_ShannonBounds_ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14(v___x_1742_, v_G_1739_, v___x_1743_, v___x_1744_, v___f_1741_, v___x_1745_);
return v___x_1746_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16___lam__1(lean_object* v_G_1747_, lean_object* v_R_1748_, lean_object* v___f_1749_, lean_object* v_i_1750_, uint8_t v___y_1751_){
_start:
{
lean_object* v___x_1752_; lean_object* v___x_3821__overap_1753_; lean_object* v___x_1754_; lean_object* v___x_1755_; 
v___x_1752_ = lp_ShannonBounds_ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22(v_G_1747_, v_R_1748_);
v___x_3821__overap_1753_ = l_Fin_cases___redArg(v___x_1752_, v___f_1749_, v_i_1750_);
lean_dec(v___x_1752_);
v___x_1754_ = lean_box(v___y_1751_);
v___x_1755_ = lean_apply_1(v___x_3821__overap_1753_, v___x_1754_);
return v___x_1755_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16___lam__1___boxed(lean_object* v_G_1756_, lean_object* v_R_1757_, lean_object* v___f_1758_, lean_object* v_i_1759_, lean_object* v___y_1760_){
_start:
{
uint8_t v___y_5171__boxed_1761_; lean_object* v_res_1762_; 
v___y_5171__boxed_1761_ = lean_unbox(v___y_1760_);
v_res_1762_ = lp_ShannonBounds_ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16___lam__1(v_G_1756_, v_R_1757_, v___f_1758_, v_i_1759_, v___y_5171__boxed_1761_);
lean_dec(v_i_1759_);
return v_res_1762_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16___lam__0(lean_object* v_G_1763_, lean_object* v_R_1764_, lean_object* v_x_1765_, uint8_t v___y_1766_){
_start:
{
lean_object* v___x_3817__overap_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; 
v___x_3817__overap_1767_ = lp_ShannonBounds_ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28(v_G_1763_, v_R_1764_);
v___x_1768_ = lean_box(v___y_1766_);
v___x_1769_ = lean_apply_1(v___x_3817__overap_1767_, v___x_1768_);
return v___x_1769_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16___lam__0___boxed(lean_object* v_G_1770_, lean_object* v_R_1771_, lean_object* v_x_1772_, lean_object* v___y_1773_){
_start:
{
uint8_t v___y_5183__boxed_1774_; lean_object* v_res_1775_; 
v___y_5183__boxed_1774_ = lean_unbox(v___y_1773_);
v_res_1775_ = lp_ShannonBounds_ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16___lam__0(v_G_1770_, v_R_1771_, v_x_1772_, v___y_5183__boxed_1774_);
lean_dec(v_x_1772_);
return v_res_1775_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16(lean_object* v_G_1776_, lean_object* v_R_1777_, lean_object* v_i_1778_){
_start:
{
lean_object* v___f_1779_; lean_object* v___f_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; 
lean_inc_n(v_R_1777_, 2);
v___f_1779_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1779_, 0, v_G_1776_);
lean_closure_set(v___f_1779_, 1, v_R_1777_);
v___f_1780_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16___lam__1___boxed), 5, 3);
lean_closure_set(v___f_1780_, 0, v_G_1776_);
lean_closure_set(v___f_1780_, 1, v_R_1777_);
lean_closure_set(v___f_1780_, 2, v___f_1779_);
v___x_1781_ = lp_ShannonBounds_ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29(v_G_1776_, v_R_1777_);
v___x_1782_ = l_Fin_cases___redArg(v___x_1781_, v___f_1780_, v_i_1778_);
lean_dec(v___x_1781_);
return v___x_1782_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16___boxed(lean_object* v_G_1783_, lean_object* v_R_1784_, lean_object* v_i_1785_){
_start:
{
lean_object* v_res_1786_; 
v_res_1786_ = lp_ShannonBounds_ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16(v_G_1783_, v_R_1784_, v_i_1785_);
lean_dec(v_i_1785_);
return v_res_1786_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9___lam__0(lean_object* v_G_1787_, lean_object* v_R_1788_, lean_object* v___y_1789_, uint8_t v___y_1790_){
_start:
{
lean_object* v___x_3805__overap_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; 
v___x_3805__overap_1791_ = lp_ShannonBounds_ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16(v_G_1787_, v_R_1788_, v___y_1789_);
v___x_1792_ = lean_box(v___y_1790_);
v___x_1793_ = lean_apply_1(v___x_3805__overap_1791_, v___x_1792_);
return v___x_1793_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9___lam__0___boxed(lean_object* v_G_1794_, lean_object* v_R_1795_, lean_object* v___y_1796_, lean_object* v___y_1797_){
_start:
{
uint8_t v___y_5201__boxed_1798_; lean_object* v_res_1799_; 
v___y_5201__boxed_1798_ = lean_unbox(v___y_1797_);
v_res_1799_ = lp_ShannonBounds_ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9___lam__0(v_G_1794_, v_R_1795_, v___y_1796_, v___y_5201__boxed_1798_);
lean_dec(v___y_1796_);
return v_res_1799_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9(lean_object* v_G_1801_, lean_object* v_R_1802_){
_start:
{
lean_object* v___f_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; 
v___f_1803_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1803_, 0, v_G_1801_);
lean_closure_set(v___f_1803_, 1, v_R_1802_);
v___x_1804_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_Rx27___redArg___closed__0));
v___x_1805_ = lean_unsigned_to_nat(3u);
v___x_1806_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9___closed__0));
v___x_1807_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_CertC11_Rg3___at___00ShannonBounds_CertC11_chp11___at___00ShannonBounds_CertC11_Rp11___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__28_spec__40_spec__50___closed__1));
v___x_1808_ = lp_ShannonBounds_ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14(v___x_1804_, v_G_1801_, v___x_1805_, v___x_1806_, v___f_1803_, v___x_1807_);
return v___x_1808_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3___lam__1(lean_object* v_G_1809_, lean_object* v_R_1810_, lean_object* v___f_1811_, lean_object* v_i_1812_, uint8_t v___y_1813_){
_start:
{
lean_object* v___x_1814_; lean_object* v___x_3787__overap_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; 
v___x_1814_ = lp_ShannonBounds_ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9(v_G_1809_, v_R_1810_);
v___x_3787__overap_1815_ = l_Fin_cases___redArg(v___x_1814_, v___f_1811_, v_i_1812_);
lean_dec(v___x_1814_);
v___x_1816_ = lean_box(v___y_1813_);
v___x_1817_ = lean_apply_1(v___x_3787__overap_1815_, v___x_1816_);
return v___x_1817_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3___lam__1___boxed(lean_object* v_G_1818_, lean_object* v_R_1819_, lean_object* v___f_1820_, lean_object* v_i_1821_, lean_object* v___y_1822_){
_start:
{
uint8_t v___y_5228__boxed_1823_; lean_object* v_res_1824_; 
v___y_5228__boxed_1823_ = lean_unbox(v___y_1822_);
v_res_1824_ = lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3___lam__1(v_G_1818_, v_R_1819_, v___f_1820_, v_i_1821_, v___y_5228__boxed_1823_);
lean_dec(v_i_1821_);
return v_res_1824_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13(lean_object* v_G_1825_, lean_object* v_R_1826_, lean_object* v_i_1827_){
_start:
{
lean_object* v___f_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; 
lean_inc(v_R_1826_);
v___f_1828_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1828_, 0, v_G_1825_);
lean_closure_set(v___f_1828_, 1, v_R_1826_);
v___x_1829_ = lp_ShannonBounds_ShannonBounds_CertC11_Rb12___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__22(v_G_1825_, v_R_1826_);
v___x_1830_ = l_Fin_cases___redArg(v___x_1829_, v___f_1828_, v_i_1827_);
lean_dec(v___x_1829_);
return v___x_1830_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13___boxed(lean_object* v_G_1831_, lean_object* v_R_1832_, lean_object* v_i_1833_){
_start:
{
lean_object* v_res_1834_; 
v_res_1834_ = lp_ShannonBounds_ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13(v_G_1831_, v_R_1832_, v_i_1833_);
lean_dec(v_i_1833_);
return v_res_1834_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8___lam__0(lean_object* v_G_1835_, lean_object* v_R_1836_, lean_object* v___y_1837_, uint8_t v___y_1838_){
_start:
{
lean_object* v___x_3802__overap_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; 
v___x_3802__overap_1839_ = lp_ShannonBounds_ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13(v_G_1835_, v_R_1836_, v___y_1837_);
v___x_1840_ = lean_box(v___y_1838_);
v___x_1841_ = lean_apply_1(v___x_3802__overap_1839_, v___x_1840_);
return v___x_1841_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8___lam__0___boxed(lean_object* v_G_1842_, lean_object* v_R_1843_, lean_object* v___y_1844_, lean_object* v___y_1845_){
_start:
{
uint8_t v___y_5246__boxed_1846_; lean_object* v_res_1847_; 
v___y_5246__boxed_1846_ = lean_unbox(v___y_1845_);
v_res_1847_ = lp_ShannonBounds_ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8___lam__0(v_G_1842_, v_R_1843_, v___y_1844_, v___y_5246__boxed_1846_);
lean_dec(v___y_1844_);
return v_res_1847_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8(lean_object* v_G_1849_, lean_object* v_R_1850_){
_start:
{
lean_object* v___f_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; 
v___f_1851_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1851_, 0, v_G_1849_);
lean_closure_set(v___f_1851_, 1, v_R_1850_);
v___x_1852_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_Rx27___redArg___closed__0));
v___x_1853_ = lean_unsigned_to_nat(2u);
v___x_1854_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8___closed__0));
v___x_1855_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_CertC11_Rh4___at___00ShannonBounds_CertC11_chh5___at___00ShannonBounds_CertC11_Rh5___at___00ShannonBounds_CertC11_chh6___at___00ShannonBounds_CertC11_Rh6___at___00ShannonBounds_CertC11_chx29___at___00ShannonBounds_CertC11_Rx29___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__9_spec__16_spec__29_spec__42_spec__53_spec__65_spec__76___closed__1));
v___x_1856_ = lp_ShannonBounds_ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14(v___x_1852_, v_G_1849_, v___x_1853_, v___x_1854_, v___f_1851_, v___x_1855_);
return v___x_1856_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3___lam__0(lean_object* v_G_1857_, lean_object* v_R_1858_, lean_object* v_x_1859_, uint8_t v___y_1860_){
_start:
{
lean_object* v___x_3783__overap_1861_; lean_object* v___x_1862_; lean_object* v___x_1863_; 
v___x_3783__overap_1861_ = lp_ShannonBounds_ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8(v_G_1857_, v_R_1858_);
v___x_1862_ = lean_box(v___y_1860_);
v___x_1863_ = lean_apply_1(v___x_3783__overap_1861_, v___x_1862_);
return v___x_1863_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3___lam__0___boxed(lean_object* v_G_1864_, lean_object* v_R_1865_, lean_object* v_x_1866_, lean_object* v___y_1867_){
_start:
{
uint8_t v___y_5273__boxed_1868_; lean_object* v_res_1869_; 
v___y_5273__boxed_1868_ = lean_unbox(v___y_1867_);
v_res_1869_ = lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3___lam__0(v_G_1864_, v_R_1865_, v_x_1866_, v___y_5273__boxed_1868_);
lean_dec(v_x_1866_);
return v_res_1869_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3(lean_object* v_G_1870_, lean_object* v_R_1871_, lean_object* v_i_1872_){
_start:
{
lean_object* v___f_1873_; lean_object* v___f_1874_; lean_object* v___x_1875_; lean_object* v___x_1876_; 
lean_inc_n(v_R_1871_, 2);
v___f_1873_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1873_, 0, v_G_1870_);
lean_closure_set(v___f_1873_, 1, v_R_1871_);
v___f_1874_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3___lam__1___boxed), 5, 3);
lean_closure_set(v___f_1874_, 0, v_G_1870_);
lean_closure_set(v___f_1874_, 1, v_R_1871_);
lean_closure_set(v___f_1874_, 2, v___f_1873_);
v___x_1875_ = lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_Rx27___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__10(v_G_1870_, v_R_1871_);
v___x_1876_ = l_Fin_cases___redArg(v___x_1875_, v___f_1874_, v_i_1872_);
lean_dec(v___x_1875_);
return v___x_1876_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3___boxed(lean_object* v_G_1877_, lean_object* v_R_1878_, lean_object* v_i_1879_){
_start:
{
lean_object* v_res_1880_; 
v_res_1880_ = lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3(v_G_1877_, v_R_1878_, v_i_1879_);
lean_dec(v_i_1879_);
return v_res_1880_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1___lam__0(lean_object* v_G_1881_, lean_object* v_R_1882_, lean_object* v___y_1883_, uint8_t v___y_1884_){
_start:
{
lean_object* v___x_3768__overap_1885_; lean_object* v___x_1886_; lean_object* v___x_1887_; 
v___x_3768__overap_1885_ = lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3(v_G_1881_, v_R_1882_, v___y_1883_);
v___x_1886_ = lean_box(v___y_1884_);
v___x_1887_ = lean_apply_1(v___x_3768__overap_1885_, v___x_1886_);
return v___x_1887_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1___lam__0___boxed(lean_object* v_G_1888_, lean_object* v_R_1889_, lean_object* v___y_1890_, lean_object* v___y_1891_){
_start:
{
uint8_t v___y_5291__boxed_1892_; lean_object* v_res_1893_; 
v___y_5291__boxed_1892_ = lean_unbox(v___y_1891_);
v_res_1893_ = lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1___lam__0(v_G_1888_, v_R_1889_, v___y_1890_, v___y_5291__boxed_1892_);
lean_dec(v___y_1890_);
return v_res_1893_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1___lam__1(lean_object* v___x_1894_, lean_object* v___y_1895_, lean_object* v___y_1896_){
_start:
{
lean_object* v___x_3772__overap_1897_; lean_object* v___x_1898_; 
v___x_3772__overap_1897_ = lp_mathlib_Equiv_toEmbedding___redArg___lam__0(v___x_1894_, v___y_1895_);
v___x_1898_ = lean_apply_1(v___x_3772__overap_1897_, v___y_1896_);
return v___x_1898_;
}
}
LEAN_EXPORT uint8_t lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__5_spec__14_spec__24_spec__39_spec__53_spec__64_spec__74___lam__1(lean_object* v___f_1899_, lean_object* v___x_1900_, uint8_t v___x_1901_, lean_object* v___y_1902_){
_start:
{
lean_object* v___x_1903_; uint8_t v___x_1904_; 
v___x_1903_ = lean_obj_once(&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___redArg___lam__1___closed__0, &lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___redArg___lam__1___closed__0_once, _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___redArg___lam__1___closed__0);
v___x_1904_ = lp_mathlib_Fintype_decidablePiFintype___redArg(v___f_1899_, v___x_1903_, v___x_1900_, v___y_1902_);
if (v___x_1904_ == 0)
{
uint8_t v___x_1905_; 
v___x_1905_ = 1;
return v___x_1905_;
}
else
{
return v___x_1901_;
}
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__5_spec__14_spec__24_spec__39_spec__53_spec__64_spec__74___lam__1___boxed(lean_object* v___f_1906_, lean_object* v___x_1907_, lean_object* v___x_1908_, lean_object* v___y_1909_){
_start:
{
uint8_t v___x_5312__boxed_1910_; uint8_t v_res_1911_; lean_object* v_r_1912_; 
v___x_5312__boxed_1910_ = lean_unbox(v___x_1908_);
v_res_1911_ = lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__5_spec__14_spec__24_spec__39_spec__53_spec__64_spec__74___lam__1(v___f_1906_, v___x_1907_, v___x_5312__boxed_1910_, v___y_1909_);
v_r_1912_ = lean_box(v_res_1911_);
return v_r_1912_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__5_spec__14_spec__24_spec__39_spec__53_spec__64_spec__74(lean_object* v_as_1913_, size_t v_i_1914_, size_t v_stop_1915_, lean_object* v_b_1916_){
_start:
{
uint8_t v___x_1917_; 
v___x_1917_ = lean_usize_dec_eq(v_i_1914_, v_stop_1915_);
if (v___x_1917_ == 0)
{
lean_object* v___f_1918_; size_t v___x_1919_; size_t v___x_1920_; lean_object* v___x_1921_; lean_object* v___x_1922_; lean_object* v___f_1923_; uint8_t v___x_1924_; 
v___f_1918_ = ((lean_object*)(lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25_spec__37_spec__46_spec__57_spec__69_spec__78_spec__86_spec__90___closed__0));
v___x_1919_ = ((size_t)1ULL);
v___x_1920_ = lean_usize_sub(v_i_1914_, v___x_1919_);
v___x_1921_ = lean_array_uget_borrowed(v_as_1913_, v___x_1920_);
v___x_1922_ = lean_box(v___x_1917_);
lean_inc(v___x_1921_);
v___f_1923_ = lean_alloc_closure((void*)(lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__5_spec__14_spec__24_spec__39_spec__53_spec__64_spec__74___lam__1___boxed), 4, 3);
lean_closure_set(v___f_1923_, 0, v___f_1918_);
lean_closure_set(v___f_1923_, 1, v___x_1921_);
lean_closure_set(v___f_1923_, 2, v___x_1922_);
lean_inc(v_b_1916_);
v___x_1924_ = l_List_decidableBAll___redArg(v___f_1923_, v_b_1916_);
if (v___x_1924_ == 0)
{
v_i_1914_ = v___x_1920_;
goto _start;
}
else
{
lean_object* v___x_1926_; 
lean_inc(v___x_1921_);
v___x_1926_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1926_, 0, v___x_1921_);
lean_ctor_set(v___x_1926_, 1, v_b_1916_);
v_i_1914_ = v___x_1920_;
v_b_1916_ = v___x_1926_;
goto _start;
}
}
else
{
return v_b_1916_;
}
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__5_spec__14_spec__24_spec__39_spec__53_spec__64_spec__74___boxed(lean_object* v_as_1928_, lean_object* v_i_1929_, lean_object* v_stop_1930_, lean_object* v_b_1931_){
_start:
{
size_t v_i_boxed_1932_; size_t v_stop_boxed_1933_; lean_object* v_res_1934_; 
v_i_boxed_1932_ = lean_unbox_usize(v_i_1929_);
lean_dec(v_i_1929_);
v_stop_boxed_1933_ = lean_unbox_usize(v_stop_1930_);
lean_dec(v_stop_1930_);
v_res_1934_ = lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__5_spec__14_spec__24_spec__39_spec__53_spec__64_spec__74(v_as_1928_, v_i_boxed_1932_, v_stop_boxed_1933_, v_b_1931_);
lean_dec_ref(v_as_1928_);
return v_res_1934_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__5_spec__14_spec__24_spec__39_spec__53_spec__64(lean_object* v_init_1935_, lean_object* v_l_1936_){
_start:
{
lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; uint8_t v___x_1940_; 
v___x_1937_ = lean_array_mk(v_l_1936_);
v___x_1938_ = lean_array_get_size(v___x_1937_);
v___x_1939_ = lean_unsigned_to_nat(0u);
v___x_1940_ = lean_nat_dec_lt(v___x_1939_, v___x_1938_);
if (v___x_1940_ == 0)
{
lean_dec_ref(v___x_1937_);
return v_init_1935_;
}
else
{
size_t v___x_1941_; size_t v___x_1942_; lean_object* v___x_1943_; 
v___x_1941_ = lean_usize_of_nat(v___x_1938_);
v___x_1942_ = ((size_t)0ULL);
v___x_1943_ = lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__5_spec__14_spec__24_spec__39_spec__53_spec__64_spec__74(v___x_1937_, v___x_1941_, v___x_1942_, v_init_1935_);
lean_dec_ref(v___x_1937_);
return v___x_1943_;
}
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__5_spec__14_spec__24_spec__39_spec__53___redArg(lean_object* v_l_1944_){
_start:
{
lean_object* v___x_1945_; lean_object* v___x_1946_; 
v___x_1945_ = lean_box(0);
v___x_1946_ = lp_ShannonBounds_List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__5_spec__14_spec__24_spec__39_spec__53_spec__64(v___x_1945_, v_l_1944_);
return v___x_1946_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__5_spec__14_spec__24(lean_object* v_s_1947_){
_start:
{
lean_object* v___x_1948_; 
v___x_1948_ = lp_ShannonBounds_List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__5_spec__14_spec__24_spec__39_spec__53___redArg(v_s_1947_);
return v___x_1948_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__5_spec__14(lean_object* v_s_1949_){
_start:
{
lean_object* v___x_1950_; 
v___x_1950_ = lp_ShannonBounds_List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__5_spec__14_spec__24_spec__39_spec__53___redArg(v_s_1949_);
return v___x_1950_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__5___redArg(lean_object* v_f_1951_, lean_object* v_s_1952_){
_start:
{
lean_object* v___x_1953_; lean_object* v___x_1954_; 
v___x_1953_ = lp_mathlib_Multiset_map___redArg(v_f_1951_, v_s_1952_);
v___x_1954_ = lp_ShannonBounds_List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__5_spec__14_spec__24_spec__39_spec__53___redArg(v___x_1953_);
return v___x_1954_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4___lam__0(lean_object* v_r_1955_, lean_object* v_R_1956_, lean_object* v___y_1957_){
_start:
{
lean_object* v___x_1958_; 
v___x_1958_ = lp_ShannonBounds_ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12___redArg(v_r_1955_, v_R_1956_, v___y_1957_);
return v___x_1958_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4(lean_object* v_sep_1959_, lean_object* v_G_1960_, lean_object* v_r_1961_, lean_object* v_e_1962_, lean_object* v_R_1963_, lean_object* v_K_1964_){
_start:
{
lean_object* v___f_1965_; lean_object* v___f_1966_; lean_object* v___f_1967_; lean_object* v___x_1968_; lean_object* v___f_1969_; lean_object* v___x_1970_; 
lean_inc(v_r_1961_);
v___f_1965_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4___lam__0), 3, 2);
lean_closure_set(v___f_1965_, 0, v_r_1961_);
lean_closure_set(v___f_1965_, 1, v_R_1963_);
v___f_1966_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_multiSubstSet___at___00ShannonBounds_Realisation_multiSubstFamily___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__24_spec__35___closed__0));
v___f_1967_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4___lam__2___boxed), 5, 2);
lean_closure_set(v___f_1967_, 0, v_e_1962_);
lean_closure_set(v___f_1967_, 1, v___f_1966_);
v___x_1968_ = l_List_finRange(v_r_1961_);
v___f_1969_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4___lam__3___boxed), 4, 2);
lean_closure_set(v___f_1969_, 0, v___f_1967_);
lean_closure_set(v___f_1969_, 1, v___x_1968_);
v___x_1970_ = lp_mathlib_Finset_biUnion___redArg(v___f_1969_, v_K_1964_, v___f_1965_);
return v___x_1970_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4___boxed(lean_object* v_sep_1971_, lean_object* v_G_1972_, lean_object* v_r_1973_, lean_object* v_e_1974_, lean_object* v_R_1975_, lean_object* v_K_1976_){
_start:
{
lean_object* v_res_1977_; 
v_res_1977_ = lp_ShannonBounds_ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4(v_sep_1971_, v_G_1972_, v_r_1973_, v_e_1974_, v_R_1975_, v_K_1976_);
lean_dec_ref(v_sep_1971_);
return v_res_1977_;
}
}
static lean_object* _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1___closed__0(void){
_start:
{
lean_object* v___x_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; 
v___x_1978_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___redArg___closed__0));
v___x_1979_ = lean_unsigned_to_nat(3u);
v___x_1980_ = lp_ShannonBounds_ShannonBounds_sumEquiv___redArg(v___x_1979_, v___x_1978_);
return v___x_1980_;
}
}
static lean_object* _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1___closed__1(void){
_start:
{
lean_object* v___x_1981_; lean_object* v___x_1982_; 
v___x_1981_ = lean_obj_once(&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1___closed__0, &lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1___closed__0_once, _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1___closed__0);
v___x_1982_ = lp_mathlib_Equiv_symm___redArg(v___x_1981_);
return v___x_1982_;
}
}
static lean_object* _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1___closed__2(void){
_start:
{
lean_object* v___x_1983_; lean_object* v___f_1984_; 
v___x_1983_ = lean_obj_once(&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1___closed__1, &lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1___closed__1_once, _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1___closed__1);
v___f_1984_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1___lam__1), 3, 1);
lean_closure_set(v___f_1984_, 0, v___x_1983_);
return v___f_1984_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1(lean_object* v_G_1985_, lean_object* v_R_1986_){
_start:
{
lean_object* v___f_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___f_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; 
v___f_1987_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1987_, 0, v_G_1985_);
lean_closure_set(v___f_1987_, 1, v_R_1986_);
v___x_1988_ = lean_unsigned_to_nat(3u);
v___x_1989_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___redArg___closed__0));
v___f_1990_ = lean_obj_once(&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1___closed__2, &lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1___closed__2_once, _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1___closed__2);
v___x_1991_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_Rx27___redArg___closed__0));
v___x_1992_ = lp_ShannonBounds_ShannonBounds_TerminalCodes_C3a;
v___x_1993_ = lp_ShannonBounds_ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4(v___x_1991_, v_G_1985_, v___x_1988_, v___x_1989_, v___f_1987_, v___x_1992_);
v___x_1994_ = lp_ShannonBounds_Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__5___redArg(v___f_1990_, v___x_1993_);
return v___x_1994_;
}
}
static lean_object* _init_lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__2_spec__7_spec__17_spec__27_spec__42_spec__56_spec__67___lam__1___closed__0(void){
_start:
{
lean_object* v___x_1995_; lean_object* v___x_1996_; 
v___x_1995_ = lean_unsigned_to_nat(207u);
v___x_1996_ = l_List_finRange(v___x_1995_);
return v___x_1996_;
}
}
LEAN_EXPORT uint8_t lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__2_spec__7_spec__17_spec__27_spec__42_spec__56_spec__67___lam__1(lean_object* v___f_1997_, lean_object* v___x_1998_, uint8_t v___x_1999_, lean_object* v___y_2000_){
_start:
{
lean_object* v___x_2001_; uint8_t v___x_2002_; 
v___x_2001_ = lean_obj_once(&lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__2_spec__7_spec__17_spec__27_spec__42_spec__56_spec__67___lam__1___closed__0, &lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__2_spec__7_spec__17_spec__27_spec__42_spec__56_spec__67___lam__1___closed__0_once, _init_lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__2_spec__7_spec__17_spec__27_spec__42_spec__56_spec__67___lam__1___closed__0);
v___x_2002_ = lp_mathlib_Fintype_decidablePiFintype___redArg(v___f_1997_, v___x_2001_, v___x_1998_, v___y_2000_);
if (v___x_2002_ == 0)
{
uint8_t v___x_2003_; 
v___x_2003_ = 1;
return v___x_2003_;
}
else
{
return v___x_1999_;
}
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__2_spec__7_spec__17_spec__27_spec__42_spec__56_spec__67___lam__1___boxed(lean_object* v___f_2004_, lean_object* v___x_2005_, lean_object* v___x_2006_, lean_object* v___y_2007_){
_start:
{
uint8_t v___x_5442__boxed_2008_; uint8_t v_res_2009_; lean_object* v_r_2010_; 
v___x_5442__boxed_2008_ = lean_unbox(v___x_2006_);
v_res_2009_ = lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__2_spec__7_spec__17_spec__27_spec__42_spec__56_spec__67___lam__1(v___f_2004_, v___x_2005_, v___x_5442__boxed_2008_, v___y_2007_);
v_r_2010_ = lean_box(v_res_2009_);
return v_r_2010_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__2_spec__7_spec__17_spec__27_spec__42_spec__56_spec__67(lean_object* v_as_2011_, size_t v_i_2012_, size_t v_stop_2013_, lean_object* v_b_2014_){
_start:
{
uint8_t v___x_2015_; 
v___x_2015_ = lean_usize_dec_eq(v_i_2012_, v_stop_2013_);
if (v___x_2015_ == 0)
{
lean_object* v___f_2016_; size_t v___x_2017_; size_t v___x_2018_; lean_object* v___x_2019_; lean_object* v___x_2020_; lean_object* v___f_2021_; uint8_t v___x_2022_; 
v___f_2016_ = ((lean_object*)(lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25_spec__37_spec__46_spec__57_spec__69_spec__78_spec__86_spec__90___closed__0));
v___x_2017_ = ((size_t)1ULL);
v___x_2018_ = lean_usize_sub(v_i_2012_, v___x_2017_);
v___x_2019_ = lean_array_uget_borrowed(v_as_2011_, v___x_2018_);
v___x_2020_ = lean_box(v___x_2015_);
lean_inc(v___x_2019_);
v___f_2021_ = lean_alloc_closure((void*)(lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__2_spec__7_spec__17_spec__27_spec__42_spec__56_spec__67___lam__1___boxed), 4, 3);
lean_closure_set(v___f_2021_, 0, v___f_2016_);
lean_closure_set(v___f_2021_, 1, v___x_2019_);
lean_closure_set(v___f_2021_, 2, v___x_2020_);
lean_inc(v_b_2014_);
v___x_2022_ = l_List_decidableBAll___redArg(v___f_2021_, v_b_2014_);
if (v___x_2022_ == 0)
{
v_i_2012_ = v___x_2018_;
goto _start;
}
else
{
lean_object* v___x_2024_; 
lean_inc(v___x_2019_);
v___x_2024_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2024_, 0, v___x_2019_);
lean_ctor_set(v___x_2024_, 1, v_b_2014_);
v_i_2012_ = v___x_2018_;
v_b_2014_ = v___x_2024_;
goto _start;
}
}
else
{
return v_b_2014_;
}
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__2_spec__7_spec__17_spec__27_spec__42_spec__56_spec__67___boxed(lean_object* v_as_2026_, lean_object* v_i_2027_, lean_object* v_stop_2028_, lean_object* v_b_2029_){
_start:
{
size_t v_i_boxed_2030_; size_t v_stop_boxed_2031_; lean_object* v_res_2032_; 
v_i_boxed_2030_ = lean_unbox_usize(v_i_2027_);
lean_dec(v_i_2027_);
v_stop_boxed_2031_ = lean_unbox_usize(v_stop_2028_);
lean_dec(v_stop_2028_);
v_res_2032_ = lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__2_spec__7_spec__17_spec__27_spec__42_spec__56_spec__67(v_as_2026_, v_i_boxed_2030_, v_stop_boxed_2031_, v_b_2029_);
lean_dec_ref(v_as_2026_);
return v_res_2032_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__2_spec__7_spec__17_spec__27_spec__42_spec__56(lean_object* v_init_2033_, lean_object* v_l_2034_){
_start:
{
lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; uint8_t v___x_2038_; 
v___x_2035_ = lean_array_mk(v_l_2034_);
v___x_2036_ = lean_array_get_size(v___x_2035_);
v___x_2037_ = lean_unsigned_to_nat(0u);
v___x_2038_ = lean_nat_dec_lt(v___x_2037_, v___x_2036_);
if (v___x_2038_ == 0)
{
lean_dec_ref(v___x_2035_);
return v_init_2033_;
}
else
{
size_t v___x_2039_; size_t v___x_2040_; lean_object* v___x_2041_; 
v___x_2039_ = lean_usize_of_nat(v___x_2036_);
v___x_2040_ = ((size_t)0ULL);
v___x_2041_ = lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__2_spec__7_spec__17_spec__27_spec__42_spec__56_spec__67(v___x_2035_, v___x_2039_, v___x_2040_, v_init_2033_);
lean_dec_ref(v___x_2035_);
return v___x_2041_;
}
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__2_spec__7_spec__17_spec__27_spec__42___redArg(lean_object* v_l_2042_){
_start:
{
lean_object* v___x_2043_; lean_object* v___x_2044_; 
v___x_2043_ = lean_box(0);
v___x_2044_ = lp_ShannonBounds_List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__2_spec__7_spec__17_spec__27_spec__42_spec__56(v___x_2043_, v_l_2042_);
return v___x_2044_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__2_spec__7_spec__17(lean_object* v_s_2045_){
_start:
{
lean_object* v___x_2046_; 
v___x_2046_ = lp_ShannonBounds_List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__2_spec__7_spec__17_spec__27_spec__42___redArg(v_s_2045_);
return v___x_2046_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__2_spec__7(lean_object* v_s_2047_){
_start:
{
lean_object* v___x_2048_; 
v___x_2048_ = lp_ShannonBounds_List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__2_spec__7_spec__17_spec__27_spec__42___redArg(v_s_2047_);
return v___x_2048_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__2___redArg(lean_object* v_f_2049_, lean_object* v_s_2050_){
_start:
{
lean_object* v___x_2051_; lean_object* v___x_2052_; 
v___x_2051_ = lp_mathlib_Multiset_map___redArg(v_f_2049_, v_s_2050_);
v___x_2052_ = lp_ShannonBounds_List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__2_spec__7_spec__17_spec__27_spec__42___redArg(v___x_2051_);
return v___x_2052_;
}
}
LEAN_EXPORT uint8_t lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__4_spec__10_spec__18_spec__26_spec__34_spec__47_spec__60___lam__0(lean_object* v___x_2053_, uint8_t v___x_2054_, lean_object* v___y_2055_){
_start:
{
uint8_t v___x_2056_; 
v___x_2056_ = lean_nat_dec_eq(v___x_2053_, v___y_2055_);
if (v___x_2056_ == 0)
{
uint8_t v___x_2057_; 
v___x_2057_ = 1;
return v___x_2057_;
}
else
{
return v___x_2054_;
}
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__4_spec__10_spec__18_spec__26_spec__34_spec__47_spec__60___lam__0___boxed(lean_object* v___x_2058_, lean_object* v___x_2059_, lean_object* v___y_2060_){
_start:
{
uint8_t v___x_5512__boxed_2061_; uint8_t v_res_2062_; lean_object* v_r_2063_; 
v___x_5512__boxed_2061_ = lean_unbox(v___x_2059_);
v_res_2062_ = lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__4_spec__10_spec__18_spec__26_spec__34_spec__47_spec__60___lam__0(v___x_2058_, v___x_5512__boxed_2061_, v___y_2060_);
lean_dec(v___y_2060_);
lean_dec(v___x_2058_);
v_r_2063_ = lean_box(v_res_2062_);
return v_r_2063_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__4_spec__10_spec__18_spec__26_spec__34_spec__47_spec__60(lean_object* v_as_2064_, size_t v_i_2065_, size_t v_stop_2066_, lean_object* v_b_2067_){
_start:
{
uint8_t v___x_2068_; 
v___x_2068_ = lean_usize_dec_eq(v_i_2065_, v_stop_2066_);
if (v___x_2068_ == 0)
{
size_t v___x_2069_; size_t v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___f_2073_; uint8_t v___x_2074_; 
v___x_2069_ = ((size_t)1ULL);
v___x_2070_ = lean_usize_sub(v_i_2065_, v___x_2069_);
v___x_2071_ = lean_array_uget_borrowed(v_as_2064_, v___x_2070_);
v___x_2072_ = lean_box(v___x_2068_);
lean_inc(v___x_2071_);
v___f_2073_ = lean_alloc_closure((void*)(lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__4_spec__10_spec__18_spec__26_spec__34_spec__47_spec__60___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2073_, 0, v___x_2071_);
lean_closure_set(v___f_2073_, 1, v___x_2072_);
lean_inc(v_b_2067_);
v___x_2074_ = l_List_decidableBAll___redArg(v___f_2073_, v_b_2067_);
if (v___x_2074_ == 0)
{
v_i_2065_ = v___x_2070_;
goto _start;
}
else
{
lean_object* v___x_2076_; 
lean_inc(v___x_2071_);
v___x_2076_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2076_, 0, v___x_2071_);
lean_ctor_set(v___x_2076_, 1, v_b_2067_);
v_i_2065_ = v___x_2070_;
v_b_2067_ = v___x_2076_;
goto _start;
}
}
else
{
return v_b_2067_;
}
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__4_spec__10_spec__18_spec__26_spec__34_spec__47_spec__60___boxed(lean_object* v_as_2078_, lean_object* v_i_2079_, lean_object* v_stop_2080_, lean_object* v_b_2081_){
_start:
{
size_t v_i_boxed_2082_; size_t v_stop_boxed_2083_; lean_object* v_res_2084_; 
v_i_boxed_2082_ = lean_unbox_usize(v_i_2079_);
lean_dec(v_i_2079_);
v_stop_boxed_2083_ = lean_unbox_usize(v_stop_2080_);
lean_dec(v_stop_2080_);
v_res_2084_ = lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__4_spec__10_spec__18_spec__26_spec__34_spec__47_spec__60(v_as_2078_, v_i_boxed_2082_, v_stop_boxed_2083_, v_b_2081_);
lean_dec_ref(v_as_2078_);
return v_res_2084_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__4_spec__10_spec__18_spec__26_spec__34_spec__47(lean_object* v_init_2085_, lean_object* v_l_2086_){
_start:
{
lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; uint8_t v___x_2090_; 
v___x_2087_ = lean_array_mk(v_l_2086_);
v___x_2088_ = lean_array_get_size(v___x_2087_);
v___x_2089_ = lean_unsigned_to_nat(0u);
v___x_2090_ = lean_nat_dec_lt(v___x_2089_, v___x_2088_);
if (v___x_2090_ == 0)
{
lean_dec_ref(v___x_2087_);
return v_init_2085_;
}
else
{
size_t v___x_2091_; size_t v___x_2092_; lean_object* v___x_2093_; 
v___x_2091_ = lean_usize_of_nat(v___x_2088_);
v___x_2092_ = ((size_t)0ULL);
v___x_2093_ = lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__4_spec__10_spec__18_spec__26_spec__34_spec__47_spec__60(v___x_2087_, v___x_2091_, v___x_2092_, v_init_2085_);
lean_dec_ref(v___x_2087_);
return v___x_2093_;
}
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__4_spec__10_spec__18_spec__26_spec__34___redArg(lean_object* v_l_2094_){
_start:
{
lean_object* v___x_2095_; lean_object* v___x_2096_; 
v___x_2095_ = lean_box(0);
v___x_2096_ = lp_ShannonBounds_List_foldrTR___at___00List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__4_spec__10_spec__18_spec__26_spec__34_spec__47(v___x_2095_, v_l_2094_);
return v___x_2096_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__4_spec__10_spec__18(lean_object* v_s_2097_){
_start:
{
lean_object* v___x_2098_; 
v___x_2098_ = lp_ShannonBounds_List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__4_spec__10_spec__18_spec__26_spec__34___redArg(v_s_2097_);
return v___x_2098_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__4_spec__10(lean_object* v_s_2099_){
_start:
{
lean_object* v___x_2100_; 
v___x_2100_ = lp_ShannonBounds_List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__4_spec__10_spec__18_spec__26_spec__34___redArg(v_s_2099_);
return v___x_2100_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_Finset_image___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__4___redArg(lean_object* v_f_2101_, lean_object* v_s_2102_){
_start:
{
lean_object* v___x_2103_; lean_object* v___x_2104_; 
v___x_2103_ = lp_mathlib_Multiset_map___redArg(v_f_2101_, v_s_2102_);
v___x_2104_ = lp_ShannonBounds_List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__4_spec__10_spec__18_spec__26_spec__34___redArg(v___x_2103_);
return v___x_2104_;
}
}
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__3___redArg___lam__0(lean_object* v_ep_2105_, uint8_t v_c_2106_, lean_object* v___x_2107_, lean_object* v___x_2108_, lean_object* v_a_2109_, lean_object* v_a_2110_){
_start:
{
lean_object* v___x_2111_; lean_object* v___x_2112_; uint8_t v___x_2113_; 
v___x_2111_ = lean_box(v_c_2106_);
v___x_2112_ = lean_apply_2(v_ep_2105_, v___x_2111_, v_a_2110_);
v___x_2113_ = lp_ShannonBounds_ShannonBounds_decidableConflict___redArg(v___x_2107_, v___x_2108_, v_a_2109_, v___x_2112_);
return v___x_2113_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__3___redArg___lam__0___boxed(lean_object* v_ep_2114_, lean_object* v_c_2115_, lean_object* v___x_2116_, lean_object* v___x_2117_, lean_object* v_a_2118_, lean_object* v_a_2119_){
_start:
{
uint8_t v_c_boxed_2120_; uint8_t v_res_2121_; lean_object* v_r_2122_; 
v_c_boxed_2120_ = lean_unbox(v_c_2115_);
v_res_2121_ = lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__3___redArg___lam__0(v_ep_2114_, v_c_boxed_2120_, v___x_2116_, v___x_2117_, v_a_2118_, v_a_2119_);
v_r_2122_ = lean_box(v_res_2121_);
return v_r_2122_;
}
}
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__3___redArg___lam__1(lean_object* v_ep_2123_, uint8_t v_c_2124_, lean_object* v___x_2125_, lean_object* v___x_2126_, lean_object* v_ports_2127_, lean_object* v_a_2128_){
_start:
{
lean_object* v___x_2129_; lean_object* v___f_2130_; uint8_t v___x_2131_; 
v___x_2129_ = lean_box(v_c_2124_);
v___f_2130_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__3___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_2130_, 0, v_ep_2123_);
lean_closure_set(v___f_2130_, 1, v___x_2129_);
lean_closure_set(v___f_2130_, 2, v___x_2125_);
lean_closure_set(v___f_2130_, 3, v___x_2126_);
lean_closure_set(v___f_2130_, 4, v_a_2128_);
v___x_2131_ = lp_mathlib_Finset_decidableExistsAndFinset___redArg(v_ports_2127_, v___f_2130_);
return v___x_2131_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__3___redArg___lam__1___boxed(lean_object* v_ep_2132_, lean_object* v_c_2133_, lean_object* v___x_2134_, lean_object* v___x_2135_, lean_object* v_ports_2136_, lean_object* v_a_2137_){
_start:
{
uint8_t v_c_boxed_2138_; uint8_t v_res_2139_; lean_object* v_r_2140_; 
v_c_boxed_2138_ = lean_unbox(v_c_2133_);
v_res_2139_ = lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__3___redArg___lam__1(v_ep_2132_, v_c_boxed_2138_, v___x_2134_, v___x_2135_, v_ports_2136_, v_a_2137_);
v_r_2140_ = lean_box(v_res_2139_);
return v_r_2140_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__3___redArg(lean_object* v_S_2143_, uint8_t v_c_2144_){
_start:
{
lean_object* v_ports_2145_; lean_object* v_ep_2146_; lean_object* v_X_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; lean_object* v___x_2150_; lean_object* v___f_2151_; lean_object* v___x_2152_; 
v_ports_2145_ = lean_ctor_get(v_S_2143_, 1);
lean_inc(v_ports_2145_);
v_ep_2146_ = lean_ctor_get(v_S_2143_, 2);
lean_inc(v_ep_2146_);
v_X_2147_ = lean_ctor_get(v_S_2143_, 4);
lean_inc(v_X_2147_);
lean_dec_ref(v_S_2143_);
v___x_2148_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__3___redArg___closed__0));
v___x_2149_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_BaseC11_decG3___boxed), 2, 0);
v___x_2150_ = lean_box(v_c_2144_);
v___f_2151_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__3___redArg___lam__1___boxed), 6, 5);
lean_closure_set(v___f_2151_, 0, v_ep_2146_);
lean_closure_set(v___f_2151_, 1, v___x_2150_);
lean_closure_set(v___f_2151_, 2, v___x_2148_);
lean_closure_set(v___f_2151_, 3, v___x_2149_);
lean_closure_set(v___f_2151_, 4, v_ports_2145_);
v___x_2152_ = lp_mathlib_Multiset_filter___redArg(v___f_2151_, v_X_2147_);
return v___x_2152_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__3___redArg___boxed(lean_object* v_S_2153_, lean_object* v_c_2154_){
_start:
{
uint8_t v_c_boxed_2155_; lean_object* v_res_2156_; 
v_c_boxed_2155_ = lean_unbox(v_c_2154_);
v_res_2156_ = lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__3___redArg(v_S_2153_, v_c_boxed_2155_);
return v_res_2156_;
}
}
LEAN_EXPORT uint8_t lp_ShannonBounds_List_elem___at___00List_diff___at___00Multiset_sub___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__1_spec__5_spec__11(lean_object* v_a_2157_, lean_object* v_x_2158_){
_start:
{
if (lean_obj_tag(v_x_2158_) == 0)
{
uint8_t v___x_2159_; 
v___x_2159_ = 0;
return v___x_2159_;
}
else
{
lean_object* v_head_2160_; lean_object* v_tail_2161_; uint8_t v___x_2162_; 
v_head_2160_ = lean_ctor_get(v_x_2158_, 0);
v_tail_2161_ = lean_ctor_get(v_x_2158_, 1);
v___x_2162_ = lean_nat_dec_eq(v_a_2157_, v_head_2160_);
if (v___x_2162_ == 0)
{
v_x_2158_ = v_tail_2161_;
goto _start;
}
else
{
return v___x_2162_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_List_elem___at___00List_diff___at___00Multiset_sub___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__1_spec__5_spec__11___boxed(lean_object* v_a_2164_, lean_object* v_x_2165_){
_start:
{
uint8_t v_res_2166_; lean_object* v_r_2167_; 
v_res_2166_ = lp_ShannonBounds_List_elem___at___00List_diff___at___00Multiset_sub___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__1_spec__5_spec__11(v_a_2164_, v_x_2165_);
lean_dec(v_x_2165_);
lean_dec(v_a_2164_);
v_r_2167_ = lean_box(v_res_2166_);
return v_r_2167_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Multiset_ndunion___at___00ShannonBounds_RichPortSystem_Xstar___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__2_spec__7_spec__15_spec__23(lean_object* v_as_2168_, size_t v_i_2169_, size_t v_stop_2170_, lean_object* v_b_2171_){
_start:
{
uint8_t v___x_2172_; 
v___x_2172_ = lean_usize_dec_eq(v_i_2169_, v_stop_2170_);
if (v___x_2172_ == 0)
{
size_t v___x_2173_; size_t v___x_2174_; lean_object* v___x_2175_; uint8_t v___x_2176_; 
v___x_2173_ = ((size_t)1ULL);
v___x_2174_ = lean_usize_sub(v_i_2169_, v___x_2173_);
v___x_2175_ = lean_array_uget_borrowed(v_as_2168_, v___x_2174_);
v___x_2176_ = lp_ShannonBounds_List_elem___at___00List_diff___at___00Multiset_sub___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__1_spec__5_spec__11(v___x_2175_, v_b_2171_);
if (v___x_2176_ == 0)
{
lean_object* v___x_2177_; 
lean_inc(v___x_2175_);
v___x_2177_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2177_, 0, v___x_2175_);
lean_ctor_set(v___x_2177_, 1, v_b_2171_);
v_i_2169_ = v___x_2174_;
v_b_2171_ = v___x_2177_;
goto _start;
}
else
{
v_i_2169_ = v___x_2174_;
goto _start;
}
}
else
{
return v_b_2171_;
}
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Multiset_ndunion___at___00ShannonBounds_RichPortSystem_Xstar___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__2_spec__7_spec__15_spec__23___boxed(lean_object* v_as_2180_, lean_object* v_i_2181_, lean_object* v_stop_2182_, lean_object* v_b_2183_){
_start:
{
size_t v_i_boxed_2184_; size_t v_stop_boxed_2185_; lean_object* v_res_2186_; 
v_i_boxed_2184_ = lean_unbox_usize(v_i_2181_);
lean_dec(v_i_2181_);
v_stop_boxed_2185_ = lean_unbox_usize(v_stop_2182_);
lean_dec(v_stop_2182_);
v_res_2186_ = lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Multiset_ndunion___at___00ShannonBounds_RichPortSystem_Xstar___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__2_spec__7_spec__15_spec__23(v_as_2180_, v_i_boxed_2184_, v_stop_boxed_2185_, v_b_2183_);
lean_dec_ref(v_as_2180_);
return v_res_2186_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_List_foldrTR___at___00Multiset_ndunion___at___00ShannonBounds_RichPortSystem_Xstar___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__2_spec__7_spec__15(lean_object* v_init_2187_, lean_object* v_l_2188_){
_start:
{
lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; uint8_t v___x_2192_; 
v___x_2189_ = lean_array_mk(v_l_2188_);
v___x_2190_ = lean_array_get_size(v___x_2189_);
v___x_2191_ = lean_unsigned_to_nat(0u);
v___x_2192_ = lean_nat_dec_lt(v___x_2191_, v___x_2190_);
if (v___x_2192_ == 0)
{
lean_dec_ref(v___x_2189_);
return v_init_2187_;
}
else
{
size_t v___x_2193_; size_t v___x_2194_; lean_object* v___x_2195_; 
v___x_2193_ = lean_usize_of_nat(v___x_2190_);
v___x_2194_ = ((size_t)0ULL);
v___x_2195_ = lp_ShannonBounds___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Multiset_ndunion___at___00ShannonBounds_RichPortSystem_Xstar___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__2_spec__7_spec__15_spec__23(v___x_2189_, v___x_2193_, v___x_2194_, v_init_2187_);
lean_dec_ref(v___x_2189_);
return v___x_2195_;
}
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_Multiset_ndunion___at___00ShannonBounds_RichPortSystem_Xstar___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__2_spec__7(lean_object* v_s_2196_, lean_object* v_t_2197_){
_start:
{
lean_object* v___x_2198_; 
v___x_2198_ = lp_ShannonBounds_List_foldrTR___at___00Multiset_ndunion___at___00ShannonBounds_RichPortSystem_Xstar___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__2_spec__7_spec__15(v_t_2197_, v_s_2196_);
return v___x_2198_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds___private_Init_Data_List_Impl_0__List_eraseTR_go___at___00List_diff___at___00Multiset_sub___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__1_spec__5_spec__12(lean_object* v_l_2199_, lean_object* v_a_2200_, lean_object* v_a_2201_, lean_object* v_a_2202_){
_start:
{
if (lean_obj_tag(v_a_2201_) == 0)
{
lean_dec_ref(v_a_2202_);
lean_inc(v_l_2199_);
return v_l_2199_;
}
else
{
lean_object* v_head_2203_; lean_object* v_tail_2204_; uint8_t v___x_2205_; 
v_head_2203_ = lean_ctor_get(v_a_2201_, 0);
lean_inc(v_head_2203_);
v_tail_2204_ = lean_ctor_get(v_a_2201_, 1);
lean_inc(v_tail_2204_);
lean_dec_ref_known(v_a_2201_, 2);
v___x_2205_ = lean_nat_dec_eq(v_head_2203_, v_a_2200_);
if (v___x_2205_ == 0)
{
lean_object* v___x_2206_; 
v___x_2206_ = lean_array_push(v_a_2202_, v_head_2203_);
v_a_2201_ = v_tail_2204_;
v_a_2202_ = v___x_2206_;
goto _start;
}
else
{
lean_object* v___x_2208_; lean_object* v___x_2209_; uint8_t v___x_2210_; 
lean_dec(v_head_2203_);
v___x_2208_ = lean_array_get_size(v_a_2202_);
v___x_2209_ = lean_unsigned_to_nat(0u);
v___x_2210_ = lean_nat_dec_lt(v___x_2209_, v___x_2208_);
if (v___x_2210_ == 0)
{
lean_dec_ref(v_a_2202_);
return v_tail_2204_;
}
else
{
size_t v___x_2211_; size_t v___x_2212_; lean_object* v___x_2213_; 
v___x_2211_ = lean_usize_of_nat(v___x_2208_);
v___x_2212_ = ((size_t)0ULL);
v___x_2213_ = lp_mathlib___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_List_Impl_0__List_eraseTR_go___at___00Multiset_erase___at___00Sym_erase___at___00Sym_e1_spec__0_spec__0_spec__1_spec__2(v_a_2202_, v___x_2211_, v___x_2212_, v_tail_2204_);
lean_dec_ref(v_a_2202_);
return v___x_2213_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds___private_Init_Data_List_Impl_0__List_eraseTR_go___at___00List_diff___at___00Multiset_sub___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__1_spec__5_spec__12___boxed(lean_object* v_l_2214_, lean_object* v_a_2215_, lean_object* v_a_2216_, lean_object* v_a_2217_){
_start:
{
lean_object* v_res_2218_; 
v_res_2218_ = lp_ShannonBounds___private_Init_Data_List_Impl_0__List_eraseTR_go___at___00List_diff___at___00Multiset_sub___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__1_spec__5_spec__12(v_l_2214_, v_a_2215_, v_a_2216_, v_a_2217_);
lean_dec(v_a_2215_);
lean_dec(v_l_2214_);
return v_res_2218_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_List_diff___at___00Multiset_sub___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__1_spec__5(lean_object* v_x_2221_, lean_object* v_x_2222_){
_start:
{
if (lean_obj_tag(v_x_2222_) == 0)
{
return v_x_2221_;
}
else
{
lean_object* v_head_2223_; lean_object* v_tail_2224_; uint8_t v___x_2225_; 
v_head_2223_ = lean_ctor_get(v_x_2222_, 0);
v_tail_2224_ = lean_ctor_get(v_x_2222_, 1);
v___x_2225_ = lp_ShannonBounds_List_elem___at___00List_diff___at___00Multiset_sub___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__1_spec__5_spec__11(v_head_2223_, v_x_2221_);
if (v___x_2225_ == 0)
{
v_x_2222_ = v_tail_2224_;
goto _start;
}
else
{
lean_object* v___x_2227_; lean_object* v___x_2228_; 
v___x_2227_ = ((lean_object*)(lp_ShannonBounds_List_diff___at___00Multiset_sub___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__1_spec__5___closed__0));
lean_inc(v_x_2221_);
v___x_2228_ = lp_ShannonBounds___private_Init_Data_List_Impl_0__List_eraseTR_go___at___00List_diff___at___00Multiset_sub___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__1_spec__5_spec__12(v_x_2221_, v_head_2223_, v_x_2221_, v___x_2227_);
lean_dec(v_x_2221_);
v_x_2221_ = v___x_2228_;
v_x_2222_ = v_tail_2224_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_List_diff___at___00Multiset_sub___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__1_spec__5___boxed(lean_object* v_x_2230_, lean_object* v_x_2231_){
_start:
{
lean_object* v_res_2232_; 
v_res_2232_ = lp_ShannonBounds_List_diff___at___00Multiset_sub___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__1_spec__5(v_x_2230_, v_x_2231_);
lean_dec(v_x_2231_);
return v_res_2232_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_Multiset_sub___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__1(lean_object* v_s_2233_, lean_object* v_t_2234_){
_start:
{
lean_object* v___x_2235_; 
v___x_2235_ = lp_ShannonBounds_List_diff___at___00Multiset_sub___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__1_spec__5(v_s_2233_, v_t_2234_);
return v___x_2235_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_Multiset_sub___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__1___boxed(lean_object* v_s_2236_, lean_object* v_t_2237_){
_start:
{
lean_object* v_res_2238_; 
v_res_2238_ = lp_ShannonBounds_Multiset_sub___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__1(v_s_2236_, v_t_2237_);
lean_dec(v_t_2237_);
return v_res_2238_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_Xstar___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__2(lean_object* v_G_2239_, lean_object* v_S_2240_){
_start:
{
lean_object* v_X_2241_; uint8_t v___x_2242_; lean_object* v___x_2243_; uint8_t v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; 
v_X_2241_ = lean_ctor_get(v_S_2240_, 4);
lean_inc(v_X_2241_);
v___x_2242_ = 0;
lean_inc_ref(v_S_2240_);
v___x_2243_ = lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__3___redArg(v_S_2240_, v___x_2242_);
v___x_2244_ = 1;
v___x_2245_ = lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__3___redArg(v_S_2240_, v___x_2244_);
v___x_2246_ = lp_ShannonBounds_List_foldrTR___at___00Multiset_ndunion___at___00ShannonBounds_RichPortSystem_Xstar___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__2_spec__7_spec__15(v___x_2245_, v___x_2243_);
v___x_2247_ = lp_ShannonBounds_List_diff___at___00Multiset_sub___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__1_spec__5(v_X_2241_, v___x_2246_);
lean_dec(v___x_2246_);
return v___x_2247_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0(lean_object* v_G_2248_, lean_object* v_S_2249_, uint8_t v_x_2250_){
_start:
{
switch(v_x_2250_)
{
case 0:
{
lean_object* v_I_2251_; lean_object* v_ports_2252_; lean_object* v___x_2253_; 
v_I_2251_ = lean_ctor_get(v_S_2249_, 0);
lean_inc(v_I_2251_);
v_ports_2252_ = lean_ctor_get(v_S_2249_, 1);
lean_inc(v_ports_2252_);
lean_dec_ref(v_S_2249_);
v___x_2253_ = lp_ShannonBounds_List_diff___at___00Multiset_sub___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__1_spec__5(v_I_2251_, v_ports_2252_);
lean_dec(v_ports_2252_);
return v___x_2253_;
}
case 1:
{
lean_object* v___x_2254_; 
v___x_2254_ = lp_ShannonBounds_ShannonBounds_RichPortSystem_Xstar___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__2(v_G_2248_, v_S_2249_);
return v___x_2254_;
}
case 2:
{
uint8_t v___x_2255_; lean_object* v___x_2256_; 
v___x_2255_ = 0;
v___x_2256_ = lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__3___redArg(v_S_2249_, v___x_2255_);
return v___x_2256_;
}
case 3:
{
uint8_t v___x_2257_; lean_object* v___x_2258_; 
v___x_2257_ = 1;
v___x_2258_ = lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__3___redArg(v_S_2249_, v___x_2257_);
return v___x_2258_;
}
case 4:
{
lean_object* v_ports_2259_; 
v_ports_2259_ = lean_ctor_get(v_S_2249_, 1);
lean_inc(v_ports_2259_);
lean_dec_ref(v_S_2249_);
return v_ports_2259_;
}
case 5:
{
lean_object* v_ports_2260_; lean_object* v_ep_2261_; uint8_t v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; lean_object* v___x_2265_; 
v_ports_2260_ = lean_ctor_get(v_S_2249_, 1);
lean_inc(v_ports_2260_);
v_ep_2261_ = lean_ctor_get(v_S_2249_, 2);
lean_inc(v_ep_2261_);
lean_dec_ref(v_S_2249_);
v___x_2262_ = 1;
v___x_2263_ = lean_box(v___x_2262_);
v___x_2264_ = lean_apply_1(v_ep_2261_, v___x_2263_);
v___x_2265_ = lp_ShannonBounds_Finset_image___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__4___redArg(v___x_2264_, v_ports_2260_);
return v___x_2265_;
}
default: 
{
lean_object* v_ports_2266_; lean_object* v_ep_2267_; uint8_t v___x_2268_; lean_object* v___x_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; 
v_ports_2266_ = lean_ctor_get(v_S_2249_, 1);
lean_inc(v_ports_2266_);
v_ep_2267_ = lean_ctor_get(v_S_2249_, 2);
lean_inc(v_ep_2267_);
lean_dec_ref(v_S_2249_);
v___x_2268_ = 0;
v___x_2269_ = lean_box(v___x_2268_);
v___x_2270_ = lean_apply_1(v_ep_2267_, v___x_2269_);
v___x_2271_ = lp_ShannonBounds_Finset_image___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__4___redArg(v___x_2270_, v_ports_2266_);
return v___x_2271_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0___boxed(lean_object* v_G_2272_, lean_object* v_S_2273_, lean_object* v_x_2274_){
_start:
{
uint8_t v_x_5728__boxed_2275_; lean_object* v_res_2276_; 
v_x_5728__boxed_2275_ = lean_unbox(v_x_2274_);
v_res_2276_ = lp_ShannonBounds_ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0(v_G_2272_, v_S_2273_, v_x_5728__boxed_2275_);
return v_res_2276_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0___lam__0(lean_object* v_G_2277_, lean_object* v_S_2278_, uint8_t v___y_2279_){
_start:
{
lean_object* v___x_2280_; 
v___x_2280_ = lp_ShannonBounds_ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0(v_G_2277_, v_S_2278_, v___y_2279_);
return v___x_2280_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0___lam__0___boxed(lean_object* v_G_2281_, lean_object* v_S_2282_, lean_object* v___y_2283_){
_start:
{
uint8_t v___y_5759__boxed_2284_; lean_object* v_res_2285_; 
v___y_5759__boxed_2284_ = lean_unbox(v___y_2283_);
v_res_2285_ = lp_ShannonBounds_ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0___lam__0(v_G_2281_, v_S_2282_, v___y_5759__boxed_2284_);
return v_res_2285_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0(lean_object* v_G_2286_, lean_object* v_S_2287_){
_start:
{
lean_object* v___f_2288_; 
v___f_2288_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2288_, 0, v_G_2286_);
lean_closure_set(v___f_2288_, 1, v_S_2287_);
return v___f_2288_;
}
}
static lean_object* _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code207___closed__0(void){
_start:
{
lean_object* v___x_2289_; lean_object* v___x_2290_; 
v___x_2289_ = lp_ShannonBounds_ShannonBounds_CapCertC11_iso207;
v___x_2290_ = lp_mathlib_Equiv_symm___redArg(v___x_2289_);
return v___x_2290_;
}
}
static lean_object* _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code207___closed__1(void){
_start:
{
lean_object* v___x_2291_; lean_object* v___f_2292_; 
v___x_2291_ = lean_obj_once(&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code207___closed__0, &lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code207___closed__0_once, _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code207___closed__0);
v___f_2292_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code207___lam__0), 3, 1);
lean_closure_set(v___f_2292_, 0, v___x_2291_);
return v___f_2292_;
}
}
static lean_object* _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code207___closed__2(void){
_start:
{
lean_object* v___x_2293_; lean_object* v___x_2294_; lean_object* v___f_2295_; 
v___x_2293_ = lp_ShannonBounds_ShannonBounds_BaseC11_base;
v___x_2294_ = lean_box(0);
v___f_2295_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2295_, 0, v___x_2294_);
lean_closure_set(v___f_2295_, 1, v___x_2293_);
return v___f_2295_;
}
}
static lean_object* _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code207___closed__3(void){
_start:
{
lean_object* v___f_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; 
v___f_2296_ = lean_obj_once(&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code207___closed__2, &lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code207___closed__2_once, _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code207___closed__2);
v___x_2297_ = lean_box(0);
v___x_2298_ = lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1(v___x_2297_, v___f_2296_);
return v___x_2298_;
}
}
static lean_object* _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code207___closed__4(void){
_start:
{
lean_object* v___x_2299_; lean_object* v___f_2300_; lean_object* v___x_2301_; 
v___x_2299_ = lean_obj_once(&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code207___closed__3, &lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code207___closed__3_once, _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code207___closed__3);
v___f_2300_ = lean_obj_once(&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code207___closed__1, &lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code207___closed__1_once, _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code207___closed__1);
v___x_2301_ = lp_ShannonBounds_Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__2___redArg(v___f_2300_, v___x_2299_);
return v___x_2301_;
}
}
static lean_object* _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code207(void){
_start:
{
lean_object* v___x_2302_; 
v___x_2302_ = lean_obj_once(&lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code207___closed__4, &lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code207___closed__4_once, _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code207___closed__4);
return v___x_2302_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__sum__iso___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__2___redArg(lean_object* v_q_2303_, lean_object* v_e_2304_){
_start:
{
lean_object* v___x_2305_; 
v___x_2305_ = lp_ShannonBounds_ShannonBounds_sumEquiv___redArg(v_q_2303_, v_e_2304_);
return v___x_2305_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__sum__iso___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__2___redArg___boxed(lean_object* v_q_2306_, lean_object* v_e_2307_){
_start:
{
lean_object* v_res_2308_; 
v_res_2308_ = lp_ShannonBounds_ShannonBounds_strongPower__sum__iso___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__2___redArg(v_q_2306_, v_e_2307_);
lean_dec(v_q_2306_);
return v_res_2308_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__sum__iso___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__2(lean_object* v_G_2309_, lean_object* v_q_2310_, lean_object* v_e_2311_){
_start:
{
lean_object* v___x_2312_; 
v___x_2312_ = lp_ShannonBounds_ShannonBounds_sumEquiv___redArg(v_q_2310_, v_e_2311_);
return v___x_2312_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__sum__iso___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__2___boxed(lean_object* v_G_2313_, lean_object* v_q_2314_, lean_object* v_e_2315_){
_start:
{
lean_object* v_res_2316_; 
v_res_2316_ = lp_ShannonBounds_ShannonBounds_strongPower__sum__iso___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__2(v_G_2313_, v_q_2314_, v_e_2315_);
lean_dec(v_q_2314_);
return v_res_2316_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__2(lean_object* v_00_u03b1_2317_, lean_object* v_f_2318_, lean_object* v_s_2319_){
_start:
{
lean_object* v___x_2320_; 
v___x_2320_ = lp_ShannonBounds_Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__2___redArg(v_f_2318_, v_s_2319_);
return v___x_2320_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__3(lean_object* v_G_2321_, lean_object* v_S_2322_, uint8_t v_c_2323_){
_start:
{
lean_object* v___x_2324_; 
v___x_2324_ = lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__3___redArg(v_S_2322_, v_c_2323_);
return v___x_2324_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__3___boxed(lean_object* v_G_2325_, lean_object* v_S_2326_, lean_object* v_c_2327_){
_start:
{
uint8_t v_c_boxed_2328_; lean_object* v_res_2329_; 
v_c_boxed_2328_ = lean_unbox(v_c_2327_);
v_res_2329_ = lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__3(v_G_2325_, v_S_2326_, v_c_boxed_2328_);
return v_res_2329_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__5(lean_object* v_00_u03b1_2330_, lean_object* v_f_2331_, lean_object* v_s_2332_){
_start:
{
lean_object* v___x_2333_; 
v___x_2333_ = lp_ShannonBounds_Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__5___redArg(v_f_2331_, v_s_2332_);
return v___x_2333_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_Finset_image___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__4(lean_object* v_00_u03b1_2334_, lean_object* v_f_2335_, lean_object* v_s_2336_){
_start:
{
lean_object* v___x_2337_; 
v___x_2337_ = lp_ShannonBounds_Finset_image___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__4___redArg(v_f_2335_, v_s_2336_);
return v___x_2337_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12(lean_object* v_sep_2338_, lean_object* v_G_2339_, lean_object* v_q_2340_, lean_object* v_e_2341_, lean_object* v_R_2342_, lean_object* v_x_2343_){
_start:
{
lean_object* v___x_2344_; 
v___x_2344_ = lp_ShannonBounds_ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12___redArg(v_q_2340_, v_R_2342_, v_x_2343_);
return v___x_2344_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12___boxed(lean_object* v_sep_2345_, lean_object* v_G_2346_, lean_object* v_q_2347_, lean_object* v_e_2348_, lean_object* v_R_2349_, lean_object* v_x_2350_){
_start:
{
lean_object* v_res_2351_; 
v_res_2351_ = lp_ShannonBounds_ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12(v_sep_2345_, v_G_2346_, v_q_2347_, v_e_2348_, v_R_2349_, v_x_2350_);
lean_dec_ref(v_e_2348_);
lean_dec_ref(v_sep_2345_);
return v_res_2351_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21(lean_object* v_q_2352_, lean_object* v_00_u03b4_2353_, lean_object* v_t_2354_){
_start:
{
lean_object* v___x_2355_; 
v___x_2355_ = lp_ShannonBounds_Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21___redArg(v_q_2352_, v_t_2354_);
return v___x_2355_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__2_spec__7_spec__17_spec__27(lean_object* v_l_2356_){
_start:
{
lean_object* v___x_2357_; 
v___x_2357_ = lp_ShannonBounds_List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__2_spec__7_spec__17_spec__27_spec__42___redArg(v_l_2356_);
return v___x_2357_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25(lean_object* v_G_2358_, lean_object* v_q_2359_, lean_object* v_e_2360_, lean_object* v___x_2361_, lean_object* v_sep_2362_, lean_object* v_G_2363_, lean_object* v_H_2364_, lean_object* v_R_2365_, lean_object* v_f_2366_){
_start:
{
lean_object* v___x_2367_; 
v___x_2367_ = lp_ShannonBounds_ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25___redArg(v___x_2361_, v_R_2365_, v_f_2366_);
return v___x_2367_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25___boxed(lean_object* v_G_2368_, lean_object* v_q_2369_, lean_object* v_e_2370_, lean_object* v___x_2371_, lean_object* v_sep_2372_, lean_object* v_G_2373_, lean_object* v_H_2374_, lean_object* v_R_2375_, lean_object* v_f_2376_){
_start:
{
lean_object* v_res_2377_; 
v_res_2377_ = lp_ShannonBounds_ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25(v_G_2368_, v_q_2369_, v_e_2370_, v___x_2371_, v_sep_2372_, v_G_2373_, v_H_2374_, v_R_2375_, v_f_2376_);
lean_dec_ref(v_sep_2372_);
lean_dec_ref(v_e_2370_);
lean_dec(v_q_2369_);
return v_res_2377_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36(lean_object* v_q_2378_, lean_object* v_00_u03b2_2379_, lean_object* v_s_2380_, lean_object* v_t_2381_){
_start:
{
lean_object* v___x_2382_; 
v___x_2382_ = lp_ShannonBounds_Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36___redArg(v_q_2378_, v_s_2380_, v_t_2381_);
return v___x_2382_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36___boxed(lean_object* v_q_2383_, lean_object* v_00_u03b2_2384_, lean_object* v_s_2385_, lean_object* v_t_2386_){
_start:
{
lean_object* v_res_2387_; 
v_res_2387_ = lp_ShannonBounds_Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36(v_q_2383_, v_00_u03b2_2384_, v_s_2385_, v_t_2386_);
lean_dec(v_q_2383_);
return v_res_2387_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__5_spec__14_spec__24_spec__39(lean_object* v_l_2388_){
_start:
{
lean_object* v___x_2389_; 
v___x_2389_ = lp_ShannonBounds_List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__5_spec__14_spec__24_spec__39_spec__53___redArg(v_l_2388_);
return v___x_2389_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__2_spec__7_spec__17_spec__27_spec__42(lean_object* v_R_2390_, lean_object* v_l_2391_){
_start:
{
lean_object* v___x_2392_; 
v___x_2392_ = lp_ShannonBounds_List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__2_spec__7_spec__17_spec__27_spec__42___redArg(v_l_2391_);
return v___x_2392_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__4_spec__10_spec__18_spec__26(lean_object* v_l_2393_){
_start:
{
lean_object* v___x_2394_; 
v___x_2394_ = lp_ShannonBounds_List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__4_spec__10_spec__18_spec__26_spec__34___redArg(v_l_2393_);
return v___x_2394_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_mapIso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__30(lean_object* v_G_2395_, lean_object* v_sep_2396_, lean_object* v_G_2397_, lean_object* v_H_2398_, lean_object* v_R_2399_, lean_object* v_f_2400_){
_start:
{
lean_object* v___x_2401_; 
v___x_2401_ = lp_ShannonBounds_ShannonBounds_Realisation_mapIso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__30___redArg(v_R_2399_, v_f_2400_);
return v___x_2401_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_mapIso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__30___boxed(lean_object* v_G_2402_, lean_object* v_sep_2403_, lean_object* v_G_2404_, lean_object* v_H_2405_, lean_object* v_R_2406_, lean_object* v_f_2407_){
_start:
{
lean_object* v_res_2408_; 
v_res_2408_ = lp_ShannonBounds_ShannonBounds_Realisation_mapIso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__30(v_G_2402_, v_sep_2403_, v_G_2404_, v_H_2405_, v_R_2406_, v_f_2407_);
lean_dec_ref(v_sep_2403_);
return v_res_2408_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25_spec__37(lean_object* v___x_2409_, lean_object* v_00_u03b1_2410_, lean_object* v_f_2411_, lean_object* v_s_2412_){
_start:
{
lean_object* v___x_2413_; 
v___x_2413_ = lp_ShannonBounds_Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25_spec__37___redArg(v___x_2409_, v_f_2411_, v_s_2412_);
return v___x_2413_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_Multiset_Pi_cons___at___00Multiset_pi___at___00Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36_spec__50_spec__61(lean_object* v_q_2414_, lean_object* v_00_u03b4_2415_, lean_object* v_m_2416_, lean_object* v_a_2417_, lean_object* v_b_2418_, lean_object* v_f_2419_, lean_object* v_a_x27_2420_, lean_object* v_ha_x27_2421_){
_start:
{
lean_object* v___x_2422_; 
v___x_2422_ = lp_ShannonBounds_Multiset_Pi_cons___at___00Multiset_pi___at___00Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36_spec__50_spec__61___redArg(v_a_2417_, v_b_2418_, v_f_2419_, v_a_x27_2420_);
return v___x_2422_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_Multiset_Pi_cons___at___00Multiset_pi___at___00Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36_spec__50_spec__61___boxed(lean_object* v_q_2423_, lean_object* v_00_u03b4_2424_, lean_object* v_m_2425_, lean_object* v_a_2426_, lean_object* v_b_2427_, lean_object* v_f_2428_, lean_object* v_a_x27_2429_, lean_object* v_ha_x27_2430_){
_start:
{
lean_object* v_res_2431_; 
v_res_2431_ = lp_ShannonBounds_Multiset_Pi_cons___at___00Multiset_pi___at___00Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36_spec__50_spec__61(v_q_2423_, v_00_u03b4_2424_, v_m_2425_, v_a_2426_, v_b_2427_, v_f_2428_, v_a_x27_2429_, v_ha_x27_2430_);
lean_dec(v_b_2427_);
lean_dec(v_a_2426_);
lean_dec(v_m_2425_);
lean_dec(v_q_2423_);
return v_res_2431_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_Multiset_pi___at___00Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36_spec__50(lean_object* v_q_2432_, lean_object* v_00_u03b2_2433_, lean_object* v_m_2434_, lean_object* v_t_2435_){
_start:
{
lean_object* v___x_2436_; 
v___x_2436_ = lp_ShannonBounds_Multiset_pi___at___00Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36_spec__50___redArg(v_q_2432_, v_m_2434_, v_t_2435_);
return v___x_2436_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_Multiset_pi___at___00Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36_spec__50___boxed(lean_object* v_q_2437_, lean_object* v_00_u03b2_2438_, lean_object* v_m_2439_, lean_object* v_t_2440_){
_start:
{
lean_object* v_res_2441_; 
v_res_2441_ = lp_ShannonBounds_Multiset_pi___at___00Finset_pi___at___00Fintype_piFinset___at___00ShannonBounds_multiWordSet___at___00ShannonBounds_multiCodeSet___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__4_spec__12_spec__21_spec__36_spec__50(v_q_2437_, v_00_u03b2_2438_, v_m_2439_, v_t_2440_);
lean_dec(v_q_2437_);
return v_res_2441_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__5_spec__14_spec__24_spec__39_spec__53(lean_object* v_R_2442_, lean_object* v_l_2443_){
_start:
{
lean_object* v___x_2444_; 
v___x_2444_ = lp_ShannonBounds_List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__5_spec__14_spec__24_spec__39_spec__53___redArg(v_l_2443_);
return v___x_2444_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__4_spec__10_spec__18_spec__26_spec__34(lean_object* v_R_2445_, lean_object* v_l_2446_){
_start:
{
lean_object* v___x_2447_; 
v___x_2447_ = lp_ShannonBounds_List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_RichPortSystem_fam___at___00ShannonBounds_RichPortSystem_toRealisation___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__0_spec__0_spec__4_spec__10_spec__18_spec__26_spec__34___redArg(v_l_2446_);
return v___x_2447_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__30_spec__38(lean_object* v_00_u03b1_2448_, lean_object* v_f_2449_, lean_object* v_s_2450_){
_start:
{
lean_object* v___x_2451_; 
v___x_2451_ = lp_ShannonBounds_Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__30_spec__38___redArg(v_f_2449_, v_s_2450_);
return v___x_2451_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25_spec__37_spec__46_spec__57_spec__69(lean_object* v___x_2452_, lean_object* v_l_2453_){
_start:
{
lean_object* v___x_2454_; 
v___x_2454_ = lp_ShannonBounds_List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25_spec__37_spec__46_spec__57_spec__69_spec__78___redArg(v___x_2452_, v_l_2453_);
return v___x_2454_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__30_spec__38_spec__50_spec__63_spec__72(lean_object* v_l_2455_){
_start:
{
lean_object* v___x_2456_; 
v___x_2456_ = lp_ShannonBounds_List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__30_spec__38_spec__50_spec__63_spec__72_spec__80___redArg(v_l_2455_);
return v___x_2456_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25_spec__37_spec__46_spec__57_spec__69_spec__78(lean_object* v___x_2457_, lean_object* v_R_2458_, lean_object* v_l_2459_){
_start:
{
lean_object* v___x_2460_; 
v___x_2460_ = lp_ShannonBounds_List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_Realisation_multiSubst___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__14_spec__25_spec__37_spec__46_spec__57_spec__69_spec__78___redArg(v___x_2457_, v_l_2459_);
return v___x_2460_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__30_spec__38_spec__50_spec__63_spec__72_spec__80(lean_object* v_R_2461_, lean_object* v_l_2462_){
_start:
{
lean_object* v___x_2463_; 
v___x_2463_ = lp_ShannonBounds_List_pwFilter___at___00List_dedup___at___00Multiset_dedup___at___00Multiset_toFinset___at___00Finset_image___at___00ShannonBounds_Realisation_mapIso___at___00ShannonBounds_CertC11_R1___at___00ShannonBounds_CertC11_chb13___at___00ShannonBounds_CertC11_Rb13___at___00ShannonBounds_C11AuxiliaryTrade_terminalChildren___at___00ShannonBounds_C11AuxiliaryTrade_code69___at___00ShannonBounds_C11AuxiliaryTrade_code207_spec__1_spec__3_spec__8_spec__13_spec__21_spec__30_spec__38_spec__50_spec__63_spec__72_spec__80___redArg(v_l_2462_);
return v___x_2463_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_ShannonBounds_ShannonBounds_CapCertC11(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_ShannonBounds_ShannonBounds_C11AuxiliaryTrade(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ShannonBounds_ShannonBounds_CapCertC11(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_N0 = _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_N0();
lean_mark_persistent(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_N0);
lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_N1 = _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_N1();
lean_mark_persistent(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_N1);
lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code207 = _init_lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code207();
lean_mark_persistent(lp_ShannonBounds_ShannonBounds_C11AuxiliaryTrade_code207);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
