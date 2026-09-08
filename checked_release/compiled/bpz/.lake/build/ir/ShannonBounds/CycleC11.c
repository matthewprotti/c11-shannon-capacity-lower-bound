// Lean compiler output
// Module: ShannonBounds.CycleC11
// Imports: public import Init public meta import Init public import ShannonBounds.BaseC11 public import ShannonBounds.Defs
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
lean_object* lean_nat_mod(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lp_ShannonBounds_ShannonBounds_BaseC11_dgt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_BaseC11_Cyc11;
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_BaseC11_decCyc11___aux__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_BaseC11_decCyc11___aux__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_BaseC11_decCyc11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_BaseC11_decCyc11___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_BaseC11_coord(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_BaseC11_coord___boxed(lean_object*, lean_object*);
static lean_object* _init_lp_ShannonBounds_ShannonBounds_BaseC11_Cyc11(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_box(0);
return v___x_1_;
}
}
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_BaseC11_decCyc11___aux__1(lean_object* v_a_2_, lean_object* v_b_3_){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; uint8_t v___x_8_; 
v___x_4_ = lean_unsigned_to_nat(1u);
v___x_5_ = lean_nat_add(v_a_2_, v___x_4_);
v___x_6_ = lean_unsigned_to_nat(11u);
v___x_7_ = lean_nat_mod(v___x_5_, v___x_6_);
lean_dec(v___x_5_);
v___x_8_ = lean_nat_dec_eq(v___x_7_, v_b_3_);
lean_dec(v___x_7_);
if (v___x_8_ == 0)
{
lean_object* v___x_9_; lean_object* v___x_10_; uint8_t v___x_11_; 
v___x_9_ = lean_nat_add(v_b_3_, v___x_4_);
v___x_10_ = lean_nat_mod(v___x_9_, v___x_6_);
lean_dec(v___x_9_);
v___x_11_ = lean_nat_dec_eq(v___x_10_, v_a_2_);
lean_dec(v___x_10_);
return v___x_11_;
}
else
{
return v___x_8_;
}
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_BaseC11_decCyc11___aux__1___boxed(lean_object* v_a_12_, lean_object* v_b_13_){
_start:
{
uint8_t v_res_14_; lean_object* v_r_15_; 
v_res_14_ = lp_ShannonBounds_ShannonBounds_BaseC11_decCyc11___aux__1(v_a_12_, v_b_13_);
lean_dec(v_b_13_);
lean_dec(v_a_12_);
v_r_15_ = lean_box(v_res_14_);
return v_r_15_;
}
}
LEAN_EXPORT uint8_t lp_ShannonBounds_ShannonBounds_BaseC11_decCyc11(lean_object* v_a_16_, lean_object* v_b_17_){
_start:
{
uint8_t v___x_18_; 
v___x_18_ = lp_ShannonBounds_ShannonBounds_BaseC11_decCyc11___aux__1(v_a_16_, v_b_17_);
return v___x_18_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_BaseC11_decCyc11___boxed(lean_object* v_a_19_, lean_object* v_b_20_){
_start:
{
uint8_t v_res_21_; lean_object* v_r_22_; 
v_res_21_ = lp_ShannonBounds_ShannonBounds_BaseC11_decCyc11(v_a_19_, v_b_20_);
lean_dec(v_b_20_);
lean_dec(v_a_19_);
v_r_22_ = lean_box(v_res_21_);
return v_r_22_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_BaseC11_coord(lean_object* v_m_23_, lean_object* v_u_24_){
_start:
{
lean_object* v___x_25_; 
v___x_25_ = lp_ShannonBounds_ShannonBounds_BaseC11_dgt(v_m_23_, v_u_24_);
return v___x_25_;
}
}
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_BaseC11_coord___boxed(lean_object* v_m_26_, lean_object* v_u_27_){
_start:
{
lean_object* v_res_28_; 
v_res_28_ = lp_ShannonBounds_ShannonBounds_BaseC11_coord(v_m_26_, v_u_27_);
lean_dec(v_u_27_);
lean_dec(v_m_26_);
return v_res_28_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_ShannonBounds_ShannonBounds_BaseC11(uint8_t builtin);
lean_object* initialize_ShannonBounds_ShannonBounds_Defs(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_ShannonBounds_ShannonBounds_CycleC11(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ShannonBounds_ShannonBounds_BaseC11(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ShannonBounds_ShannonBounds_Defs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_ShannonBounds_ShannonBounds_BaseC11_Cyc11 = _init_lp_ShannonBounds_ShannonBounds_BaseC11_Cyc11();
lean_mark_persistent(lp_ShannonBounds_ShannonBounds_BaseC11_Cyc11);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
