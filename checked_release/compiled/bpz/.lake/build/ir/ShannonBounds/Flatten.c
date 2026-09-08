// Lean compiler output
// Module: ShannonBounds.Flatten
// Imports: public import Init public meta import Init public import ShannonBounds.Lift public import ShannonBounds.Defs
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
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Fin_addCases___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_mathlib_Equiv_prodCongr___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_splitEquiv___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_splitEquiv___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_splitEquiv___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_splitEquiv___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_splitEquiv___redArg___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_splitEquiv___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_splitEquiv___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_splitEquiv(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_splitEquiv___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__add__iso___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__add__iso(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__add__iso___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongProd__congr___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongProd__congr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongProd__congr___boxed(lean_object**);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_splitEquiv___redArg___lam__0(lean_object* v_f_1_, lean_object* v_i_2_){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lean_apply_1(v_f_1_, v_i_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_splitEquiv___redArg___lam__1(lean_object* v_m_4_, lean_object* v_f_5_, lean_object* v_j_6_){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; 
v___x_7_ = lean_nat_add(v_m_4_, v_j_6_);
v___x_8_ = lean_apply_1(v_f_5_, v___x_7_);
return v___x_8_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_splitEquiv___redArg___lam__1___boxed(lean_object* v_m_9_, lean_object* v_f_10_, lean_object* v_j_11_){
_start:
{
lean_object* v_res_12_; 
v_res_12_ = lp_ShannonBounds_ShannonBounds_splitEquiv___redArg___lam__1(v_m_9_, v_f_10_, v_j_11_);
lean_dec(v_j_11_);
lean_dec(v_m_9_);
return v_res_12_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_splitEquiv___redArg___lam__2(lean_object* v_m_13_, lean_object* v_f_14_){
_start:
{
lean_object* v___f_15_; lean_object* v___f_16_; lean_object* v___x_17_; 
lean_inc(v_f_14_);
v___f_15_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_splitEquiv___redArg___lam__0), 2, 1);
lean_closure_set(v___f_15_, 0, v_f_14_);
v___f_16_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_splitEquiv___redArg___lam__1___boxed), 3, 2);
lean_closure_set(v___f_16_, 0, v_m_13_);
lean_closure_set(v___f_16_, 1, v_f_14_);
v___x_17_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_17_, 0, v___f_15_);
lean_ctor_set(v___x_17_, 1, v___f_16_);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_splitEquiv___redArg___lam__3(lean_object* v_m_18_, lean_object* v_p_19_, lean_object* v_i_20_){
_start:
{
lean_object* v_fst_21_; lean_object* v_snd_22_; lean_object* v___x_23_; 
v_fst_21_ = lean_ctor_get(v_p_19_, 0);
lean_inc(v_fst_21_);
v_snd_22_ = lean_ctor_get(v_p_19_, 1);
lean_inc(v_snd_22_);
lean_dec_ref(v_p_19_);
v___x_23_ = l_Fin_addCases___redArg(v_m_18_, v_fst_21_, v_snd_22_, v_i_20_);
return v___x_23_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_splitEquiv___redArg___lam__3___boxed(lean_object* v_m_24_, lean_object* v_p_25_, lean_object* v_i_26_){
_start:
{
lean_object* v_res_27_; 
v_res_27_ = lp_ShannonBounds_ShannonBounds_splitEquiv___redArg___lam__3(v_m_24_, v_p_25_, v_i_26_);
lean_dec(v_m_24_);
return v_res_27_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_splitEquiv___redArg(lean_object* v_m_28_){
_start:
{
lean_object* v___f_29_; lean_object* v___f_30_; lean_object* v___x_31_; 
lean_inc(v_m_28_);
v___f_29_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_splitEquiv___redArg___lam__2), 2, 1);
lean_closure_set(v___f_29_, 0, v_m_28_);
v___f_30_ = lean_alloc_closure((void*)(lp_ShannonBounds_ShannonBounds_splitEquiv___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_30_, 0, v_m_28_);
v___x_31_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_31_, 0, v___f_29_);
lean_ctor_set(v___x_31_, 1, v___f_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_splitEquiv(lean_object* v_m_32_, lean_object* v_n_33_, lean_object* v_V_34_){
_start:
{
lean_object* v___x_35_; 
v___x_35_ = lp_ShannonBounds_ShannonBounds_splitEquiv___redArg(v_m_32_);
return v___x_35_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_splitEquiv___boxed(lean_object* v_m_36_, lean_object* v_n_37_, lean_object* v_V_38_){
_start:
{
lean_object* v_res_39_; 
v_res_39_ = lp_ShannonBounds_ShannonBounds_splitEquiv(v_m_36_, v_n_37_, v_V_38_);
lean_dec(v_n_37_);
return v_res_39_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__add__iso___redArg(lean_object* v_m_40_){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = lp_ShannonBounds_ShannonBounds_splitEquiv___redArg(v_m_40_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__add__iso(lean_object* v_V_42_, lean_object* v_inst_43_, lean_object* v_G_44_, lean_object* v_inst_45_, lean_object* v_m_46_, lean_object* v_n_47_){
_start:
{
lean_object* v___x_48_; 
v___x_48_ = lp_ShannonBounds_ShannonBounds_splitEquiv___redArg(v_m_46_);
return v___x_48_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongPower__add__iso___boxed(lean_object* v_V_49_, lean_object* v_inst_50_, lean_object* v_G_51_, lean_object* v_inst_52_, lean_object* v_m_53_, lean_object* v_n_54_){
_start:
{
lean_object* v_res_55_; 
v_res_55_ = lp_ShannonBounds_ShannonBounds_strongPower__add__iso(v_V_49_, v_inst_50_, v_G_51_, v_inst_52_, v_m_53_, v_n_54_);
lean_dec(v_n_54_);
lean_dec_ref(v_inst_52_);
lean_dec_ref(v_inst_50_);
return v_res_55_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongProd__congr___redArg(lean_object* v_e_56_, lean_object* v_f_57_){
_start:
{
lean_object* v___x_58_; 
v___x_58_ = lp_mathlib_Equiv_prodCongr___redArg(v_e_56_, v_f_57_);
return v___x_58_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongProd__congr(lean_object* v_V_u2081_59_, lean_object* v_V_u2082_60_, lean_object* v_W_u2081_61_, lean_object* v_W_u2082_62_, lean_object* v_inst_63_, lean_object* v_inst_64_, lean_object* v_inst_65_, lean_object* v_inst_66_, lean_object* v_inst_67_, lean_object* v_inst_68_, lean_object* v_inst_69_, lean_object* v_inst_70_, lean_object* v_A_71_, lean_object* v_A_x27_72_, lean_object* v_B_73_, lean_object* v_B_x27_74_, lean_object* v_inst_75_, lean_object* v_inst_76_, lean_object* v_inst_77_, lean_object* v_inst_78_, lean_object* v_e_79_, lean_object* v_f_80_){
_start:
{
lean_object* v___x_81_; 
v___x_81_ = lp_mathlib_Equiv_prodCongr___redArg(v_e_79_, v_f_80_);
return v___x_81_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_strongProd__congr___boxed(lean_object** _args){
lean_object* v_V_u2081_82_ = _args[0];
lean_object* v_V_u2082_83_ = _args[1];
lean_object* v_W_u2081_84_ = _args[2];
lean_object* v_W_u2082_85_ = _args[3];
lean_object* v_inst_86_ = _args[4];
lean_object* v_inst_87_ = _args[5];
lean_object* v_inst_88_ = _args[6];
lean_object* v_inst_89_ = _args[7];
lean_object* v_inst_90_ = _args[8];
lean_object* v_inst_91_ = _args[9];
lean_object* v_inst_92_ = _args[10];
lean_object* v_inst_93_ = _args[11];
lean_object* v_A_94_ = _args[12];
lean_object* v_A_x27_95_ = _args[13];
lean_object* v_B_96_ = _args[14];
lean_object* v_B_x27_97_ = _args[15];
lean_object* v_inst_98_ = _args[16];
lean_object* v_inst_99_ = _args[17];
lean_object* v_inst_100_ = _args[18];
lean_object* v_inst_101_ = _args[19];
lean_object* v_e_102_ = _args[20];
lean_object* v_f_103_ = _args[21];
_start:
{
lean_object* v_res_104_; 
v_res_104_ = lp_ShannonBounds_ShannonBounds_strongProd__congr(v_V_u2081_82_, v_V_u2082_83_, v_W_u2081_84_, v_W_u2082_85_, v_inst_86_, v_inst_87_, v_inst_88_, v_inst_89_, v_inst_90_, v_inst_91_, v_inst_92_, v_inst_93_, v_A_94_, v_A_x27_95_, v_B_96_, v_B_x27_97_, v_inst_98_, v_inst_99_, v_inst_100_, v_inst_101_, v_e_102_, v_f_103_);
lean_dec_ref(v_inst_101_);
lean_dec_ref(v_inst_100_);
lean_dec_ref(v_inst_99_);
lean_dec_ref(v_inst_98_);
lean_dec_ref(v_inst_93_);
lean_dec_ref(v_inst_92_);
lean_dec_ref(v_inst_91_);
lean_dec_ref(v_inst_90_);
lean_dec(v_inst_89_);
lean_dec(v_inst_88_);
lean_dec(v_inst_87_);
lean_dec(v_inst_86_);
return v_res_104_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_ShannonBounds_ShannonBounds_Lift(uint8_t builtin);
lean_object* initialize_ShannonBounds_ShannonBounds_Defs(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_ShannonBounds_ShannonBounds_Flatten(uint8_t builtin) {
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
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
