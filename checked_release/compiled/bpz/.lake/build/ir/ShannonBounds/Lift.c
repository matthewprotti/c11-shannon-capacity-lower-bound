// Lean compiler output
// Module: ShannonBounds.Lift
// Imports: public import Init public meta import Init public import Mathlib.Combinatorics.SimpleGraph.Clique public import Mathlib.Combinatorics.SimpleGraph.Finite public import Mathlib.Data.Finset.Prod
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
uint8_t l_instDecidableEqProd___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lp_mathlib_Finset_decidableExistsAndFinset___redArg(lean_object*, lean_object*);
lean_object* lp_mathlib_Multiset_filter___redArg(lean_object*, lean_object*);
uint8_t lp_mathlib_Multiset_decidableMem___aux__1___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lp_mathlib_Finset_image___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* lp_mathlib_Multiset_sub___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lp_mathlib_Multiset_product___redArg(lean_object*, lean_object*);
lean_object* lp_mathlib_Multiset_ndunion___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lp_mathlib_Finset_biUnion___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_decidableConflict___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_decidableConflict___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_decidableConflict(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_decidableConflict___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_alt___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_alt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_alt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc___redArg___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_Xstar___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_Xstar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_N___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_N___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_N(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_N___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_d___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_d___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_d(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_d___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_L___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_L___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_L(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_L___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_eta___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_eta(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_epO___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_epO(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_epO___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_ShannonBounds_ShannonBounds_RichPortSystem_cls___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_cls___redArg___closed__0 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_RichPortSystem_cls___redArg___closed__0_value;
static const lean_ctor_object lp_ShannonBounds_ShannonBounds_RichPortSystem_cls___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_cls___redArg___closed__1 = (const lean_object*)&lp_ShannonBounds_ShannonBounds_RichPortSystem_cls___redArg___closed__1_value;
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_cls___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_cls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongProd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongProd___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_decidableStrongProdAdj___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_decidableStrongProdAdj___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_decidableStrongProdAdj(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_decidableStrongProdAdj___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_core___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_core(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_core___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_hstrip___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_hstrip___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_hstrip___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_hstrip___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_hstrip(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_hstrip___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_vstrip___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_vstrip___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_vstrip(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_vstrip___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_liftSet___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_liftSet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_liftX___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_liftX(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_liftX___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_liftPorts___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_liftPorts(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_liftEp___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_liftEp___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_liftEp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_liftEp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_liftSide___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_liftSide___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_liftSide(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_liftSide___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_liftNeutral___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_liftNeutral(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_liftRPS___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_liftRPS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_decidableConflict___redArg(lean_object* v_inst_1_, lean_object* v_inst_2_, lean_object* v_x_3_, lean_object* v_y_4_){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; uint8_t v___x_7_; 
lean_inc(v_y_4_);
lean_inc(v_x_3_);
v___x_5_ = lean_apply_2(v_inst_2_, v_x_3_, v_y_4_);
v___x_6_ = lean_apply_2(v_inst_1_, v_x_3_, v_y_4_);
v___x_7_ = lean_unbox(v___x_6_);
if (v___x_7_ == 0)
{
uint8_t v___x_8_; 
v___x_8_ = lean_unbox(v___x_5_);
return v___x_8_;
}
else
{
uint8_t v___x_9_; 
v___x_9_ = lean_unbox(v___x_6_);
return v___x_9_;
}
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_decidableConflict___redArg___boxed(lean_object* v_inst_10_, lean_object* v_inst_11_, lean_object* v_x_12_, lean_object* v_y_13_){
_start:
{
uint8_t v_res_14_; lean_object* v_r_15_; 
v_res_14_ = lp_ShannonBounds_ShannonBounds_decidableConflict___redArg(v_inst_10_, v_inst_11_, v_x_12_, v_y_13_);
v_r_15_ = lean_box(v_res_14_);
return v_r_15_;
}
}
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_decidableConflict(lean_object* v_V_16_, lean_object* v_inst_17_, lean_object* v_G_18_, lean_object* v_inst_19_, lean_object* v_x_20_, lean_object* v_y_21_){
_start:
{
uint8_t v___x_22_; 
v___x_22_ = lp_ShannonBounds_ShannonBounds_decidableConflict___redArg(v_inst_17_, v_inst_19_, v_x_20_, v_y_21_);
return v___x_22_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_decidableConflict___boxed(lean_object* v_V_23_, lean_object* v_inst_24_, lean_object* v_G_25_, lean_object* v_inst_26_, lean_object* v_x_27_, lean_object* v_y_28_){
_start:
{
uint8_t v_res_29_; lean_object* v_r_30_; 
v_res_29_ = lp_ShannonBounds_ShannonBounds_decidableConflict(v_V_23_, v_inst_24_, v_G_25_, v_inst_26_, v_x_27_, v_y_28_);
v_r_30_ = lean_box(v_res_29_);
return v_r_30_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_alt___redArg(lean_object* v_S_31_, lean_object* v_r_32_){
_start:
{
lean_object* v_ep_33_; lean_object* v_side_34_; lean_object* v___x_35_; uint8_t v___x_36_; 
v_ep_33_ = lean_ctor_get(v_S_31_, 2);
lean_inc(v_ep_33_);
v_side_34_ = lean_ctor_get(v_S_31_, 3);
lean_inc_ref(v_side_34_);
lean_dec_ref(v_S_31_);
lean_inc(v_r_32_);
v___x_35_ = lean_apply_1(v_side_34_, v_r_32_);
v___x_36_ = lean_unbox(v___x_35_);
if (v___x_36_ == 0)
{
uint8_t v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; 
v___x_37_ = 1;
v___x_38_ = lean_box(v___x_37_);
v___x_39_ = lean_apply_2(v_ep_33_, v___x_38_, v_r_32_);
return v___x_39_;
}
else
{
uint8_t v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; 
v___x_40_ = 0;
v___x_41_ = lean_box(v___x_40_);
v___x_42_ = lean_apply_2(v_ep_33_, v___x_41_, v_r_32_);
return v___x_42_;
}
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_alt(lean_object* v_V_43_, lean_object* v_G_44_, lean_object* v_inst_45_, lean_object* v_S_46_, lean_object* v_r_47_){
_start:
{
lean_object* v___x_48_; 
v___x_48_ = lp_ShannonBounds_ShannonBounds_RichPortSystem_alt___redArg(v_S_46_, v_r_47_);
return v___x_48_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_alt___boxed(lean_object* v_V_49_, lean_object* v_G_50_, lean_object* v_inst_51_, lean_object* v_S_52_, lean_object* v_r_53_){
_start:
{
lean_object* v_res_54_; 
v_res_54_ = lp_ShannonBounds_ShannonBounds_RichPortSystem_alt(v_V_49_, v_G_50_, v_inst_51_, v_S_52_, v_r_53_);
lean_dec_ref(v_inst_51_);
return v_res_54_;
}
}
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc___redArg___lam__0(lean_object* v_ep_55_, uint8_t v_c_56_, lean_object* v_inst_57_, lean_object* v_inst_58_, lean_object* v_a_59_, lean_object* v_a_60_){
_start:
{
lean_object* v___x_61_; lean_object* v___x_62_; uint8_t v___x_63_; 
v___x_61_ = lean_box(v_c_56_);
v___x_62_ = lean_apply_2(v_ep_55_, v___x_61_, v_a_60_);
v___x_63_ = lp_ShannonBounds_ShannonBounds_decidableConflict___redArg(v_inst_57_, v_inst_58_, v_a_59_, v___x_62_);
return v___x_63_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc___redArg___lam__0___boxed(lean_object* v_ep_64_, lean_object* v_c_65_, lean_object* v_inst_66_, lean_object* v_inst_67_, lean_object* v_a_68_, lean_object* v_a_69_){
_start:
{
uint8_t v_c_boxed_70_; uint8_t v_res_71_; lean_object* v_r_72_; 
v_c_boxed_70_ = lean_unbox(v_c_65_);
v_res_71_ = lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc___redArg___lam__0(v_ep_64_, v_c_boxed_70_, v_inst_66_, v_inst_67_, v_a_68_, v_a_69_);
v_r_72_ = lean_box(v_res_71_);
return v_r_72_;
}
}
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc___redArg___lam__1(lean_object* v_ep_73_, uint8_t v_c_74_, lean_object* v_inst_75_, lean_object* v_inst_76_, lean_object* v_ports_77_, lean_object* v_a_78_){
_start:
{
lean_object* v___x_79_; lean_object* v___f_80_; uint8_t v___x_81_; 
v___x_79_ = lean_box(v_c_74_);
v___f_80_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_80_, 0, v_ep_73_);
lean_closure_set(v___f_80_, 1, v___x_79_);
lean_closure_set(v___f_80_, 2, v_inst_75_);
lean_closure_set(v___f_80_, 3, v_inst_76_);
lean_closure_set(v___f_80_, 4, v_a_78_);
v___x_81_ = lp_mathlib_Finset_decidableExistsAndFinset___redArg(v_ports_77_, v___f_80_);
return v___x_81_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc___redArg___lam__1___boxed(lean_object* v_ep_82_, lean_object* v_c_83_, lean_object* v_inst_84_, lean_object* v_inst_85_, lean_object* v_ports_86_, lean_object* v_a_87_){
_start:
{
uint8_t v_c_boxed_88_; uint8_t v_res_89_; lean_object* v_r_90_; 
v_c_boxed_88_ = lean_unbox(v_c_83_);
v_res_89_ = lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc___redArg___lam__1(v_ep_82_, v_c_boxed_88_, v_inst_84_, v_inst_85_, v_ports_86_, v_a_87_);
v_r_90_ = lean_box(v_res_89_);
return v_r_90_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc___redArg(lean_object* v_inst_91_, lean_object* v_inst_92_, lean_object* v_S_93_, uint8_t v_c_94_){
_start:
{
lean_object* v_ports_95_; lean_object* v_ep_96_; lean_object* v_X_97_; lean_object* v___x_98_; lean_object* v___f_99_; lean_object* v___x_100_; 
v_ports_95_ = lean_ctor_get(v_S_93_, 1);
lean_inc(v_ports_95_);
v_ep_96_ = lean_ctor_get(v_S_93_, 2);
lean_inc(v_ep_96_);
v_X_97_ = lean_ctor_get(v_S_93_, 4);
lean_inc(v_X_97_);
lean_dec_ref(v_S_93_);
v___x_98_ = lean_box(v_c_94_);
v___f_99_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc___redArg___lam__1___boxed), 6, 5);
lean_closure_set(v___f_99_, 0, v_ep_96_);
lean_closure_set(v___f_99_, 1, v___x_98_);
lean_closure_set(v___f_99_, 2, v_inst_91_);
lean_closure_set(v___f_99_, 3, v_inst_92_);
lean_closure_set(v___f_99_, 4, v_ports_95_);
v___x_100_ = lp_mathlib_Multiset_filter___redArg(v___f_99_, v_X_97_);
return v___x_100_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc___redArg___boxed(lean_object* v_inst_101_, lean_object* v_inst_102_, lean_object* v_S_103_, lean_object* v_c_104_){
_start:
{
uint8_t v_c_boxed_105_; lean_object* v_res_106_; 
v_c_boxed_105_ = lean_unbox(v_c_104_);
v_res_106_ = lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc___redArg(v_inst_101_, v_inst_102_, v_S_103_, v_c_boxed_105_);
return v_res_106_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc(lean_object* v_V_107_, lean_object* v_inst_108_, lean_object* v_G_109_, lean_object* v_inst_110_, lean_object* v_S_111_, uint8_t v_c_112_){
_start:
{
lean_object* v___x_113_; 
v___x_113_ = lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc___redArg(v_inst_108_, v_inst_110_, v_S_111_, v_c_112_);
return v___x_113_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc___boxed(lean_object* v_V_114_, lean_object* v_inst_115_, lean_object* v_G_116_, lean_object* v_inst_117_, lean_object* v_S_118_, lean_object* v_c_119_){
_start:
{
uint8_t v_c_boxed_120_; lean_object* v_res_121_; 
v_c_boxed_120_ = lean_unbox(v_c_119_);
v_res_121_ = lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc(v_V_114_, v_inst_115_, v_G_116_, v_inst_117_, v_S_118_, v_c_boxed_120_);
return v_res_121_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_Xstar___redArg(lean_object* v_inst_122_, lean_object* v_inst_123_, lean_object* v_S_124_){
_start:
{
lean_object* v_X_125_; uint8_t v___x_126_; lean_object* v___x_127_; uint8_t v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; 
v_X_125_ = lean_ctor_get(v_S_124_, 4);
lean_inc(v_X_125_);
v___x_126_ = 0;
lean_inc_ref(v_S_124_);
lean_inc_ref(v_inst_123_);
lean_inc_ref_n(v_inst_122_, 3);
v___x_127_ = lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc___redArg(v_inst_122_, v_inst_123_, v_S_124_, v___x_126_);
v___x_128_ = 1;
v___x_129_ = lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc___redArg(v_inst_122_, v_inst_123_, v_S_124_, v___x_128_);
v___x_130_ = lp_mathlib_Multiset_ndunion___redArg(v_inst_122_, v___x_127_, v___x_129_);
v___x_131_ = lp_mathlib_Multiset_sub___redArg(v_inst_122_, v_X_125_, v___x_130_);
return v___x_131_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_Xstar(lean_object* v_V_132_, lean_object* v_inst_133_, lean_object* v_G_134_, lean_object* v_inst_135_, lean_object* v_S_136_){
_start:
{
lean_object* v___x_137_; 
v___x_137_ = lp_ShannonBounds_ShannonBounds_RichPortSystem_Xstar___redArg(v_inst_133_, v_inst_135_, v_S_136_);
return v___x_137_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_N___redArg(lean_object* v_S_138_){
_start:
{
lean_object* v_I_139_; lean_object* v___x_140_; 
v_I_139_ = lean_ctor_get(v_S_138_, 0);
v___x_140_ = l_List_lengthTR___redArg(v_I_139_);
return v___x_140_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_N___redArg___boxed(lean_object* v_S_141_){
_start:
{
lean_object* v_res_142_; 
v_res_142_ = lp_ShannonBounds_ShannonBounds_RichPortSystem_N___redArg(v_S_141_);
lean_dec_ref(v_S_141_);
return v_res_142_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_N(lean_object* v_V_143_, lean_object* v_G_144_, lean_object* v_inst_145_, lean_object* v_S_146_){
_start:
{
lean_object* v___x_147_; 
v___x_147_ = lp_ShannonBounds_ShannonBounds_RichPortSystem_N___redArg(v_S_146_);
return v___x_147_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_N___boxed(lean_object* v_V_148_, lean_object* v_G_149_, lean_object* v_inst_150_, lean_object* v_S_151_){
_start:
{
lean_object* v_res_152_; 
v_res_152_ = lp_ShannonBounds_ShannonBounds_RichPortSystem_N(v_V_148_, v_G_149_, v_inst_150_, v_S_151_);
lean_dec_ref(v_S_151_);
lean_dec_ref(v_inst_150_);
return v_res_152_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_d___redArg(lean_object* v_S_153_){
_start:
{
lean_object* v_ports_154_; lean_object* v___x_155_; 
v_ports_154_ = lean_ctor_get(v_S_153_, 1);
v___x_155_ = l_List_lengthTR___redArg(v_ports_154_);
return v___x_155_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_d___redArg___boxed(lean_object* v_S_156_){
_start:
{
lean_object* v_res_157_; 
v_res_157_ = lp_ShannonBounds_ShannonBounds_RichPortSystem_d___redArg(v_S_156_);
lean_dec_ref(v_S_156_);
return v_res_157_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_d(lean_object* v_V_158_, lean_object* v_G_159_, lean_object* v_inst_160_, lean_object* v_S_161_){
_start:
{
lean_object* v___x_162_; 
v___x_162_ = lp_ShannonBounds_ShannonBounds_RichPortSystem_d___redArg(v_S_161_);
return v___x_162_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_d___boxed(lean_object* v_V_163_, lean_object* v_G_164_, lean_object* v_inst_165_, lean_object* v_S_166_){
_start:
{
lean_object* v_res_167_; 
v_res_167_ = lp_ShannonBounds_ShannonBounds_RichPortSystem_d(v_V_163_, v_G_164_, v_inst_165_, v_S_166_);
lean_dec_ref(v_S_166_);
lean_dec_ref(v_inst_165_);
return v_res_167_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_L___redArg(lean_object* v_S_168_){
_start:
{
lean_object* v_X_169_; lean_object* v___x_170_; 
v_X_169_ = lean_ctor_get(v_S_168_, 4);
v___x_170_ = l_List_lengthTR___redArg(v_X_169_);
return v___x_170_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_L___redArg___boxed(lean_object* v_S_171_){
_start:
{
lean_object* v_res_172_; 
v_res_172_ = lp_ShannonBounds_ShannonBounds_RichPortSystem_L___redArg(v_S_171_);
lean_dec_ref(v_S_171_);
return v_res_172_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_L(lean_object* v_V_173_, lean_object* v_G_174_, lean_object* v_inst_175_, lean_object* v_S_176_){
_start:
{
lean_object* v___x_177_; 
v___x_177_ = lp_ShannonBounds_ShannonBounds_RichPortSystem_L___redArg(v_S_176_);
return v___x_177_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_L___boxed(lean_object* v_V_178_, lean_object* v_G_179_, lean_object* v_inst_180_, lean_object* v_S_181_){
_start:
{
lean_object* v_res_182_; 
v_res_182_ = lp_ShannonBounds_ShannonBounds_RichPortSystem_L(v_V_178_, v_G_179_, v_inst_180_, v_S_181_);
lean_dec_ref(v_S_181_);
lean_dec_ref(v_inst_180_);
return v_res_182_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_eta___redArg(lean_object* v_inst_183_, lean_object* v_inst_184_, lean_object* v_S_185_){
_start:
{
lean_object* v___x_186_; lean_object* v___x_187_; 
v___x_186_ = lp_ShannonBounds_ShannonBounds_RichPortSystem_Xstar___redArg(v_inst_183_, v_inst_184_, v_S_185_);
v___x_187_ = l_List_lengthTR___redArg(v___x_186_);
lean_dec(v___x_186_);
return v___x_187_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_eta(lean_object* v_V_188_, lean_object* v_inst_189_, lean_object* v_G_190_, lean_object* v_inst_191_, lean_object* v_S_192_){
_start:
{
lean_object* v___x_193_; 
v___x_193_ = lp_ShannonBounds_ShannonBounds_RichPortSystem_eta___redArg(v_inst_189_, v_inst_191_, v_S_192_);
return v___x_193_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_epO___redArg(lean_object* v_S_194_, lean_object* v_o_195_, lean_object* v_r_196_){
_start:
{
if (lean_obj_tag(v_o_195_) == 0)
{
lean_dec_ref(v_S_194_);
return v_r_196_;
}
else
{
lean_object* v_val_197_; lean_object* v_ep_198_; lean_object* v___x_199_; 
v_val_197_ = lean_ctor_get(v_o_195_, 0);
lean_inc(v_val_197_);
lean_dec_ref_known(v_o_195_, 1);
v_ep_198_ = lean_ctor_get(v_S_194_, 2);
lean_inc(v_ep_198_);
lean_dec_ref(v_S_194_);
v___x_199_ = lean_apply_2(v_ep_198_, v_val_197_, v_r_196_);
return v___x_199_;
}
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_epO(lean_object* v_V_200_, lean_object* v_G_201_, lean_object* v_inst_202_, lean_object* v_S_203_, lean_object* v_o_204_, lean_object* v_r_205_){
_start:
{
lean_object* v___x_206_; 
v___x_206_ = lp_ShannonBounds_ShannonBounds_RichPortSystem_epO___redArg(v_S_203_, v_o_204_, v_r_205_);
return v___x_206_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_epO___boxed(lean_object* v_V_207_, lean_object* v_G_208_, lean_object* v_inst_209_, lean_object* v_S_210_, lean_object* v_o_211_, lean_object* v_r_212_){
_start:
{
lean_object* v_res_213_; 
v_res_213_ = lp_ShannonBounds_ShannonBounds_RichPortSystem_epO(v_V_207_, v_G_208_, v_inst_209_, v_S_210_, v_o_211_, v_r_212_);
lean_dec_ref(v_inst_209_);
return v_res_213_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_cls___redArg(lean_object* v_inst_220_, lean_object* v_inst_221_, lean_object* v_S_222_, lean_object* v_x_223_){
_start:
{
uint8_t v___x_224_; lean_object* v___x_225_; uint8_t v___x_226_; 
v___x_224_ = 0;
lean_inc_ref(v_S_222_);
lean_inc_ref(v_inst_221_);
lean_inc_ref_n(v_inst_220_, 2);
v___x_225_ = lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc___redArg(v_inst_220_, v_inst_221_, v_S_222_, v___x_224_);
lean_inc(v_x_223_);
v___x_226_ = lp_mathlib_Multiset_decidableMem___aux__1___redArg(v_inst_220_, v_x_223_, v___x_225_);
if (v___x_226_ == 0)
{
uint8_t v___x_227_; lean_object* v___x_228_; uint8_t v___x_229_; 
v___x_227_ = 1;
lean_inc_ref(v_inst_220_);
v___x_228_ = lp_ShannonBounds_ShannonBounds_RichPortSystem_Xc___redArg(v_inst_220_, v_inst_221_, v_S_222_, v___x_227_);
v___x_229_ = lp_mathlib_Multiset_decidableMem___aux__1___redArg(v_inst_220_, v_x_223_, v___x_228_);
if (v___x_229_ == 0)
{
lean_object* v___x_230_; 
v___x_230_ = lean_box(0);
return v___x_230_;
}
else
{
lean_object* v___x_231_; 
v___x_231_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_RichPortSystem_cls___redArg___closed__0));
return v___x_231_;
}
}
else
{
lean_object* v___x_232_; 
lean_dec(v_x_223_);
lean_dec_ref(v_S_222_);
lean_dec_ref(v_inst_221_);
lean_dec_ref(v_inst_220_);
v___x_232_ = ((lean_object*)(lp_ShannonBounds_ShannonBounds_RichPortSystem_cls___redArg___closed__1));
return v___x_232_;
}
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_RichPortSystem_cls(lean_object* v_V_233_, lean_object* v_inst_234_, lean_object* v_G_235_, lean_object* v_inst_236_, lean_object* v_S_237_, lean_object* v_x_238_){
_start:
{
lean_object* v___x_239_; 
v___x_239_ = lp_ShannonBounds_ShannonBounds_RichPortSystem_cls___redArg(v_inst_234_, v_inst_236_, v_S_237_, v_x_238_);
return v___x_239_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongProd(lean_object* v_V_u2081_240_, lean_object* v_V_u2082_241_, lean_object* v_G_u2081_242_, lean_object* v_G_u2082_243_, lean_object* v_inst_244_, lean_object* v_inst_245_){
_start:
{
lean_object* v___x_246_; 
v___x_246_ = lean_box(0);
return v___x_246_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongProd___boxed(lean_object* v_V_u2081_247_, lean_object* v_V_u2082_248_, lean_object* v_G_u2081_249_, lean_object* v_G_u2082_250_, lean_object* v_inst_251_, lean_object* v_inst_252_){
_start:
{
lean_object* v_res_253_; 
v_res_253_ = lp_ShannonBounds_ShannonBounds_strongProd(v_V_u2081_247_, v_V_u2082_248_, v_G_u2081_249_, v_G_u2082_250_, v_inst_251_, v_inst_252_);
lean_dec_ref(v_inst_252_);
lean_dec_ref(v_inst_251_);
return v_res_253_;
}
}
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_decidableStrongProdAdj___redArg(lean_object* v_inst_254_, lean_object* v_inst_255_, lean_object* v_inst_256_, lean_object* v_inst_257_, lean_object* v_x_258_, lean_object* v_x_259_){
_start:
{
uint8_t v___x_260_; 
lean_inc_ref(v_x_259_);
lean_inc_ref(v_x_258_);
lean_inc_ref(v_inst_255_);
lean_inc_ref(v_inst_254_);
v___x_260_ = l_instDecidableEqProd___redArg(v_inst_254_, v_inst_255_, v_x_258_, v_x_259_);
if (v___x_260_ == 0)
{
lean_object* v_fst_261_; lean_object* v_snd_262_; lean_object* v_fst_263_; lean_object* v_snd_264_; uint8_t v___x_265_; 
v_fst_261_ = lean_ctor_get(v_x_258_, 0);
lean_inc(v_fst_261_);
v_snd_262_ = lean_ctor_get(v_x_258_, 1);
lean_inc(v_snd_262_);
lean_dec_ref(v_x_258_);
v_fst_263_ = lean_ctor_get(v_x_259_, 0);
lean_inc(v_fst_263_);
v_snd_264_ = lean_ctor_get(v_x_259_, 1);
lean_inc(v_snd_264_);
lean_dec_ref(v_x_259_);
v___x_265_ = lp_ShannonBounds_ShannonBounds_decidableConflict___redArg(v_inst_254_, v_inst_256_, v_fst_261_, v_fst_263_);
if (v___x_265_ == 0)
{
lean_dec(v_snd_264_);
lean_dec(v_snd_262_);
lean_dec_ref(v_inst_257_);
lean_dec_ref(v_inst_255_);
return v___x_265_;
}
else
{
uint8_t v___x_266_; 
v___x_266_ = lp_ShannonBounds_ShannonBounds_decidableConflict___redArg(v_inst_255_, v_inst_257_, v_snd_262_, v_snd_264_);
return v___x_266_;
}
}
else
{
uint8_t v___x_267_; 
lean_dec_ref(v_x_259_);
lean_dec_ref(v_x_258_);
lean_dec_ref(v_inst_257_);
lean_dec_ref(v_inst_256_);
lean_dec_ref(v_inst_255_);
lean_dec_ref(v_inst_254_);
v___x_267_ = 0;
return v___x_267_;
}
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_decidableStrongProdAdj___redArg___boxed(lean_object* v_inst_268_, lean_object* v_inst_269_, lean_object* v_inst_270_, lean_object* v_inst_271_, lean_object* v_x_272_, lean_object* v_x_273_){
_start:
{
uint8_t v_res_274_; lean_object* v_r_275_; 
v_res_274_ = lp_ShannonBounds_ShannonBounds_decidableStrongProdAdj___redArg(v_inst_268_, v_inst_269_, v_inst_270_, v_inst_271_, v_x_272_, v_x_273_);
v_r_275_ = lean_box(v_res_274_);
return v_r_275_;
}
}
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_decidableStrongProdAdj(lean_object* v_V_u2081_276_, lean_object* v_V_u2082_277_, lean_object* v_inst_278_, lean_object* v_inst_279_, lean_object* v_G_u2081_280_, lean_object* v_G_u2082_281_, lean_object* v_inst_282_, lean_object* v_inst_283_, lean_object* v_x_284_, lean_object* v_x_285_){
_start:
{
uint8_t v___x_286_; 
v___x_286_ = lp_ShannonBounds_ShannonBounds_decidableStrongProdAdj___redArg(v_inst_278_, v_inst_279_, v_inst_282_, v_inst_283_, v_x_284_, v_x_285_);
return v___x_286_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_decidableStrongProdAdj___boxed(lean_object* v_V_u2081_287_, lean_object* v_V_u2082_288_, lean_object* v_inst_289_, lean_object* v_inst_290_, lean_object* v_G_u2081_291_, lean_object* v_G_u2082_292_, lean_object* v_inst_293_, lean_object* v_inst_294_, lean_object* v_x_295_, lean_object* v_x_296_){
_start:
{
uint8_t v_res_297_; lean_object* v_r_298_; 
v_res_297_ = lp_ShannonBounds_ShannonBounds_decidableStrongProdAdj(v_V_u2081_287_, v_V_u2082_288_, v_inst_289_, v_inst_290_, v_G_u2081_291_, v_G_u2082_292_, v_inst_293_, v_inst_294_, v_x_295_, v_x_296_);
v_r_298_ = lean_box(v_res_297_);
return v_r_298_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_core___redArg(lean_object* v_inst_299_, lean_object* v_inst_300_, lean_object* v_S_301_, lean_object* v_T_302_){
_start:
{
lean_object* v_I_303_; lean_object* v_ports_304_; lean_object* v_I_305_; lean_object* v_ports_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; 
v_I_303_ = lean_ctor_get(v_S_301_, 0);
lean_inc(v_I_303_);
v_ports_304_ = lean_ctor_get(v_S_301_, 1);
lean_inc(v_ports_304_);
lean_dec_ref(v_S_301_);
v_I_305_ = lean_ctor_get(v_T_302_, 0);
lean_inc(v_I_305_);
v_ports_306_ = lean_ctor_get(v_T_302_, 1);
lean_inc(v_ports_306_);
lean_dec_ref(v_T_302_);
v___x_307_ = lp_mathlib_Multiset_sub___redArg(v_inst_299_, v_I_303_, v_ports_304_);
v___x_308_ = lp_mathlib_Multiset_sub___redArg(v_inst_300_, v_I_305_, v_ports_306_);
v___x_309_ = lp_mathlib_Multiset_product___redArg(v___x_307_, v___x_308_);
return v___x_309_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_core(lean_object* v_V_u2081_310_, lean_object* v_V_u2082_311_, lean_object* v_inst_312_, lean_object* v_inst_313_, lean_object* v_G_u2081_314_, lean_object* v_G_u2082_315_, lean_object* v_inst_316_, lean_object* v_inst_317_, lean_object* v_S_318_, lean_object* v_T_319_){
_start:
{
lean_object* v___x_320_; 
v___x_320_ = lp_ShannonBounds_ShannonBounds_core___redArg(v_inst_312_, v_inst_313_, v_S_318_, v_T_319_);
return v___x_320_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_core___boxed(lean_object* v_V_u2081_321_, lean_object* v_V_u2082_322_, lean_object* v_inst_323_, lean_object* v_inst_324_, lean_object* v_G_u2081_325_, lean_object* v_G_u2082_326_, lean_object* v_inst_327_, lean_object* v_inst_328_, lean_object* v_S_329_, lean_object* v_T_330_){
_start:
{
lean_object* v_res_331_; 
v_res_331_ = lp_ShannonBounds_ShannonBounds_core(v_V_u2081_321_, v_V_u2082_322_, v_inst_323_, v_inst_324_, v_G_u2081_325_, v_G_u2082_326_, v_inst_327_, v_inst_328_, v_S_329_, v_T_330_);
lean_dec_ref(v_inst_328_);
lean_dec_ref(v_inst_327_);
return v_res_331_;
}
}
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_hstrip___redArg___lam__0(lean_object* v_inst_332_, lean_object* v_inst_333_, lean_object* v_a_334_, lean_object* v_b_335_){
_start:
{
uint8_t v___x_336_; 
v___x_336_ = l_instDecidableEqProd___redArg(v_inst_332_, v_inst_333_, v_a_334_, v_b_335_);
return v___x_336_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_hstrip___redArg___lam__0___boxed(lean_object* v_inst_337_, lean_object* v_inst_338_, lean_object* v_a_339_, lean_object* v_b_340_){
_start:
{
uint8_t v_res_341_; lean_object* v_r_342_; 
v_res_341_ = lp_ShannonBounds_ShannonBounds_hstrip___redArg___lam__0(v_inst_337_, v_inst_338_, v_a_339_, v_b_340_);
v_r_342_ = lean_box(v_res_341_);
return v_r_342_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_hstrip___redArg___lam__1(lean_object* v_inst_343_, lean_object* v_inst_344_, lean_object* v_S_345_, lean_object* v_T_346_, lean_object* v_r_347_, lean_object* v_x_348_){
_start:
{
lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; 
lean_inc(v_x_348_);
v___x_349_ = lp_ShannonBounds_ShannonBounds_RichPortSystem_cls___redArg(v_inst_343_, v_inst_344_, v_S_345_, v_x_348_);
v___x_350_ = lp_ShannonBounds_ShannonBounds_RichPortSystem_epO___redArg(v_T_346_, v___x_349_, v_r_347_);
v___x_351_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_351_, 0, v_x_348_);
lean_ctor_set(v___x_351_, 1, v___x_350_);
return v___x_351_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_hstrip___redArg(lean_object* v_inst_352_, lean_object* v_inst_353_, lean_object* v_inst_354_, lean_object* v_S_355_, lean_object* v_T_356_, lean_object* v_r_357_){
_start:
{
lean_object* v_X_358_; lean_object* v___f_359_; lean_object* v___f_360_; lean_object* v___x_361_; 
v_X_358_ = lean_ctor_get(v_S_355_, 4);
lean_inc(v_X_358_);
lean_inc_ref(v_inst_352_);
v___f_359_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_hstrip___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_359_, 0, v_inst_352_);
lean_closure_set(v___f_359_, 1, v_inst_353_);
v___f_360_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_hstrip___redArg___lam__1), 6, 5);
lean_closure_set(v___f_360_, 0, v_inst_352_);
lean_closure_set(v___f_360_, 1, v_inst_354_);
lean_closure_set(v___f_360_, 2, v_S_355_);
lean_closure_set(v___f_360_, 3, v_T_356_);
lean_closure_set(v___f_360_, 4, v_r_357_);
v___x_361_ = lp_mathlib_Finset_image___redArg(v___f_359_, v___f_360_, v_X_358_);
return v___x_361_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_hstrip(lean_object* v_V_u2081_362_, lean_object* v_V_u2082_363_, lean_object* v_inst_364_, lean_object* v_inst_365_, lean_object* v_G_u2081_366_, lean_object* v_G_u2082_367_, lean_object* v_inst_368_, lean_object* v_inst_369_, lean_object* v_S_370_, lean_object* v_T_371_, lean_object* v_r_372_){
_start:
{
lean_object* v___x_373_; 
v___x_373_ = lp_ShannonBounds_ShannonBounds_hstrip___redArg(v_inst_364_, v_inst_365_, v_inst_368_, v_S_370_, v_T_371_, v_r_372_);
return v___x_373_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_hstrip___boxed(lean_object* v_V_u2081_374_, lean_object* v_V_u2082_375_, lean_object* v_inst_376_, lean_object* v_inst_377_, lean_object* v_G_u2081_378_, lean_object* v_G_u2082_379_, lean_object* v_inst_380_, lean_object* v_inst_381_, lean_object* v_S_382_, lean_object* v_T_383_, lean_object* v_r_384_){
_start:
{
lean_object* v_res_385_; 
v_res_385_ = lp_ShannonBounds_ShannonBounds_hstrip(v_V_u2081_374_, v_V_u2082_375_, v_inst_376_, v_inst_377_, v_G_u2081_378_, v_G_u2082_379_, v_inst_380_, v_inst_381_, v_S_382_, v_T_383_, v_r_384_);
lean_dec_ref(v_inst_381_);
return v_res_385_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_vstrip___redArg___lam__1(lean_object* v_S_386_, lean_object* v_t_387_, lean_object* v_inst_388_, lean_object* v_inst_389_, lean_object* v_T_390_, lean_object* v_y_391_){
_start:
{
lean_object* v___y_393_; uint8_t v___y_397_; lean_object* v___x_400_; 
lean_inc(v_y_391_);
v___x_400_ = lp_ShannonBounds_ShannonBounds_RichPortSystem_cls___redArg(v_inst_388_, v_inst_389_, v_T_390_, v_y_391_);
if (lean_obj_tag(v___x_400_) == 0)
{
v___y_393_ = v___x_400_;
goto v___jp_392_;
}
else
{
lean_object* v_val_401_; uint8_t v___x_402_; 
v_val_401_ = lean_ctor_get(v___x_400_, 0);
lean_inc(v_val_401_);
lean_dec_ref_known(v___x_400_, 1);
v___x_402_ = lean_unbox(v_val_401_);
lean_dec(v_val_401_);
if (v___x_402_ == 0)
{
uint8_t v___x_403_; 
v___x_403_ = 1;
v___y_397_ = v___x_403_;
goto v___jp_396_;
}
else
{
uint8_t v___x_404_; 
v___x_404_ = 0;
v___y_397_ = v___x_404_;
goto v___jp_396_;
}
}
v___jp_392_:
{
lean_object* v___x_394_; lean_object* v___x_395_; 
v___x_394_ = lp_ShannonBounds_ShannonBounds_RichPortSystem_epO___redArg(v_S_386_, v___y_393_, v_t_387_);
v___x_395_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_395_, 0, v___x_394_);
lean_ctor_set(v___x_395_, 1, v_y_391_);
return v___x_395_;
}
v___jp_396_:
{
lean_object* v___x_398_; lean_object* v___x_399_; 
v___x_398_ = lean_box(v___y_397_);
v___x_399_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_399_, 0, v___x_398_);
v___y_393_ = v___x_399_;
goto v___jp_392_;
}
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_vstrip___redArg(lean_object* v_inst_405_, lean_object* v_inst_406_, lean_object* v_inst_407_, lean_object* v_S_408_, lean_object* v_T_409_, lean_object* v_t_410_){
_start:
{
lean_object* v_X_411_; lean_object* v___f_412_; lean_object* v___f_413_; lean_object* v___x_414_; 
v_X_411_ = lean_ctor_get(v_T_409_, 4);
lean_inc(v_X_411_);
lean_inc_ref(v_inst_406_);
v___f_412_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_hstrip___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_412_, 0, v_inst_405_);
lean_closure_set(v___f_412_, 1, v_inst_406_);
v___f_413_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_vstrip___redArg___lam__1), 6, 5);
lean_closure_set(v___f_413_, 0, v_S_408_);
lean_closure_set(v___f_413_, 1, v_t_410_);
lean_closure_set(v___f_413_, 2, v_inst_406_);
lean_closure_set(v___f_413_, 3, v_inst_407_);
lean_closure_set(v___f_413_, 4, v_T_409_);
v___x_414_ = lp_mathlib_Finset_image___redArg(v___f_412_, v___f_413_, v_X_411_);
return v___x_414_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_vstrip(lean_object* v_V_u2081_415_, lean_object* v_V_u2082_416_, lean_object* v_inst_417_, lean_object* v_inst_418_, lean_object* v_G_u2081_419_, lean_object* v_G_u2082_420_, lean_object* v_inst_421_, lean_object* v_inst_422_, lean_object* v_S_423_, lean_object* v_T_424_, lean_object* v_t_425_){
_start:
{
lean_object* v___x_426_; 
v___x_426_ = lp_ShannonBounds_ShannonBounds_vstrip___redArg(v_inst_417_, v_inst_418_, v_inst_422_, v_S_423_, v_T_424_, v_t_425_);
return v___x_426_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_vstrip___boxed(lean_object* v_V_u2081_427_, lean_object* v_V_u2082_428_, lean_object* v_inst_429_, lean_object* v_inst_430_, lean_object* v_G_u2081_431_, lean_object* v_G_u2082_432_, lean_object* v_inst_433_, lean_object* v_inst_434_, lean_object* v_S_435_, lean_object* v_T_436_, lean_object* v_t_437_){
_start:
{
lean_object* v_res_438_; 
v_res_438_ = lp_ShannonBounds_ShannonBounds_vstrip(v_V_u2081_427_, v_V_u2082_428_, v_inst_429_, v_inst_430_, v_G_u2081_431_, v_G_u2082_432_, v_inst_433_, v_inst_434_, v_S_435_, v_T_436_, v_t_437_);
lean_dec_ref(v_inst_433_);
return v_res_438_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_liftSet___redArg(lean_object* v_inst_439_, lean_object* v_inst_440_, lean_object* v_G_u2081_441_, lean_object* v_G_u2082_442_, lean_object* v_inst_443_, lean_object* v_inst_444_, lean_object* v_S_445_, lean_object* v_T_446_){
_start:
{
lean_object* v_ports_447_; lean_object* v___x_448_; lean_object* v_ports_449_; lean_object* v___f_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; 
v_ports_447_ = lean_ctor_get(v_T_446_, 1);
lean_inc_ref_n(v_T_446_, 2);
lean_inc_ref_n(v_S_445_, 2);
lean_inc_ref_n(v_inst_440_, 3);
lean_inc_ref_n(v_inst_439_, 3);
v___x_448_ = lp_ShannonBounds_ShannonBounds_core___redArg(v_inst_439_, v_inst_440_, v_S_445_, v_T_446_);
v_ports_449_ = lean_ctor_get(v_S_445_, 1);
lean_inc(v_ports_449_);
v___f_450_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_hstrip___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_450_, 0, v_inst_439_);
lean_closure_set(v___f_450_, 1, v_inst_440_);
lean_inc_ref(v_inst_444_);
lean_inc_ref(v_inst_443_);
v___x_451_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_hstrip___boxed), 11, 10);
lean_closure_set(v___x_451_, 0, lean_box(0));
lean_closure_set(v___x_451_, 1, lean_box(0));
lean_closure_set(v___x_451_, 2, v_inst_439_);
lean_closure_set(v___x_451_, 3, v_inst_440_);
lean_closure_set(v___x_451_, 4, v_G_u2081_441_);
lean_closure_set(v___x_451_, 5, v_G_u2082_442_);
lean_closure_set(v___x_451_, 6, v_inst_443_);
lean_closure_set(v___x_451_, 7, v_inst_444_);
lean_closure_set(v___x_451_, 8, v_S_445_);
lean_closure_set(v___x_451_, 9, v_T_446_);
lean_inc(v_ports_447_);
lean_inc_ref_n(v___f_450_, 3);
v___x_452_ = lp_mathlib_Finset_biUnion___redArg(v___f_450_, v_ports_447_, v___x_451_);
v___x_453_ = lp_mathlib_Multiset_ndunion___redArg(v___f_450_, v___x_448_, v___x_452_);
v___x_454_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_vstrip___boxed), 11, 10);
lean_closure_set(v___x_454_, 0, lean_box(0));
lean_closure_set(v___x_454_, 1, lean_box(0));
lean_closure_set(v___x_454_, 2, v_inst_439_);
lean_closure_set(v___x_454_, 3, v_inst_440_);
lean_closure_set(v___x_454_, 4, v_G_u2081_441_);
lean_closure_set(v___x_454_, 5, v_G_u2082_442_);
lean_closure_set(v___x_454_, 6, v_inst_443_);
lean_closure_set(v___x_454_, 7, v_inst_444_);
lean_closure_set(v___x_454_, 8, v_S_445_);
lean_closure_set(v___x_454_, 9, v_T_446_);
v___x_455_ = lp_mathlib_Finset_biUnion___redArg(v___f_450_, v_ports_449_, v___x_454_);
v___x_456_ = lp_mathlib_Multiset_ndunion___redArg(v___f_450_, v___x_453_, v___x_455_);
return v___x_456_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_liftSet(lean_object* v_V_u2081_457_, lean_object* v_V_u2082_458_, lean_object* v_inst_459_, lean_object* v_inst_460_, lean_object* v_G_u2081_461_, lean_object* v_G_u2082_462_, lean_object* v_inst_463_, lean_object* v_inst_464_, lean_object* v_S_465_, lean_object* v_T_466_){
_start:
{
lean_object* v___x_467_; 
v___x_467_ = lp_ShannonBounds_ShannonBounds_liftSet___redArg(v_inst_459_, v_inst_460_, v_G_u2081_461_, v_G_u2082_462_, v_inst_463_, v_inst_464_, v_S_465_, v_T_466_);
return v___x_467_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_liftX___redArg(lean_object* v_S_468_, lean_object* v_T_469_){
_start:
{
lean_object* v_X_470_; lean_object* v_X_471_; lean_object* v___x_472_; 
v_X_470_ = lean_ctor_get(v_S_468_, 4);
lean_inc(v_X_470_);
lean_dec_ref(v_S_468_);
v_X_471_ = lean_ctor_get(v_T_469_, 4);
lean_inc(v_X_471_);
lean_dec_ref(v_T_469_);
v___x_472_ = lp_mathlib_Multiset_product___redArg(v_X_470_, v_X_471_);
return v___x_472_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_liftX(lean_object* v_V_u2081_473_, lean_object* v_V_u2082_474_, lean_object* v_G_u2081_475_, lean_object* v_G_u2082_476_, lean_object* v_inst_477_, lean_object* v_inst_478_, lean_object* v_S_479_, lean_object* v_T_480_){
_start:
{
lean_object* v___x_481_; 
v___x_481_ = lp_ShannonBounds_ShannonBounds_liftX___redArg(v_S_479_, v_T_480_);
return v___x_481_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_liftX___boxed(lean_object* v_V_u2081_482_, lean_object* v_V_u2082_483_, lean_object* v_G_u2081_484_, lean_object* v_G_u2082_485_, lean_object* v_inst_486_, lean_object* v_inst_487_, lean_object* v_S_488_, lean_object* v_T_489_){
_start:
{
lean_object* v_res_490_; 
v_res_490_ = lp_ShannonBounds_ShannonBounds_liftX(v_V_u2081_482_, v_V_u2082_483_, v_G_u2081_484_, v_G_u2082_485_, v_inst_486_, v_inst_487_, v_S_488_, v_T_489_);
lean_dec_ref(v_inst_487_);
lean_dec_ref(v_inst_486_);
return v_res_490_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_liftPorts___redArg(lean_object* v_inst_491_, lean_object* v_inst_492_, lean_object* v_inst_493_, lean_object* v_inst_494_, lean_object* v_S_495_, lean_object* v_T_496_){
_start:
{
lean_object* v_ports_497_; lean_object* v_ports_498_; lean_object* v___f_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; 
v_ports_497_ = lean_ctor_get(v_T_496_, 1);
v_ports_498_ = lean_ctor_get(v_S_495_, 1);
lean_inc(v_ports_498_);
lean_inc_ref(v_inst_492_);
lean_inc_ref(v_inst_491_);
v___f_499_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_hstrip___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_499_, 0, v_inst_491_);
lean_closure_set(v___f_499_, 1, v_inst_492_);
v___x_500_ = lp_ShannonBounds_ShannonBounds_RichPortSystem_Xstar___redArg(v_inst_491_, v_inst_493_, v_S_495_);
lean_inc(v_ports_497_);
v___x_501_ = lp_mathlib_Multiset_product___redArg(v___x_500_, v_ports_497_);
v___x_502_ = lp_ShannonBounds_ShannonBounds_RichPortSystem_Xstar___redArg(v_inst_492_, v_inst_494_, v_T_496_);
v___x_503_ = lp_mathlib_Multiset_product___redArg(v_ports_498_, v___x_502_);
v___x_504_ = lp_mathlib_Multiset_ndunion___redArg(v___f_499_, v___x_501_, v___x_503_);
return v___x_504_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_liftPorts(lean_object* v_V_u2081_505_, lean_object* v_V_u2082_506_, lean_object* v_inst_507_, lean_object* v_inst_508_, lean_object* v_G_u2081_509_, lean_object* v_G_u2082_510_, lean_object* v_inst_511_, lean_object* v_inst_512_, lean_object* v_S_513_, lean_object* v_T_514_){
_start:
{
lean_object* v___x_515_; 
v___x_515_ = lp_ShannonBounds_ShannonBounds_liftPorts___redArg(v_inst_507_, v_inst_508_, v_inst_511_, v_inst_512_, v_S_513_, v_T_514_);
return v___x_515_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_liftEp___redArg(lean_object* v_inst_516_, lean_object* v_S_517_, lean_object* v_T_518_, uint8_t v_c_519_, lean_object* v_u_520_){
_start:
{
lean_object* v_fst_521_; lean_object* v_snd_522_; lean_object* v___x_524_; uint8_t v_isShared_525_; uint8_t v_isSharedCheck_540_; 
v_fst_521_ = lean_ctor_get(v_u_520_, 0);
v_snd_522_ = lean_ctor_get(v_u_520_, 1);
v_isSharedCheck_540_ = !lean_is_exclusive(v_u_520_);
if (v_isSharedCheck_540_ == 0)
{
v___x_524_ = v_u_520_;
v_isShared_525_ = v_isSharedCheck_540_;
goto v_resetjp_523_;
}
else
{
lean_inc(v_snd_522_);
lean_inc(v_fst_521_);
lean_dec(v_u_520_);
v___x_524_ = lean_box(0);
v_isShared_525_ = v_isSharedCheck_540_;
goto v_resetjp_523_;
}
v_resetjp_523_:
{
lean_object* v_ports_526_; lean_object* v_ep_527_; uint8_t v___x_528_; 
v_ports_526_ = lean_ctor_get(v_S_517_, 1);
lean_inc(v_ports_526_);
v_ep_527_ = lean_ctor_get(v_S_517_, 2);
lean_inc(v_ep_527_);
lean_dec_ref(v_S_517_);
lean_inc(v_fst_521_);
v___x_528_ = lp_mathlib_Multiset_decidableMem___aux__1___redArg(v_inst_516_, v_fst_521_, v_ports_526_);
if (v___x_528_ == 0)
{
lean_object* v_ep_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_533_; 
lean_dec(v_ep_527_);
v_ep_529_ = lean_ctor_get(v_T_518_, 2);
lean_inc(v_ep_529_);
lean_dec_ref(v_T_518_);
v___x_530_ = lean_box(v_c_519_);
v___x_531_ = lean_apply_2(v_ep_529_, v___x_530_, v_snd_522_);
if (v_isShared_525_ == 0)
{
lean_ctor_set(v___x_524_, 1, v___x_531_);
v___x_533_ = v___x_524_;
goto v_reusejp_532_;
}
else
{
lean_object* v_reuseFailAlloc_534_; 
v_reuseFailAlloc_534_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_534_, 0, v_fst_521_);
lean_ctor_set(v_reuseFailAlloc_534_, 1, v___x_531_);
v___x_533_ = v_reuseFailAlloc_534_;
goto v_reusejp_532_;
}
v_reusejp_532_:
{
return v___x_533_;
}
}
else
{
lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_538_; 
lean_dec_ref(v_T_518_);
v___x_535_ = lean_box(v_c_519_);
v___x_536_ = lean_apply_2(v_ep_527_, v___x_535_, v_fst_521_);
if (v_isShared_525_ == 0)
{
lean_ctor_set(v___x_524_, 0, v___x_536_);
v___x_538_ = v___x_524_;
goto v_reusejp_537_;
}
else
{
lean_object* v_reuseFailAlloc_539_; 
v_reuseFailAlloc_539_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_539_, 0, v___x_536_);
lean_ctor_set(v_reuseFailAlloc_539_, 1, v_snd_522_);
v___x_538_ = v_reuseFailAlloc_539_;
goto v_reusejp_537_;
}
v_reusejp_537_:
{
return v___x_538_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_liftEp___redArg___boxed(lean_object* v_inst_541_, lean_object* v_S_542_, lean_object* v_T_543_, lean_object* v_c_544_, lean_object* v_u_545_){
_start:
{
uint8_t v_c_boxed_546_; lean_object* v_res_547_; 
v_c_boxed_546_ = lean_unbox(v_c_544_);
v_res_547_ = lp_ShannonBounds_ShannonBounds_liftEp___redArg(v_inst_541_, v_S_542_, v_T_543_, v_c_boxed_546_, v_u_545_);
return v_res_547_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_liftEp(lean_object* v_V_u2081_548_, lean_object* v_V_u2082_549_, lean_object* v_inst_550_, lean_object* v_G_u2081_551_, lean_object* v_G_u2082_552_, lean_object* v_inst_553_, lean_object* v_inst_554_, lean_object* v_S_555_, lean_object* v_T_556_, uint8_t v_c_557_, lean_object* v_u_558_){
_start:
{
lean_object* v___x_559_; 
v___x_559_ = lp_ShannonBounds_ShannonBounds_liftEp___redArg(v_inst_550_, v_S_555_, v_T_556_, v_c_557_, v_u_558_);
return v___x_559_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_liftEp___boxed(lean_object* v_V_u2081_560_, lean_object* v_V_u2082_561_, lean_object* v_inst_562_, lean_object* v_G_u2081_563_, lean_object* v_G_u2082_564_, lean_object* v_inst_565_, lean_object* v_inst_566_, lean_object* v_S_567_, lean_object* v_T_568_, lean_object* v_c_569_, lean_object* v_u_570_){
_start:
{
uint8_t v_c_boxed_571_; lean_object* v_res_572_; 
v_c_boxed_571_ = lean_unbox(v_c_569_);
v_res_572_ = lp_ShannonBounds_ShannonBounds_liftEp(v_V_u2081_560_, v_V_u2082_561_, v_inst_562_, v_G_u2081_563_, v_G_u2082_564_, v_inst_565_, v_inst_566_, v_S_567_, v_T_568_, v_c_boxed_571_, v_u_570_);
lean_dec_ref(v_inst_566_);
lean_dec_ref(v_inst_565_);
return v_res_572_;
}
}
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_liftSide___redArg(lean_object* v_inst_573_, lean_object* v_S_574_, lean_object* v_T_575_, lean_object* v_u_576_){
_start:
{
lean_object* v_fst_577_; lean_object* v_snd_578_; lean_object* v_ports_579_; lean_object* v_side_580_; uint8_t v___x_581_; 
v_fst_577_ = lean_ctor_get(v_u_576_, 0);
lean_inc_n(v_fst_577_, 2);
v_snd_578_ = lean_ctor_get(v_u_576_, 1);
lean_inc(v_snd_578_);
lean_dec_ref(v_u_576_);
v_ports_579_ = lean_ctor_get(v_S_574_, 1);
lean_inc(v_ports_579_);
v_side_580_ = lean_ctor_get(v_S_574_, 3);
lean_inc_ref(v_side_580_);
lean_dec_ref(v_S_574_);
v___x_581_ = lp_mathlib_Multiset_decidableMem___aux__1___redArg(v_inst_573_, v_fst_577_, v_ports_579_);
if (v___x_581_ == 0)
{
lean_object* v_side_582_; lean_object* v___x_583_; uint8_t v___x_584_; 
lean_dec_ref(v_side_580_);
lean_dec(v_fst_577_);
v_side_582_ = lean_ctor_get(v_T_575_, 3);
lean_inc_ref(v_side_582_);
lean_dec_ref(v_T_575_);
v___x_583_ = lean_apply_1(v_side_582_, v_snd_578_);
v___x_584_ = lean_unbox(v___x_583_);
return v___x_584_;
}
else
{
lean_object* v___x_585_; uint8_t v___x_586_; 
lean_dec(v_snd_578_);
lean_dec_ref(v_T_575_);
v___x_585_ = lean_apply_1(v_side_580_, v_fst_577_);
v___x_586_ = lean_unbox(v___x_585_);
return v___x_586_;
}
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_liftSide___redArg___boxed(lean_object* v_inst_587_, lean_object* v_S_588_, lean_object* v_T_589_, lean_object* v_u_590_){
_start:
{
uint8_t v_res_591_; lean_object* v_r_592_; 
v_res_591_ = lp_ShannonBounds_ShannonBounds_liftSide___redArg(v_inst_587_, v_S_588_, v_T_589_, v_u_590_);
v_r_592_ = lean_box(v_res_591_);
return v_r_592_;
}
}
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_liftSide(lean_object* v_V_u2081_593_, lean_object* v_V_u2082_594_, lean_object* v_inst_595_, lean_object* v_G_u2081_596_, lean_object* v_G_u2082_597_, lean_object* v_inst_598_, lean_object* v_inst_599_, lean_object* v_S_600_, lean_object* v_T_601_, lean_object* v_u_602_){
_start:
{
uint8_t v___x_603_; 
v___x_603_ = lp_ShannonBounds_ShannonBounds_liftSide___redArg(v_inst_595_, v_S_600_, v_T_601_, v_u_602_);
return v___x_603_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_liftSide___boxed(lean_object* v_V_u2081_604_, lean_object* v_V_u2082_605_, lean_object* v_inst_606_, lean_object* v_G_u2081_607_, lean_object* v_G_u2082_608_, lean_object* v_inst_609_, lean_object* v_inst_610_, lean_object* v_S_611_, lean_object* v_T_612_, lean_object* v_u_613_){
_start:
{
uint8_t v_res_614_; lean_object* v_r_615_; 
v_res_614_ = lp_ShannonBounds_ShannonBounds_liftSide(v_V_u2081_604_, v_V_u2082_605_, v_inst_606_, v_G_u2081_607_, v_G_u2082_608_, v_inst_609_, v_inst_610_, v_S_611_, v_T_612_, v_u_613_);
lean_dec_ref(v_inst_610_);
lean_dec_ref(v_inst_609_);
v_r_615_ = lean_box(v_res_614_);
return v_r_615_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_liftNeutral___redArg(lean_object* v_inst_616_, lean_object* v_inst_617_, lean_object* v_inst_618_, lean_object* v_inst_619_, lean_object* v_S_620_, lean_object* v_T_621_){
_start:
{
lean_object* v_X_622_; lean_object* v_X_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___f_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; 
v_X_622_ = lean_ctor_get(v_S_620_, 4);
lean_inc(v_X_622_);
v_X_623_ = lean_ctor_get(v_T_621_, 4);
lean_inc(v_X_623_);
lean_inc_ref_n(v_inst_616_, 2);
v___x_624_ = lp_ShannonBounds_ShannonBounds_RichPortSystem_Xstar___redArg(v_inst_616_, v_inst_618_, v_S_620_);
lean_inc_ref_n(v_inst_617_, 2);
v___x_625_ = lp_ShannonBounds_ShannonBounds_RichPortSystem_Xstar___redArg(v_inst_617_, v_inst_619_, v_T_621_);
lean_inc(v___x_625_);
lean_inc(v___x_624_);
v___x_626_ = lp_mathlib_Multiset_product___redArg(v___x_624_, v___x_625_);
v___f_627_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_hstrip___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_627_, 0, v_inst_616_);
lean_closure_set(v___f_627_, 1, v_inst_617_);
v___x_628_ = lp_mathlib_Multiset_sub___redArg(v_inst_616_, v_X_622_, v___x_624_);
v___x_629_ = lp_mathlib_Multiset_sub___redArg(v_inst_617_, v_X_623_, v___x_625_);
v___x_630_ = lp_mathlib_Multiset_product___redArg(v___x_628_, v___x_629_);
v___x_631_ = lp_mathlib_Multiset_ndunion___redArg(v___f_627_, v___x_626_, v___x_630_);
return v___x_631_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_liftNeutral(lean_object* v_V_u2081_632_, lean_object* v_V_u2082_633_, lean_object* v_inst_634_, lean_object* v_inst_635_, lean_object* v_G_u2081_636_, lean_object* v_G_u2082_637_, lean_object* v_inst_638_, lean_object* v_inst_639_, lean_object* v_S_640_, lean_object* v_T_641_){
_start:
{
lean_object* v___x_642_; 
v___x_642_ = lp_ShannonBounds_ShannonBounds_liftNeutral___redArg(v_inst_634_, v_inst_635_, v_inst_638_, v_inst_639_, v_S_640_, v_T_641_);
return v___x_642_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_liftRPS___redArg(lean_object* v_inst_643_, lean_object* v_inst_644_, lean_object* v_G_u2081_645_, lean_object* v_G_u2082_646_, lean_object* v_inst_647_, lean_object* v_inst_648_, lean_object* v_S_649_, lean_object* v_T_650_){
_start:
{
lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; 
lean_inc_ref_n(v_T_650_, 4);
lean_inc_ref_n(v_S_649_, 4);
lean_inc_ref_n(v_inst_648_, 3);
lean_inc_ref_n(v_inst_647_, 3);
lean_inc_ref(v_inst_644_);
lean_inc_ref_n(v_inst_643_, 3);
v___x_651_ = lp_ShannonBounds_ShannonBounds_liftSet___redArg(v_inst_643_, v_inst_644_, v_G_u2081_645_, v_G_u2082_646_, v_inst_647_, v_inst_648_, v_S_649_, v_T_650_);
v___x_652_ = lp_ShannonBounds_ShannonBounds_liftPorts___redArg(v_inst_643_, v_inst_644_, v_inst_647_, v_inst_648_, v_S_649_, v_T_650_);
v___x_653_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_liftEp___boxed), 11, 9);
lean_closure_set(v___x_653_, 0, lean_box(0));
lean_closure_set(v___x_653_, 1, lean_box(0));
lean_closure_set(v___x_653_, 2, v_inst_643_);
lean_closure_set(v___x_653_, 3, v_G_u2081_645_);
lean_closure_set(v___x_653_, 4, v_G_u2082_646_);
lean_closure_set(v___x_653_, 5, v_inst_647_);
lean_closure_set(v___x_653_, 6, v_inst_648_);
lean_closure_set(v___x_653_, 7, v_S_649_);
lean_closure_set(v___x_653_, 8, v_T_650_);
v___x_654_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_liftSide___boxed), 10, 9);
lean_closure_set(v___x_654_, 0, lean_box(0));
lean_closure_set(v___x_654_, 1, lean_box(0));
lean_closure_set(v___x_654_, 2, v_inst_643_);
lean_closure_set(v___x_654_, 3, v_G_u2081_645_);
lean_closure_set(v___x_654_, 4, v_G_u2082_646_);
lean_closure_set(v___x_654_, 5, v_inst_647_);
lean_closure_set(v___x_654_, 6, v_inst_648_);
lean_closure_set(v___x_654_, 7, v_S_649_);
lean_closure_set(v___x_654_, 8, v_T_650_);
v___x_655_ = lp_ShannonBounds_ShannonBounds_liftX___redArg(v_S_649_, v_T_650_);
v___x_656_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_656_, 0, v___x_651_);
lean_ctor_set(v___x_656_, 1, v___x_652_);
lean_ctor_set(v___x_656_, 2, v___x_653_);
lean_ctor_set(v___x_656_, 3, v___x_654_);
lean_ctor_set(v___x_656_, 4, v___x_655_);
return v___x_656_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_liftRPS(lean_object* v_V_u2081_657_, lean_object* v_V_u2082_658_, lean_object* v_inst_659_, lean_object* v_inst_660_, lean_object* v_G_u2081_661_, lean_object* v_G_u2082_662_, lean_object* v_inst_663_, lean_object* v_inst_664_, lean_object* v_S_665_, lean_object* v_T_666_){
_start:
{
lean_object* v___x_667_; 
v___x_667_ = lp_ShannonBounds_ShannonBounds_liftRPS___redArg(v_inst_659_, v_inst_660_, v_G_u2081_661_, v_G_u2082_662_, v_inst_663_, v_inst_664_, v_S_665_, v_T_666_);
return v___x_667_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Combinatorics_SimpleGraph_Clique(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Combinatorics_SimpleGraph_Finite(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Data_Finset_Prod(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_ShannonBounds_ShannonBounds_Lift(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Combinatorics_SimpleGraph_Clique(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Combinatorics_SimpleGraph_Finite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Data_Finset_Prod(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
