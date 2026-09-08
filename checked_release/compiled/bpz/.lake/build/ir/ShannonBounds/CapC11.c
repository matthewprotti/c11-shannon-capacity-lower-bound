// Lean compiler output
// Module: ShannonBounds.CapC11
// Imports: public import Init public meta import Init public import ShannonBounds.CycleC11 public import ShannonBounds.Flatten public import Mathlib.Algebra.BigOperators.Fin public import Mathlib.Combinatorics.SimpleGraph.Circulant
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
lean_object* lp_mathlib_finFunctionFinEquiv(lean_object*, lean_object*);
lean_object* lp_mathlib_Equiv_symm___redArg(lean_object*);
static lean_once_cell_t lp_ShannonBounds_ShannonBounds_CapC11_codeEquiv___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ShannonBounds_ShannonBounds_CapC11_codeEquiv___closed__0;
static lean_once_cell_t lp_ShannonBounds_ShannonBounds_CapC11_codeEquiv___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ShannonBounds_ShannonBounds_CapC11_codeEquiv___closed__1;
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CapC11_codeEquiv;
LEAN_EXPORT lean_object* lp_ShannonBounds_ShannonBounds_CapC11_G3__iso;
static lean_object* _init_lp_ShannonBounds_ShannonBounds_CapC11_codeEquiv___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_1_ = lean_unsigned_to_nat(3u);
v___x_2_ = lean_unsigned_to_nat(11u);
v___x_3_ = lp_mathlib_finFunctionFinEquiv(v___x_2_, v___x_1_);
return v___x_3_;
}
}
static lean_object* _init_lp_ShannonBounds_ShannonBounds_CapC11_codeEquiv___closed__1(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_4_ = lean_obj_once(&lp_ShannonBounds_ShannonBounds_CapC11_codeEquiv___closed__0, &lp_ShannonBounds_ShannonBounds_CapC11_codeEquiv___closed__0_once, _init_lp_ShannonBounds_ShannonBounds_CapC11_codeEquiv___closed__0);
v___x_5_ = lp_mathlib_Equiv_symm___redArg(v___x_4_);
return v___x_5_;
}
}
static lean_object* _init_lp_ShannonBounds_ShannonBounds_CapC11_codeEquiv(void){
_start:
{
lean_object* v___x_6_; 
v___x_6_ = lean_obj_once(&lp_ShannonBounds_ShannonBounds_CapC11_codeEquiv___closed__1, &lp_ShannonBounds_ShannonBounds_CapC11_codeEquiv___closed__1_once, _init_lp_ShannonBounds_ShannonBounds_CapC11_codeEquiv___closed__1);
return v___x_6_;
}
}
static lean_object* _init_lp_ShannonBounds_ShannonBounds_CapC11_G3__iso(void){
_start:
{
lean_object* v___x_7_; 
v___x_7_ = lp_ShannonBounds_ShannonBounds_CapC11_codeEquiv;
return v___x_7_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_ShannonBounds_ShannonBounds_CycleC11(uint8_t builtin);
lean_object* initialize_ShannonBounds_ShannonBounds_Flatten(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Algebra_BigOperators_Fin(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Combinatorics_SimpleGraph_Circulant(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_ShannonBounds_ShannonBounds_CapC11(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ShannonBounds_ShannonBounds_CycleC11(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ShannonBounds_ShannonBounds_Flatten(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Algebra_BigOperators_Fin(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Combinatorics_SimpleGraph_Circulant(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_ShannonBounds_ShannonBounds_CapC11_codeEquiv = _init_lp_ShannonBounds_ShannonBounds_CapC11_codeEquiv();
lean_mark_persistent(lp_ShannonBounds_ShannonBounds_CapC11_codeEquiv);
lp_ShannonBounds_ShannonBounds_CapC11_G3__iso = _init_lp_ShannonBounds_ShannonBounds_CapC11_G3__iso();
lean_mark_persistent(lp_ShannonBounds_ShannonBounds_CapC11_G3__iso);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
