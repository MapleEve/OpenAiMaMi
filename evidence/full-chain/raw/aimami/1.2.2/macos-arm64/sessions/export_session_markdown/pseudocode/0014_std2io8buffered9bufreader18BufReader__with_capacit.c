// mac 1.2.2 NEW export_session_markdown 0x100331760 d=1
__int64 __fastcall std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hd0c8c4721f166e25(
        __int64 a1,
        signed __int64 a2,
        int a3)
{
  __int64 v4; // r15
  __int64 v5; // rax

  if ( a2 < 0 ) /*0x100331773*/
  {
    v4 = 0; /*0x100331775*/
    goto LABEL_3; /*0x100331775*/
  }
  if ( a2 ) /*0x100331785*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10033178a*/
    v4 = 1; /*0x10033178f*/
    v5 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a2, 1u); /*0x10033179d*/
    if ( !v5 ) /*0x1003317a5*/
LABEL_3:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v4, a2); /*0x100331778*/
  }
  else
  {
    v5 = 1; /*0x1003317ac*/
  }
  *(_QWORD *)a1 = v5; /*0x1003317b1*/
  *(_QWORD *)(a1 + 8) = a2; /*0x1003317b4*/
  *(_QWORD *)(a1 + 16) = 0; /*0x1003317b8*/
  *(_QWORD *)(a1 + 24) = 0; /*0x1003317c0*/
  *(_QWORD *)(a1 + 32) = 0; /*0x1003317c8*/
  *(_DWORD *)(a1 + 40) = a3; /*0x1003317d0*/
  return a1; /*0x1003317d6*/
}