// Lean compiler output
// Module: ShannonBounds.Layered
// Imports: public import Init public meta import Init public import ShannonBounds.Lift public import ShannonBounds.Defs public import Mathlib.Algebra.BigOperators.Fin
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
uint8_t lp_mathlib_Fintype_decidablePiFintype___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_finRange(lean_object*);
lean_object* l_instDecidableEqFin___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lp_mathlib_Fintype_piFinset___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lp_mathlib_Finset_biUnion___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lp_mathlib_finSigmaFinEquiv(lean_object*, lean_object*);
lean_object* lp_mathlib_Equiv_symm___redArg(lean_object*);
lean_object* lp_mathlib_Equiv_piCongrLeft_x27___redArg(lean_object*);
lean_object* lp_mathlib_Equiv_piCurry(lean_object*, lean_object*, lean_object*);
lean_object* lp_mathlib_Equiv_trans___redArg(lean_object*, lean_object*);
lean_object* lp_mathlib_Equiv_piCongrRight___redArg(lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* lp_mathlib_finProdFinEquiv___redArg(lean_object*);
extern lean_object* lp_mathlib_Nat_instAddCancelCommMonoid;
lean_object* lp_mathlib_Finset_sum___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lp_mathlib_Equiv_toEmbedding___redArg___lam__0(lean_object*, lean_object*);
lean_object* lp_mathlib_Finset_image___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lp_ShannonBounds_ShannonBounds_strongPower__adj__decidable___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Nat_decidableForallFin___redArg(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_w___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_w(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_w___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_wordSet___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_wordSet___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_wordSet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_wordSet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_substSet___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_substSet___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_substSet___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_substSet___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_substSet___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_substSet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_subst___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_subst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_subst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_familyStrongPower(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_familyStrongPower___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_familyStrongPower__adj__decidable___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_familyStrongPower__adj__decidable___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_familyStrongPower__adj__decidable___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_familyStrongPower__adj__decidable___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_familyStrongPower__adj__decidable___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_familyStrongPower__adj__decidable___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_familyStrongPower__adj__decidable(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_familyStrongPower__adj__decidable___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_ShannonBounds_ShannonBounds_sumEquiv___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ShannonBounds_ShannonBounds_sumEquiv___redArg___closed__0;
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_sumEquiv___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_sumEquiv___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_sumEquiv(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_sumEquiv___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_flattenSumEquiv___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_flattenSumEquiv___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_flattenSumEquiv(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_flattenSumEquiv___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__sum__iso___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__sum__iso___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__sum__iso(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__sum__iso___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_mapIso___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_mapIso___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_mapIso___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_mapIso(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_mapIso___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_ShannonBounds_ShannonBounds_strongPower__one__iso___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ShannonBounds_ShannonBounds_strongPower__one__iso___lam__0___closed__0;
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__one__iso___lam__0(lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__one__iso___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__one__iso___lam__1___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_ShannonBounds_ShannonBounds_strongPower__one__iso___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_strongPower__one__iso___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ShannonBounds_ShannonBounds_strongPower__one__iso___closed__0 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_strongPower__one__iso___closed__0_value;
static const lean_closure_object lp_ShannonBounds_ShannonBounds_strongPower__one__iso___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ShannonBounds_ShannonBounds_strongPower__one__iso___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ShannonBounds_ShannonBounds_strongPower__one__iso___closed__1 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_strongPower__one__iso___closed__1_value;
static const lean_ctor_object lp_ShannonBounds_ShannonBounds_strongPower__one__iso___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_ShannonBounds_ShannonBounds_strongPower__one__iso___closed__0_value),((lean_object*)&lp_ShannonBounds_ShannonBounds_strongPower__one__iso___closed__1_value)}};
static const lean_object* lp_ShannonBounds_ShannonBounds_strongPower__one__iso___closed__2 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_strongPower__one__iso___closed__2_value;
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__one__iso(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__one__iso___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_multiWordSet___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_multiWordSet___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_multiWordSet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_multiWordSet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_multiSubstSet___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_multiSubstSet___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_multiSubstSet___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_multiSubstSet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_multiSubstFamily___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_multiSubstFamily(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_multiSubstFamily___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_multiSubst___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_multiSubst___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_multiSubst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_multiSubst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_codeSet___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_codeSet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_multiCodeSet___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_multiCodeSet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_flatEquiv___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_flatEquiv___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_flatEquiv___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_flatEquiv(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_flatEquiv___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__mul__iso___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__mul__iso(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__mul__iso___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__congr___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__congr___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__congr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__congr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__congr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_w___redArg(lean_object* v_R_1_, lean_object* v_a_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = lean_apply_1(v_R_1_, v_a_2_);
v___x_4_ = l_List_lengthTR___redArg(v___x_3_);
lean_dec(v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_w(lean_object* v_V_5_, lean_object* v_A_6_, lean_object* v_inst_7_, lean_object* v_sep_8_, lean_object* v_G_9_, lean_object* v_inst_10_, lean_object* v_R_11_, lean_object* v_a_12_){
_start:
{
lean_object* v___x_13_; 
v___x_13_ = lp_ShannonBounds_ShannonBounds_Realisation_w___redArg(v_R_11_, v_a_12_);
return v___x_13_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_w___boxed(lean_object* v_V_14_, lean_object* v_A_15_, lean_object* v_inst_16_, lean_object* v_sep_17_, lean_object* v_G_18_, lean_object* v_inst_19_, lean_object* v_R_20_, lean_object* v_a_21_){
_start:
{
lean_object* v_res_22_; 
v_res_22_ = lp_ShannonBounds_ShannonBounds_Realisation_w(v_V_14_, v_A_15_, v_inst_16_, v_sep_17_, v_G_18_, v_inst_19_, v_R_20_, v_a_21_);
lean_dec_ref(v_inst_19_);
lean_dec_ref(v_sep_17_);
lean_dec(v_inst_16_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_wordSet___redArg___lam__0(lean_object* v_x_23_, lean_object* v_R_24_, lean_object* v_i_25_){
_start:
{
lean_object* v___x_26_; lean_object* v___x_27_; 
v___x_26_ = lean_apply_1(v_x_23_, v_i_25_);
v___x_27_ = lean_apply_1(v_R_24_, v___x_26_);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_wordSet___redArg(lean_object* v_R_28_, lean_object* v_q_29_, lean_object* v_x_30_){
_start:
{
lean_object* v___f_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; 
v___f_31_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_wordSet___redArg___lam__0), 3, 2);
lean_closure_set(v___f_31_, 0, v_x_30_);
lean_closure_set(v___f_31_, 1, v_R_28_);
lean_inc(v_q_29_);
v___x_32_ = lean_alloc_closure((void*)(l_instDecidableEqFin___boxed), 3, 1);
lean_closure_set(v___x_32_, 0, v_q_29_);
v___x_33_ = l_List_finRange(v_q_29_);
v___x_34_ = lp_mathlib_Fintype_piFinset___redArg(v___x_32_, v___x_33_, v___f_31_);
return v___x_34_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_wordSet(lean_object* v_V_35_, lean_object* v_A_36_, lean_object* v_inst_37_, lean_object* v_sep_38_, lean_object* v_G_39_, lean_object* v_inst_40_, lean_object* v_R_41_, lean_object* v_q_42_, lean_object* v_x_43_){
_start:
{
lean_object* v___x_44_; 
v___x_44_ = lp_ShannonBounds_ShannonBounds_wordSet___redArg(v_R_41_, v_q_42_, v_x_43_);
return v___x_44_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_wordSet___boxed(lean_object* v_V_45_, lean_object* v_A_46_, lean_object* v_inst_47_, lean_object* v_sep_48_, lean_object* v_G_49_, lean_object* v_inst_50_, lean_object* v_R_51_, lean_object* v_q_52_, lean_object* v_x_53_){
_start:
{
lean_object* v_res_54_; 
v_res_54_ = lp_ShannonBounds_ShannonBounds_wordSet(v_V_45_, v_A_46_, v_inst_47_, v_sep_48_, v_G_49_, v_inst_50_, v_R_51_, v_q_52_, v_x_53_);
lean_dec_ref(v_inst_50_);
lean_dec_ref(v_sep_48_);
lean_dec(v_inst_47_);
return v_res_54_;
}
}
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_substSet___redArg___lam__0(lean_object* v_inst_55_, lean_object* v_a_56_, lean_object* v___y_57_, lean_object* v___y_58_){
_start:
{
lean_object* v___x_59_; uint8_t v___x_60_; 
v___x_59_ = lean_apply_2(v_inst_55_, v___y_57_, v___y_58_);
v___x_60_ = lean_unbox(v___x_59_);
return v___x_60_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_substSet___redArg___lam__0___boxed(lean_object* v_inst_61_, lean_object* v_a_62_, lean_object* v___y_63_, lean_object* v___y_64_){
_start:
{
uint8_t v_res_65_; lean_object* v_r_66_; 
v_res_65_ = lp_ShannonBounds_ShannonBounds_substSet___redArg___lam__0(v_inst_61_, v_a_62_, v___y_63_, v___y_64_);
lean_dec(v_a_62_);
v_r_66_ = lean_box(v_res_65_);
return v_r_66_;
}
}
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_substSet___redArg___lam__1(lean_object* v___f_67_, lean_object* v___x_68_, lean_object* v_a_69_, lean_object* v_b_70_){
_start:
{
uint8_t v___x_71_; 
v___x_71_ = lp_mathlib_Fintype_decidablePiFintype___redArg(v___f_67_, v___x_68_, v_a_69_, v_b_70_);
return v___x_71_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_substSet___redArg___lam__1___boxed(lean_object* v___f_72_, lean_object* v___x_73_, lean_object* v_a_74_, lean_object* v_b_75_){
_start:
{
uint8_t v_res_76_; lean_object* v_r_77_; 
v_res_76_ = lp_ShannonBounds_ShannonBounds_substSet___redArg___lam__1(v___f_72_, v___x_73_, v_a_74_, v_b_75_);
v_r_77_ = lean_box(v_res_76_);
return v_r_77_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_substSet___redArg(lean_object* v_inst_78_, lean_object* v_inst_79_, lean_object* v_sep_80_, lean_object* v_G_81_, lean_object* v_inst_82_, lean_object* v_R_83_, lean_object* v_q_84_, lean_object* v_S_85_, lean_object* v_a_86_){
_start:
{
lean_object* v___f_87_; lean_object* v___x_88_; lean_object* v___f_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; 
v___f_87_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_substSet___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_87_, 0, v_inst_78_);
lean_inc(v_q_84_);
v___x_88_ = l_List_finRange(v_q_84_);
v___f_89_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_substSet___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_89_, 0, v___f_87_);
lean_closure_set(v___f_89_, 1, v___x_88_);
v___x_90_ = lean_apply_1(v_S_85_, v_a_86_);
v___x_91_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_wordSet___boxed), 9, 8);
lean_closure_set(v___x_91_, 0, lean_box(0));
lean_closure_set(v___x_91_, 1, lean_box(0));
lean_closure_set(v___x_91_, 2, v_inst_79_);
lean_closure_set(v___x_91_, 3, v_sep_80_);
lean_closure_set(v___x_91_, 4, v_G_81_);
lean_closure_set(v___x_91_, 5, v_inst_82_);
lean_closure_set(v___x_91_, 6, v_R_83_);
lean_closure_set(v___x_91_, 7, v_q_84_);
v___x_92_ = lp_mathlib_Finset_biUnion___redArg(v___f_89_, v___x_90_, v___x_91_);
return v___x_92_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_substSet(lean_object* v_V_93_, lean_object* v_inst_94_, lean_object* v_A_95_, lean_object* v_inst_96_, lean_object* v_sep_97_, lean_object* v_G_98_, lean_object* v_inst_99_, lean_object* v_R_100_, lean_object* v_q_101_, lean_object* v_S_102_, lean_object* v_a_103_){
_start:
{
lean_object* v___x_104_; 
v___x_104_ = lp_ShannonBounds_ShannonBounds_substSet___redArg(v_inst_94_, v_inst_96_, v_sep_97_, v_G_98_, v_inst_99_, v_R_100_, v_q_101_, v_S_102_, v_a_103_);
return v___x_104_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_subst___redArg(lean_object* v_inst_105_, lean_object* v_inst_106_, lean_object* v_sep_107_, lean_object* v_G_108_, lean_object* v_inst_109_, lean_object* v_R_110_, lean_object* v_q_111_, lean_object* v_S_112_){
_start:
{
lean_object* v___x_113_; 
v___x_113_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_substSet), 11, 10);
lean_closure_set(v___x_113_, 0, lean_box(0));
lean_closure_set(v___x_113_, 1, v_inst_105_);
lean_closure_set(v___x_113_, 2, lean_box(0));
lean_closure_set(v___x_113_, 3, v_inst_106_);
lean_closure_set(v___x_113_, 4, v_sep_107_);
lean_closure_set(v___x_113_, 5, v_G_108_);
lean_closure_set(v___x_113_, 6, v_inst_109_);
lean_closure_set(v___x_113_, 7, v_R_110_);
lean_closure_set(v___x_113_, 8, v_q_111_);
lean_closure_set(v___x_113_, 9, v_S_112_);
return v___x_113_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_subst(lean_object* v_V_114_, lean_object* v_inst_115_, lean_object* v_inst_116_, lean_object* v_A_117_, lean_object* v_inst_118_, lean_object* v_inst_119_, lean_object* v_sep_120_, lean_object* v_G_121_, lean_object* v_inst_122_, lean_object* v_R_123_, lean_object* v_q_124_, lean_object* v_S_125_){
_start:
{
lean_object* v___x_126_; 
v___x_126_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_substSet), 11, 10);
lean_closure_set(v___x_126_, 0, lean_box(0));
lean_closure_set(v___x_126_, 1, v_inst_116_);
lean_closure_set(v___x_126_, 2, lean_box(0));
lean_closure_set(v___x_126_, 3, v_inst_118_);
lean_closure_set(v___x_126_, 4, v_sep_120_);
lean_closure_set(v___x_126_, 5, v_G_121_);
lean_closure_set(v___x_126_, 6, v_inst_122_);
lean_closure_set(v___x_126_, 7, v_R_123_);
lean_closure_set(v___x_126_, 8, v_q_124_);
lean_closure_set(v___x_126_, 9, v_S_125_);
return v___x_126_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_subst___boxed(lean_object* v_V_127_, lean_object* v_inst_128_, lean_object* v_inst_129_, lean_object* v_A_130_, lean_object* v_inst_131_, lean_object* v_inst_132_, lean_object* v_sep_133_, lean_object* v_G_134_, lean_object* v_inst_135_, lean_object* v_R_136_, lean_object* v_q_137_, lean_object* v_S_138_){
_start:
{
lean_object* v_res_139_; 
v_res_139_ = lp_ShannonBounds_ShannonBounds_Realisation_subst(v_V_127_, v_inst_128_, v_inst_129_, v_A_130_, v_inst_131_, v_inst_132_, v_sep_133_, v_G_134_, v_inst_135_, v_R_136_, v_q_137_, v_S_138_);
lean_dec_ref(v_inst_132_);
lean_dec(v_inst_128_);
return v_res_139_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_familyStrongPower(lean_object* v_V_140_, lean_object* v_G_141_, lean_object* v_q_142_, lean_object* v_e_143_){
_start:
{
lean_object* v___x_144_; 
v___x_144_ = lean_box(0);
return v___x_144_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_familyStrongPower___boxed(lean_object* v_V_145_, lean_object* v_G_146_, lean_object* v_q_147_, lean_object* v_e_148_){
_start:
{
lean_object* v_res_149_; 
v_res_149_ = lp_ShannonBounds_ShannonBounds_familyStrongPower(v_V_145_, v_G_146_, v_q_147_, v_e_148_);
lean_dec_ref(v_e_148_);
lean_dec(v_q_147_);
return v_res_149_;
}
}
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_familyStrongPower__adj__decidable___redArg___lam__1(lean_object* v_e_150_, lean_object* v___f_151_, lean_object* v_a_152_, lean_object* v_a_153_, lean_object* v_b_154_){
_start:
{
lean_object* v___x_155_; lean_object* v___x_156_; uint8_t v___x_157_; 
v___x_155_ = lean_apply_1(v_e_150_, v_a_152_);
v___x_156_ = l_List_finRange(v___x_155_);
v___x_157_ = lp_mathlib_Fintype_decidablePiFintype___redArg(v___f_151_, v___x_156_, v_a_153_, v_b_154_);
return v___x_157_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_familyStrongPower__adj__decidable___redArg___lam__1___boxed(lean_object* v_e_158_, lean_object* v___f_159_, lean_object* v_a_160_, lean_object* v_a_161_, lean_object* v_b_162_){
_start:
{
uint8_t v_res_163_; lean_object* v_r_164_; 
v_res_163_ = lp_ShannonBounds_ShannonBounds_familyStrongPower__adj__decidable___redArg___lam__1(v_e_158_, v___f_159_, v_a_160_, v_a_161_, v_b_162_);
v_r_164_ = lean_box(v_res_163_);
return v_r_164_;
}
}
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_familyStrongPower__adj__decidable___redArg___lam__2(lean_object* v_e_165_, lean_object* v_f_166_, lean_object* v_g_167_, lean_object* v___f_168_, lean_object* v_inst_169_, lean_object* v_inst_170_, lean_object* v_a_171_){
_start:
{
lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; uint8_t v___x_176_; 
lean_inc_n(v_a_171_, 2);
v___x_172_ = lean_apply_1(v_e_165_, v_a_171_);
lean_inc(v___x_172_);
v___x_173_ = l_List_finRange(v___x_172_);
v___x_174_ = lean_apply_1(v_f_166_, v_a_171_);
v___x_175_ = lean_apply_1(v_g_167_, v_a_171_);
lean_inc(v___x_175_);
lean_inc(v___x_174_);
v___x_176_ = lp_mathlib_Fintype_decidablePiFintype___redArg(v___f_168_, v___x_173_, v___x_174_, v___x_175_);
if (v___x_176_ == 0)
{
uint8_t v___x_177_; 
v___x_177_ = lp_ShannonBounds_ShannonBounds_strongPower__adj__decidable___redArg(v_inst_169_, v_inst_170_, v___x_172_, v___x_174_, v___x_175_);
return v___x_177_;
}
else
{
lean_dec(v___x_175_);
lean_dec(v___x_174_);
lean_dec(v___x_172_);
lean_dec_ref(v_inst_170_);
lean_dec_ref(v_inst_169_);
return v___x_176_;
}
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_familyStrongPower__adj__decidable___redArg___lam__2___boxed(lean_object* v_e_178_, lean_object* v_f_179_, lean_object* v_g_180_, lean_object* v___f_181_, lean_object* v_inst_182_, lean_object* v_inst_183_, lean_object* v_a_184_){
_start:
{
uint8_t v_res_185_; lean_object* v_r_186_; 
v_res_185_ = lp_ShannonBounds_ShannonBounds_familyStrongPower__adj__decidable___redArg___lam__2(v_e_178_, v_f_179_, v_g_180_, v___f_181_, v_inst_182_, v_inst_183_, v_a_184_);
v_r_186_ = lean_box(v_res_185_);
return v_r_186_;
}
}
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_familyStrongPower__adj__decidable___redArg(lean_object* v_inst_187_, lean_object* v_inst_188_, lean_object* v_q_189_, lean_object* v_e_190_, lean_object* v_f_191_, lean_object* v_g_192_){
_start:
{
lean_object* v___f_193_; lean_object* v___f_194_; lean_object* v___x_195_; uint8_t v___x_196_; 
lean_inc_ref(v_inst_187_);
v___f_193_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_substSet___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_193_, 0, v_inst_187_);
lean_inc_ref(v___f_193_);
lean_inc_ref(v_e_190_);
v___f_194_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_familyStrongPower__adj__decidable___redArg___lam__1___boxed), 5, 2);
lean_closure_set(v___f_194_, 0, v_e_190_);
lean_closure_set(v___f_194_, 1, v___f_193_);
lean_inc(v_q_189_);
v___x_195_ = l_List_finRange(v_q_189_);
lean_inc(v_g_192_);
lean_inc(v_f_191_);
v___x_196_ = lp_mathlib_Fintype_decidablePiFintype___redArg(v___f_194_, v___x_195_, v_f_191_, v_g_192_);
if (v___x_196_ == 0)
{
lean_object* v___f_197_; uint8_t v___x_198_; 
v___f_197_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_familyStrongPower__adj__decidable___redArg___lam__2___boxed), 7, 6);
lean_closure_set(v___f_197_, 0, v_e_190_);
lean_closure_set(v___f_197_, 1, v_f_191_);
lean_closure_set(v___f_197_, 2, v_g_192_);
lean_closure_set(v___f_197_, 3, v___f_193_);
lean_closure_set(v___f_197_, 4, v_inst_187_);
lean_closure_set(v___f_197_, 5, v_inst_188_);
v___x_198_ = l_Nat_decidableForallFin___redArg(v_q_189_, v___f_197_);
return v___x_198_;
}
else
{
uint8_t v___x_199_; 
lean_dec_ref(v___f_193_);
lean_dec(v_g_192_);
lean_dec(v_f_191_);
lean_dec_ref(v_e_190_);
lean_dec(v_q_189_);
lean_dec_ref(v_inst_188_);
lean_dec_ref(v_inst_187_);
v___x_199_ = 0;
return v___x_199_;
}
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_familyStrongPower__adj__decidable___redArg___boxed(lean_object* v_inst_200_, lean_object* v_inst_201_, lean_object* v_q_202_, lean_object* v_e_203_, lean_object* v_f_204_, lean_object* v_g_205_){
_start:
{
uint8_t v_res_206_; lean_object* v_r_207_; 
v_res_206_ = lp_ShannonBounds_ShannonBounds_familyStrongPower__adj__decidable___redArg(v_inst_200_, v_inst_201_, v_q_202_, v_e_203_, v_f_204_, v_g_205_);
v_r_207_ = lean_box(v_res_206_);
return v_r_207_;
}
}
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_familyStrongPower__adj__decidable(lean_object* v_V_208_, lean_object* v_inst_209_, lean_object* v_G_210_, lean_object* v_inst_211_, lean_object* v_q_212_, lean_object* v_e_213_, lean_object* v_f_214_, lean_object* v_g_215_){
_start:
{
uint8_t v___x_216_; 
v___x_216_ = lp_ShannonBounds_ShannonBounds_familyStrongPower__adj__decidable___redArg(v_inst_209_, v_inst_211_, v_q_212_, v_e_213_, v_f_214_, v_g_215_);
return v___x_216_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_familyStrongPower__adj__decidable___boxed(lean_object* v_V_217_, lean_object* v_inst_218_, lean_object* v_G_219_, lean_object* v_inst_220_, lean_object* v_q_221_, lean_object* v_e_222_, lean_object* v_f_223_, lean_object* v_g_224_){
_start:
{
uint8_t v_res_225_; lean_object* v_r_226_; 
v_res_225_ = lp_ShannonBounds_ShannonBounds_familyStrongPower__adj__decidable(v_V_217_, v_inst_218_, v_G_219_, v_inst_220_, v_q_221_, v_e_222_, v_f_223_, v_g_224_);
v_r_226_ = lean_box(v_res_225_);
return v_r_226_;
}
}
static lean_object* _init_lp_ShannonBounds_ShannonBounds_sumEquiv___redArg___closed__0(void){
_start:
{
lean_object* v___x_227_; 
v___x_227_ = lp_mathlib_Equiv_piCurry(lean_box(0), lean_box(0), lean_box(0));
return v___x_227_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_sumEquiv___redArg(lean_object* v_q_228_, lean_object* v_e_229_){
_start:
{
lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; 
v___x_230_ = lp_mathlib_finSigmaFinEquiv(v_q_228_, v_e_229_);
v___x_231_ = lp_mathlib_Equiv_symm___redArg(v___x_230_);
v___x_232_ = lp_mathlib_Equiv_piCongrLeft_x27___redArg(v___x_231_);
v___x_233_ = lean_obj_once(&lp_ShannonBounds_ShannonBounds_sumEquiv___redArg___closed__0, &lp_ShannonBounds_ShannonBounds_sumEquiv___redArg___closed__0_once, _init_lp_ShannonBounds_ShannonBounds_sumEquiv___redArg___closed__0);
v___x_234_ = lp_mathlib_Equiv_trans___redArg(v___x_232_, v___x_233_);
return v___x_234_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_sumEquiv___redArg___boxed(lean_object* v_q_235_, lean_object* v_e_236_){
_start:
{
lean_object* v_res_237_; 
v_res_237_ = lp_ShannonBounds_ShannonBounds_sumEquiv___redArg(v_q_235_, v_e_236_);
lean_dec(v_q_235_);
return v_res_237_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_sumEquiv(lean_object* v_q_238_, lean_object* v_e_239_, lean_object* v_V_240_){
_start:
{
lean_object* v___x_241_; 
v___x_241_ = lp_ShannonBounds_ShannonBounds_sumEquiv___redArg(v_q_238_, v_e_239_);
return v___x_241_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_sumEquiv___boxed(lean_object* v_q_242_, lean_object* v_e_243_, lean_object* v_V_244_){
_start:
{
lean_object* v_res_245_; 
v_res_245_ = lp_ShannonBounds_ShannonBounds_sumEquiv(v_q_242_, v_e_243_, v_V_244_);
lean_dec(v_q_242_);
return v_res_245_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_flattenSumEquiv___redArg(lean_object* v_q_246_, lean_object* v_e_247_){
_start:
{
lean_object* v___x_248_; lean_object* v___x_249_; 
v___x_248_ = lp_ShannonBounds_ShannonBounds_sumEquiv___redArg(v_q_246_, v_e_247_);
v___x_249_ = lp_mathlib_Equiv_symm___redArg(v___x_248_);
return v___x_249_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_flattenSumEquiv___redArg___boxed(lean_object* v_q_250_, lean_object* v_e_251_){
_start:
{
lean_object* v_res_252_; 
v_res_252_ = lp_ShannonBounds_ShannonBounds_flattenSumEquiv___redArg(v_q_250_, v_e_251_);
lean_dec(v_q_250_);
return v_res_252_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_flattenSumEquiv(lean_object* v_q_253_, lean_object* v_e_254_, lean_object* v_V_255_){
_start:
{
lean_object* v___x_256_; 
v___x_256_ = lp_ShannonBounds_ShannonBounds_flattenSumEquiv___redArg(v_q_253_, v_e_254_);
return v___x_256_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_flattenSumEquiv___boxed(lean_object* v_q_257_, lean_object* v_e_258_, lean_object* v_V_259_){
_start:
{
lean_object* v_res_260_; 
v_res_260_ = lp_ShannonBounds_ShannonBounds_flattenSumEquiv(v_q_257_, v_e_258_, v_V_259_);
lean_dec(v_q_257_);
return v_res_260_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__sum__iso___redArg(lean_object* v_q_261_, lean_object* v_e_262_){
_start:
{
lean_object* v___x_263_; 
v___x_263_ = lp_ShannonBounds_ShannonBounds_sumEquiv___redArg(v_q_261_, v_e_262_);
return v___x_263_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__sum__iso___redArg___boxed(lean_object* v_q_264_, lean_object* v_e_265_){
_start:
{
lean_object* v_res_266_; 
v_res_266_ = lp_ShannonBounds_ShannonBounds_strongPower__sum__iso___redArg(v_q_264_, v_e_265_);
lean_dec(v_q_264_);
return v_res_266_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__sum__iso(lean_object* v_V_267_, lean_object* v_inst_268_, lean_object* v_G_269_, lean_object* v_inst_270_, lean_object* v_q_271_, lean_object* v_e_272_){
_start:
{
lean_object* v___x_273_; 
v___x_273_ = lp_ShannonBounds_ShannonBounds_sumEquiv___redArg(v_q_271_, v_e_272_);
return v___x_273_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__sum__iso___boxed(lean_object* v_V_274_, lean_object* v_inst_275_, lean_object* v_G_276_, lean_object* v_inst_277_, lean_object* v_q_278_, lean_object* v_e_279_){
_start:
{
lean_object* v_res_280_; 
v_res_280_ = lp_ShannonBounds_ShannonBounds_strongPower__sum__iso(v_V_274_, v_inst_275_, v_G_276_, v_inst_277_, v_q_278_, v_e_279_);
lean_dec(v_q_278_);
lean_dec_ref(v_inst_277_);
lean_dec_ref(v_inst_275_);
return v_res_280_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_mapIso___redArg___lam__0(lean_object* v_f_281_, lean_object* v___y_282_){
_start:
{
lean_object* v___x_283_; 
v___x_283_ = lp_mathlib_Equiv_toEmbedding___redArg___lam__0(v_f_281_, v___y_282_);
return v___x_283_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_mapIso___redArg___lam__1(lean_object* v_R_284_, lean_object* v_inst_285_, lean_object* v___f_286_, lean_object* v_a_287_){
_start:
{
lean_object* v___x_288_; lean_object* v___x_289_; 
v___x_288_ = lean_apply_1(v_R_284_, v_a_287_);
v___x_289_ = lp_mathlib_Finset_image___redArg(v_inst_285_, v___f_286_, v___x_288_);
return v___x_289_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_mapIso___redArg(lean_object* v_inst_290_, lean_object* v_R_291_, lean_object* v_f_292_){
_start:
{
lean_object* v___f_293_; lean_object* v___f_294_; 
v___f_293_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_Realisation_mapIso___redArg___lam__0), 2, 1);
lean_closure_set(v___f_293_, 0, v_f_292_);
v___f_294_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_Realisation_mapIso___redArg___lam__1), 4, 3);
lean_closure_set(v___f_294_, 0, v_R_291_);
lean_closure_set(v___f_294_, 1, v_inst_290_);
lean_closure_set(v___f_294_, 2, v___f_293_);
return v___f_294_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_mapIso(lean_object* v_V_295_, lean_object* v_A_296_, lean_object* v_inst_297_, lean_object* v_sep_298_, lean_object* v_G_299_, lean_object* v_inst_300_, lean_object* v_W_301_, lean_object* v_inst_302_, lean_object* v_inst_303_, lean_object* v_H_304_, lean_object* v_inst_305_, lean_object* v_R_306_, lean_object* v_f_307_){
_start:
{
lean_object* v___x_308_; 
v___x_308_ = lp_ShannonBounds_ShannonBounds_Realisation_mapIso___redArg(v_inst_303_, v_R_306_, v_f_307_);
return v___x_308_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_mapIso___boxed(lean_object* v_V_309_, lean_object* v_A_310_, lean_object* v_inst_311_, lean_object* v_sep_312_, lean_object* v_G_313_, lean_object* v_inst_314_, lean_object* v_W_315_, lean_object* v_inst_316_, lean_object* v_inst_317_, lean_object* v_H_318_, lean_object* v_inst_319_, lean_object* v_R_320_, lean_object* v_f_321_){
_start:
{
lean_object* v_res_322_; 
v_res_322_ = lp_ShannonBounds_ShannonBounds_Realisation_mapIso(v_V_309_, v_A_310_, v_inst_311_, v_sep_312_, v_G_313_, v_inst_314_, v_W_315_, v_inst_316_, v_inst_317_, v_H_318_, v_inst_319_, v_R_320_, v_f_321_);
lean_dec_ref(v_inst_319_);
lean_dec(v_inst_316_);
lean_dec_ref(v_inst_314_);
lean_dec_ref(v_sep_312_);
lean_dec(v_inst_311_);
return v_res_322_;
}
}
static lean_object* _init_lp_ShannonBounds_ShannonBounds_strongPower__one__iso___lam__0___closed__0(void){
_start:
{
lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; 
v___x_323_ = lean_unsigned_to_nat(1u);
v___x_324_ = lean_unsigned_to_nat(0u);
v___x_325_ = lean_nat_mod(v___x_324_, v___x_323_);
return v___x_325_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__one__iso___lam__0(lean_object* v_f_326_){
_start:
{
lean_object* v___x_327_; lean_object* v___x_328_; 
v___x_327_ = lean_obj_once(&lp_ShannonBounds_ShannonBounds_strongPower__one__iso___lam__0___closed__0, &lp_ShannonBounds_ShannonBounds_strongPower__one__iso___lam__0___closed__0_once, _init_lp_ShannonBounds_ShannonBounds_strongPower__one__iso___lam__0___closed__0);
v___x_328_ = lean_apply_1(v_f_326_, v___x_327_);
return v___x_328_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__one__iso___lam__1(lean_object* v_x_329_, lean_object* v_x_330_){
_start:
{
lean_inc(v_x_329_);
return v_x_329_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__one__iso___lam__1___boxed(lean_object* v_x_331_, lean_object* v_x_332_){
_start:
{
lean_object* v_res_333_; 
v_res_333_ = lp_ShannonBounds_ShannonBounds_strongPower__one__iso___lam__1(v_x_331_, v_x_332_);
lean_dec(v_x_332_);
lean_dec(v_x_331_);
return v_res_333_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__one__iso(lean_object* v_V_339_, lean_object* v_G_340_, lean_object* v_inst_341_){
_start:
{
lean_object* v___x_342_; 
v___x_342_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_strongPower__one__iso___closed__2));
return v___x_342_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__one__iso___boxed(lean_object* v_V_343_, lean_object* v_G_344_, lean_object* v_inst_345_){
_start:
{
lean_object* v_res_346_; 
v_res_346_ = lp_ShannonBounds_ShannonBounds_strongPower__one__iso(v_V_343_, v_G_344_, v_inst_345_);
lean_dec_ref(v_inst_345_);
return v_res_346_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_multiWordSet___redArg___lam__0(lean_object* v_x_347_, lean_object* v_R_348_, lean_object* v_i_349_){
_start:
{
lean_object* v___x_350_; lean_object* v___x_351_; 
lean_inc(v_i_349_);
v___x_350_ = lean_apply_1(v_x_347_, v_i_349_);
v___x_351_ = lean_apply_2(v_R_348_, v_i_349_, v___x_350_);
return v___x_351_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_multiWordSet___redArg(lean_object* v_q_352_, lean_object* v_R_353_, lean_object* v_x_354_){
_start:
{
lean_object* v___f_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; 
v___f_355_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_multiWordSet___redArg___lam__0), 3, 2);
lean_closure_set(v___f_355_, 0, v_x_354_);
lean_closure_set(v___f_355_, 1, v_R_353_);
lean_inc(v_q_352_);
v___x_356_ = lean_alloc_closure((void*)(l_instDecidableEqFin___boxed), 3, 1);
lean_closure_set(v___x_356_, 0, v_q_352_);
v___x_357_ = l_List_finRange(v_q_352_);
v___x_358_ = lp_mathlib_Fintype_piFinset___redArg(v___x_356_, v___x_357_, v___f_355_);
return v___x_358_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_multiWordSet(lean_object* v_V_359_, lean_object* v_inst_360_, lean_object* v_A_361_, lean_object* v_inst_362_, lean_object* v_sep_363_, lean_object* v_G_364_, lean_object* v_inst_365_, lean_object* v_q_366_, lean_object* v_e_367_, lean_object* v_R_368_, lean_object* v_x_369_){
_start:
{
lean_object* v___x_370_; 
v___x_370_ = lp_ShannonBounds_ShannonBounds_multiWordSet___redArg(v_q_366_, v_R_368_, v_x_369_);
return v___x_370_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_multiWordSet___boxed(lean_object* v_V_371_, lean_object* v_inst_372_, lean_object* v_A_373_, lean_object* v_inst_374_, lean_object* v_sep_375_, lean_object* v_G_376_, lean_object* v_inst_377_, lean_object* v_q_378_, lean_object* v_e_379_, lean_object* v_R_380_, lean_object* v_x_381_){
_start:
{
lean_object* v_res_382_; 
v_res_382_ = lp_ShannonBounds_ShannonBounds_multiWordSet(v_V_371_, v_inst_372_, v_A_373_, v_inst_374_, v_sep_375_, v_G_376_, v_inst_377_, v_q_378_, v_e_379_, v_R_380_, v_x_381_);
lean_dec_ref(v_e_379_);
lean_dec_ref(v_inst_377_);
lean_dec_ref(v_sep_375_);
lean_dec(v_inst_374_);
lean_dec_ref(v_inst_372_);
return v_res_382_;
}
}
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_multiSubstSet___redArg___lam__2(lean_object* v___f_383_, lean_object* v___x_384_, lean_object* v_a_385_, lean_object* v_b_386_){
_start:
{
uint8_t v___x_387_; 
v___x_387_ = lp_mathlib_Fintype_decidablePiFintype___redArg(v___f_383_, v___x_384_, v_a_385_, v_b_386_);
return v___x_387_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_multiSubstSet___redArg___lam__2___boxed(lean_object* v___f_388_, lean_object* v___x_389_, lean_object* v_a_390_, lean_object* v_b_391_){
_start:
{
uint8_t v_res_392_; lean_object* v_r_393_; 
v_res_392_ = lp_ShannonBounds_ShannonBounds_multiSubstSet___redArg___lam__2(v___f_388_, v___x_389_, v_a_390_, v_b_391_);
v_r_393_ = lean_box(v_res_392_);
return v_r_393_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_multiSubstSet___redArg(lean_object* v_inst_394_, lean_object* v_inst_395_, lean_object* v_sep_396_, lean_object* v_G_397_, lean_object* v_inst_398_, lean_object* v_q_399_, lean_object* v_e_400_, lean_object* v_R_401_, lean_object* v_S_402_, lean_object* v_a_403_){
_start:
{
lean_object* v___f_404_; lean_object* v___f_405_; lean_object* v___x_406_; lean_object* v___f_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; 
lean_inc_ref(v_inst_394_);
v___f_404_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_substSet___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_404_, 0, v_inst_394_);
lean_inc_ref(v_e_400_);
v___f_405_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_familyStrongPower__adj__decidable___redArg___lam__1___boxed), 5, 2);
lean_closure_set(v___f_405_, 0, v_e_400_);
lean_closure_set(v___f_405_, 1, v___f_404_);
lean_inc(v_q_399_);
v___x_406_ = l_List_finRange(v_q_399_);
v___f_407_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_multiSubstSet___redArg___lam__2___boxed), 4, 2);
lean_closure_set(v___f_407_, 0, v___f_405_);
lean_closure_set(v___f_407_, 1, v___x_406_);
v___x_408_ = lean_apply_1(v_S_402_, v_a_403_);
v___x_409_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_multiWordSet___boxed), 11, 10);
lean_closure_set(v___x_409_, 0, lean_box(0));
lean_closure_set(v___x_409_, 1, v_inst_394_);
lean_closure_set(v___x_409_, 2, lean_box(0));
lean_closure_set(v___x_409_, 3, v_inst_395_);
lean_closure_set(v___x_409_, 4, v_sep_396_);
lean_closure_set(v___x_409_, 5, v_G_397_);
lean_closure_set(v___x_409_, 6, v_inst_398_);
lean_closure_set(v___x_409_, 7, v_q_399_);
lean_closure_set(v___x_409_, 8, v_e_400_);
lean_closure_set(v___x_409_, 9, v_R_401_);
v___x_410_ = lp_mathlib_Finset_biUnion___redArg(v___f_407_, v___x_408_, v___x_409_);
return v___x_410_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_multiSubstSet(lean_object* v_V_411_, lean_object* v_inst_412_, lean_object* v_A_413_, lean_object* v_inst_414_, lean_object* v_sep_415_, lean_object* v_G_416_, lean_object* v_inst_417_, lean_object* v_q_418_, lean_object* v_e_419_, lean_object* v_R_420_, lean_object* v_S_421_, lean_object* v_a_422_){
_start:
{
lean_object* v___x_423_; 
v___x_423_ = lp_ShannonBounds_ShannonBounds_multiSubstSet___redArg(v_inst_412_, v_inst_414_, v_sep_415_, v_G_416_, v_inst_417_, v_q_418_, v_e_419_, v_R_420_, v_S_421_, v_a_422_);
return v___x_423_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_multiSubstFamily___redArg(lean_object* v_inst_424_, lean_object* v_inst_425_, lean_object* v_sep_426_, lean_object* v_G_427_, lean_object* v_inst_428_, lean_object* v_q_429_, lean_object* v_e_430_, lean_object* v_R_431_, lean_object* v_S_432_){
_start:
{
lean_object* v___x_433_; 
v___x_433_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_multiSubstSet), 12, 11);
lean_closure_set(v___x_433_, 0, lean_box(0));
lean_closure_set(v___x_433_, 1, v_inst_424_);
lean_closure_set(v___x_433_, 2, lean_box(0));
lean_closure_set(v___x_433_, 3, v_inst_425_);
lean_closure_set(v___x_433_, 4, v_sep_426_);
lean_closure_set(v___x_433_, 5, v_G_427_);
lean_closure_set(v___x_433_, 6, v_inst_428_);
lean_closure_set(v___x_433_, 7, v_q_429_);
lean_closure_set(v___x_433_, 8, v_e_430_);
lean_closure_set(v___x_433_, 9, v_R_431_);
lean_closure_set(v___x_433_, 10, v_S_432_);
return v___x_433_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_multiSubstFamily(lean_object* v_V_434_, lean_object* v_inst_435_, lean_object* v_inst_436_, lean_object* v_A_437_, lean_object* v_inst_438_, lean_object* v_inst_439_, lean_object* v_sep_440_, lean_object* v_G_441_, lean_object* v_inst_442_, lean_object* v_q_443_, lean_object* v_e_444_, lean_object* v_R_445_, lean_object* v_S_446_){
_start:
{
lean_object* v___x_447_; 
v___x_447_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_multiSubstSet), 12, 11);
lean_closure_set(v___x_447_, 0, lean_box(0));
lean_closure_set(v___x_447_, 1, v_inst_436_);
lean_closure_set(v___x_447_, 2, lean_box(0));
lean_closure_set(v___x_447_, 3, v_inst_438_);
lean_closure_set(v___x_447_, 4, v_sep_440_);
lean_closure_set(v___x_447_, 5, v_G_441_);
lean_closure_set(v___x_447_, 6, v_inst_442_);
lean_closure_set(v___x_447_, 7, v_q_443_);
lean_closure_set(v___x_447_, 8, v_e_444_);
lean_closure_set(v___x_447_, 9, v_R_445_);
lean_closure_set(v___x_447_, 10, v_S_446_);
return v___x_447_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_multiSubstFamily___boxed(lean_object* v_V_448_, lean_object* v_inst_449_, lean_object* v_inst_450_, lean_object* v_A_451_, lean_object* v_inst_452_, lean_object* v_inst_453_, lean_object* v_sep_454_, lean_object* v_G_455_, lean_object* v_inst_456_, lean_object* v_q_457_, lean_object* v_e_458_, lean_object* v_R_459_, lean_object* v_S_460_){
_start:
{
lean_object* v_res_461_; 
v_res_461_ = lp_ShannonBounds_ShannonBounds_Realisation_multiSubstFamily(v_V_448_, v_inst_449_, v_inst_450_, v_A_451_, v_inst_452_, v_inst_453_, v_sep_454_, v_G_455_, v_inst_456_, v_q_457_, v_e_458_, v_R_459_, v_S_460_);
lean_dec_ref(v_inst_453_);
lean_dec(v_inst_449_);
return v_res_461_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_multiSubst___redArg___lam__1(lean_object* v_e_462_, lean_object* v_i_463_){
_start:
{
lean_object* v___x_464_; 
v___x_464_ = lean_apply_1(v_e_462_, v_i_463_);
return v___x_464_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_multiSubst___redArg(lean_object* v_inst_465_, lean_object* v_inst_466_, lean_object* v_sep_467_, lean_object* v_G_468_, lean_object* v_inst_469_, lean_object* v_q_470_, lean_object* v_e_471_, lean_object* v_R_472_, lean_object* v_S_473_){
_start:
{
lean_object* v___f_474_; lean_object* v___f_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___f_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; 
lean_inc_ref(v_inst_465_);
v___f_474_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_substSet___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_474_, 0, v_inst_465_);
lean_inc_ref_n(v_e_471_, 2);
v___f_475_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_Realisation_multiSubst___redArg___lam__1), 2, 1);
lean_closure_set(v___f_475_, 0, v_e_471_);
v___x_476_ = lp_mathlib_Nat_instAddCancelCommMonoid;
lean_inc_n(v_q_470_, 2);
v___x_477_ = l_List_finRange(v_q_470_);
v___x_478_ = lp_mathlib_Finset_sum___redArg(v___x_476_, v___x_477_, v___f_475_);
v___x_479_ = l_List_finRange(v___x_478_);
v___f_480_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_substSet___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_480_, 0, v___f_474_);
lean_closure_set(v___f_480_, 1, v___x_479_);
v___x_481_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_multiSubstSet), 12, 11);
lean_closure_set(v___x_481_, 0, lean_box(0));
lean_closure_set(v___x_481_, 1, v_inst_465_);
lean_closure_set(v___x_481_, 2, lean_box(0));
lean_closure_set(v___x_481_, 3, v_inst_466_);
lean_closure_set(v___x_481_, 4, v_sep_467_);
lean_closure_set(v___x_481_, 5, v_G_468_);
lean_closure_set(v___x_481_, 6, v_inst_469_);
lean_closure_set(v___x_481_, 7, v_q_470_);
lean_closure_set(v___x_481_, 8, v_e_471_);
lean_closure_set(v___x_481_, 9, v_R_472_);
lean_closure_set(v___x_481_, 10, v_S_473_);
v___x_482_ = lp_ShannonBounds_ShannonBounds_sumEquiv___redArg(v_q_470_, v_e_471_);
lean_dec(v_q_470_);
v___x_483_ = lp_mathlib_Equiv_symm___redArg(v___x_482_);
v___x_484_ = lp_ShannonBounds_ShannonBounds_Realisation_mapIso___redArg(v___f_480_, v___x_481_, v___x_483_);
return v___x_484_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_multiSubst(lean_object* v_V_485_, lean_object* v_inst_486_, lean_object* v_inst_487_, lean_object* v_A_488_, lean_object* v_inst_489_, lean_object* v_inst_490_, lean_object* v_sep_491_, lean_object* v_G_492_, lean_object* v_inst_493_, lean_object* v_q_494_, lean_object* v_e_495_, lean_object* v_R_496_, lean_object* v_S_497_){
_start:
{
lean_object* v___x_498_; 
v___x_498_ = lp_ShannonBounds_ShannonBounds_Realisation_multiSubst___redArg(v_inst_487_, v_inst_489_, v_sep_491_, v_G_492_, v_inst_493_, v_q_494_, v_e_495_, v_R_496_, v_S_497_);
return v___x_498_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_Realisation_multiSubst___boxed(lean_object* v_V_499_, lean_object* v_inst_500_, lean_object* v_inst_501_, lean_object* v_A_502_, lean_object* v_inst_503_, lean_object* v_inst_504_, lean_object* v_sep_505_, lean_object* v_G_506_, lean_object* v_inst_507_, lean_object* v_q_508_, lean_object* v_e_509_, lean_object* v_R_510_, lean_object* v_S_511_){
_start:
{
lean_object* v_res_512_; 
v_res_512_ = lp_ShannonBounds_ShannonBounds_Realisation_multiSubst(v_V_499_, v_inst_500_, v_inst_501_, v_A_502_, v_inst_503_, v_inst_504_, v_sep_505_, v_G_506_, v_inst_507_, v_q_508_, v_e_509_, v_R_510_, v_S_511_);
lean_dec_ref(v_inst_504_);
lean_dec(v_inst_500_);
return v_res_512_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_codeSet___redArg(lean_object* v_inst_513_, lean_object* v_inst_514_, lean_object* v_sep_515_, lean_object* v_G_516_, lean_object* v_inst_517_, lean_object* v_R_518_, lean_object* v_r_519_, lean_object* v_K_520_){
_start:
{
lean_object* v___f_521_; lean_object* v___x_522_; lean_object* v___f_523_; lean_object* v___x_524_; lean_object* v___x_525_; 
v___f_521_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_substSet___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_521_, 0, v_inst_513_);
lean_inc(v_r_519_);
v___x_522_ = l_List_finRange(v_r_519_);
v___f_523_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_substSet___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_523_, 0, v___f_521_);
lean_closure_set(v___f_523_, 1, v___x_522_);
v___x_524_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_wordSet___boxed), 9, 8);
lean_closure_set(v___x_524_, 0, lean_box(0));
lean_closure_set(v___x_524_, 1, lean_box(0));
lean_closure_set(v___x_524_, 2, v_inst_514_);
lean_closure_set(v___x_524_, 3, v_sep_515_);
lean_closure_set(v___x_524_, 4, v_G_516_);
lean_closure_set(v___x_524_, 5, v_inst_517_);
lean_closure_set(v___x_524_, 6, v_R_518_);
lean_closure_set(v___x_524_, 7, v_r_519_);
v___x_525_ = lp_mathlib_Finset_biUnion___redArg(v___f_523_, v_K_520_, v___x_524_);
return v___x_525_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_codeSet(lean_object* v_V_526_, lean_object* v_inst_527_, lean_object* v_A_528_, lean_object* v_inst_529_, lean_object* v_sep_530_, lean_object* v_G_531_, lean_object* v_inst_532_, lean_object* v_R_533_, lean_object* v_r_534_, lean_object* v_K_535_){
_start:
{
lean_object* v___x_536_; 
v___x_536_ = lp_ShannonBounds_ShannonBounds_codeSet___redArg(v_inst_527_, v_inst_529_, v_sep_530_, v_G_531_, v_inst_532_, v_R_533_, v_r_534_, v_K_535_);
return v___x_536_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_multiCodeSet___redArg(lean_object* v_inst_537_, lean_object* v_inst_538_, lean_object* v_sep_539_, lean_object* v_G_540_, lean_object* v_inst_541_, lean_object* v_r_542_, lean_object* v_e_543_, lean_object* v_R_544_, lean_object* v_K_545_){
_start:
{
lean_object* v___f_546_; lean_object* v___f_547_; lean_object* v___x_548_; lean_object* v___f_549_; lean_object* v___x_550_; lean_object* v___x_551_; 
lean_inc_ref(v_inst_537_);
v___f_546_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_substSet___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_546_, 0, v_inst_537_);
lean_inc_ref(v_e_543_);
v___f_547_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_familyStrongPower__adj__decidable___redArg___lam__1___boxed), 5, 2);
lean_closure_set(v___f_547_, 0, v_e_543_);
lean_closure_set(v___f_547_, 1, v___f_546_);
lean_inc(v_r_542_);
v___x_548_ = l_List_finRange(v_r_542_);
v___f_549_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_multiSubstSet___redArg___lam__2___boxed), 4, 2);
lean_closure_set(v___f_549_, 0, v___f_547_);
lean_closure_set(v___f_549_, 1, v___x_548_);
v___x_550_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_multiWordSet___boxed), 11, 10);
lean_closure_set(v___x_550_, 0, lean_box(0));
lean_closure_set(v___x_550_, 1, v_inst_537_);
lean_closure_set(v___x_550_, 2, lean_box(0));
lean_closure_set(v___x_550_, 3, v_inst_538_);
lean_closure_set(v___x_550_, 4, v_sep_539_);
lean_closure_set(v___x_550_, 5, v_G_540_);
lean_closure_set(v___x_550_, 6, v_inst_541_);
lean_closure_set(v___x_550_, 7, v_r_542_);
lean_closure_set(v___x_550_, 8, v_e_543_);
lean_closure_set(v___x_550_, 9, v_R_544_);
v___x_551_ = lp_mathlib_Finset_biUnion___redArg(v___f_549_, v_K_545_, v___x_550_);
return v___x_551_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_multiCodeSet(lean_object* v_V_552_, lean_object* v_inst_553_, lean_object* v_A_554_, lean_object* v_inst_555_, lean_object* v_sep_556_, lean_object* v_G_557_, lean_object* v_inst_558_, lean_object* v_r_559_, lean_object* v_e_560_, lean_object* v_R_561_, lean_object* v_K_562_){
_start:
{
lean_object* v___x_563_; 
v___x_563_ = lp_ShannonBounds_ShannonBounds_multiCodeSet___redArg(v_inst_553_, v_inst_555_, v_sep_556_, v_G_557_, v_inst_558_, v_r_559_, v_e_560_, v_R_561_, v_K_562_);
return v___x_563_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_flatEquiv___redArg___lam__0(lean_object* v_r_564_, lean_object* v_f_565_, lean_object* v_i_566_, lean_object* v_j_567_){
_start:
{
lean_object* v___x_568_; lean_object* v_toFun_569_; lean_object* v___x_571_; uint8_t v_isShared_572_; uint8_t v_isSharedCheck_578_; 
v___x_568_ = lp_mathlib_finProdFinEquiv___redArg(v_r_564_);
v_toFun_569_ = lean_ctor_get(v___x_568_, 0);
v_isSharedCheck_578_ = !lean_is_exclusive(v___x_568_);
if (v_isSharedCheck_578_ == 0)
{
lean_object* v_unused_579_; 
v_unused_579_ = lean_ctor_get(v___x_568_, 1);
lean_dec(v_unused_579_);
v___x_571_ = v___x_568_;
v_isShared_572_ = v_isSharedCheck_578_;
goto v_resetjp_570_;
}
else
{
lean_inc(v_toFun_569_);
lean_dec(v___x_568_);
v___x_571_ = lean_box(0);
v_isShared_572_ = v_isSharedCheck_578_;
goto v_resetjp_570_;
}
v_resetjp_570_:
{
lean_object* v___x_574_; 
if (v_isShared_572_ == 0)
{
lean_ctor_set(v___x_571_, 1, v_i_566_);
lean_ctor_set(v___x_571_, 0, v_j_567_);
v___x_574_ = v___x_571_;
goto v_reusejp_573_;
}
else
{
lean_object* v_reuseFailAlloc_577_; 
v_reuseFailAlloc_577_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_577_, 0, v_j_567_);
lean_ctor_set(v_reuseFailAlloc_577_, 1, v_i_566_);
v___x_574_ = v_reuseFailAlloc_577_;
goto v_reusejp_573_;
}
v_reusejp_573_:
{
lean_object* v___x_575_; lean_object* v___x_576_; 
v___x_575_ = lean_apply_1(v_toFun_569_, v___x_574_);
v___x_576_ = lean_apply_1(v_f_565_, v___x_575_);
return v___x_576_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_flatEquiv___redArg___lam__1(lean_object* v_r_580_, lean_object* v_g_581_, lean_object* v_k_582_){
_start:
{
lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v_toFun_585_; lean_object* v___x_586_; lean_object* v_fst_587_; lean_object* v_snd_588_; lean_object* v___x_589_; 
v___x_583_ = lp_mathlib_finProdFinEquiv___redArg(v_r_580_);
v___x_584_ = lp_mathlib_Equiv_symm___redArg(v___x_583_);
v_toFun_585_ = lean_ctor_get(v___x_584_, 0);
lean_inc(v_toFun_585_);
lean_dec_ref(v___x_584_);
v___x_586_ = lean_apply_1(v_toFun_585_, v_k_582_);
v_fst_587_ = lean_ctor_get(v___x_586_, 0);
lean_inc(v_fst_587_);
v_snd_588_ = lean_ctor_get(v___x_586_, 1);
lean_inc(v_snd_588_);
lean_dec_ref(v___x_586_);
v___x_589_ = lean_apply_2(v_g_581_, v_snd_588_, v_fst_587_);
return v___x_589_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_flatEquiv___redArg(lean_object* v_r_590_){
_start:
{
lean_object* v___f_591_; lean_object* v___f_592_; lean_object* v___x_593_; 
lean_inc(v_r_590_);
v___f_591_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_flatEquiv___redArg___lam__0), 4, 1);
lean_closure_set(v___f_591_, 0, v_r_590_);
v___f_592_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_flatEquiv___redArg___lam__1), 3, 1);
lean_closure_set(v___f_592_, 0, v_r_590_);
v___x_593_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_593_, 0, v___f_591_);
lean_ctor_set(v___x_593_, 1, v___f_592_);
return v___x_593_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_flatEquiv(lean_object* v_q_594_, lean_object* v_r_595_, lean_object* v_V_596_){
_start:
{
lean_object* v___x_597_; 
v___x_597_ = lp_ShannonBounds_ShannonBounds_flatEquiv___redArg(v_r_595_);
return v___x_597_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_flatEquiv___boxed(lean_object* v_q_598_, lean_object* v_r_599_, lean_object* v_V_600_){
_start:
{
lean_object* v_res_601_; 
v_res_601_ = lp_ShannonBounds_ShannonBounds_flatEquiv(v_q_598_, v_r_599_, v_V_600_);
lean_dec(v_q_598_);
return v_res_601_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__mul__iso___redArg(lean_object* v_r_602_){
_start:
{
lean_object* v___x_603_; 
v___x_603_ = lp_ShannonBounds_ShannonBounds_flatEquiv___redArg(v_r_602_);
return v___x_603_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__mul__iso(lean_object* v_V_604_, lean_object* v_inst_605_, lean_object* v_G_606_, lean_object* v_inst_607_, lean_object* v_q_608_, lean_object* v_r_609_){
_start:
{
lean_object* v___x_610_; 
v___x_610_ = lp_ShannonBounds_ShannonBounds_flatEquiv___redArg(v_r_609_);
return v___x_610_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__mul__iso___boxed(lean_object* v_V_611_, lean_object* v_inst_612_, lean_object* v_G_613_, lean_object* v_inst_614_, lean_object* v_q_615_, lean_object* v_r_616_){
_start:
{
lean_object* v_res_617_; 
v_res_617_ = lp_ShannonBounds_ShannonBounds_strongPower__mul__iso(v_V_611_, v_inst_612_, v_G_613_, v_inst_614_, v_q_615_, v_r_616_);
lean_dec(v_q_615_);
lean_dec_ref(v_inst_614_);
lean_dec_ref(v_inst_612_);
return v_res_617_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__congr___redArg___lam__0(lean_object* v_e_618_, lean_object* v_x_619_){
_start:
{
lean_inc_ref(v_e_618_);
return v_e_618_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__congr___redArg___lam__0___boxed(lean_object* v_e_620_, lean_object* v_x_621_){
_start:
{
lean_object* v_res_622_; 
v_res_622_ = lp_ShannonBounds_ShannonBounds_strongPower__congr___redArg___lam__0(v_e_620_, v_x_621_);
lean_dec(v_x_621_);
lean_dec_ref(v_e_620_);
return v_res_622_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__congr___redArg(lean_object* v_e_623_){
_start:
{
lean_object* v___f_624_; lean_object* v___x_625_; 
v___f_624_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_strongPower__congr___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_624_, 0, v_e_623_);
v___x_625_ = lp_mathlib_Equiv_piCongrRight___redArg(v___f_624_);
return v___x_625_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__congr(lean_object* v_V_626_, lean_object* v_G_627_, lean_object* v_W_628_, lean_object* v_inst_629_, lean_object* v_inst_630_, lean_object* v_H_631_, lean_object* v_inst_632_, lean_object* v_e_633_, lean_object* v_k_634_){
_start:
{
lean_object* v___x_635_; 
v___x_635_ = lp_ShannonBounds_ShannonBounds_strongPower__congr___redArg(v_e_633_);
return v___x_635_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__congr___boxed(lean_object* v_V_636_, lean_object* v_G_637_, lean_object* v_W_638_, lean_object* v_inst_639_, lean_object* v_inst_640_, lean_object* v_H_641_, lean_object* v_inst_642_, lean_object* v_e_643_, lean_object* v_k_644_){
_start:
{
lean_object* v_res_645_; 
v_res_645_ = lp_ShannonBounds_ShannonBounds_strongPower__congr(v_V_636_, v_G_637_, v_W_638_, v_inst_639_, v_inst_640_, v_H_641_, v_inst_642_, v_e_643_, v_k_644_);
lean_dec(v_k_644_);
lean_dec_ref(v_inst_642_);
lean_dec_ref(v_inst_640_);
lean_dec(v_inst_639_);
return v_res_645_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_ShannonBounds_ShannonBounds_Lift(uint8_t builtin);
lean_object* initialize_ShannonBounds_ShannonBounds_Defs(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Algebra_BigOperators_Fin(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_ShannonBounds_ShannonBounds_Layered(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ShannonBounds_ShannonBounds_Lift(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ShannonBounds_ShannonBounds_Defs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Algebra_BigOperators_Fin(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
