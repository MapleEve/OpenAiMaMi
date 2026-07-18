// mac 1.2.2 NEW codexmate_lib4core12debug_bundle24default_bundle_f 0x101361020 d=2
__int64 __fastcall std::time::SystemTime::duration_since::had059553cab94f96(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int128 v5; // [rsp+0h] [rbp-30h] BYREF
  int v6; // [rsp+10h] [rbp-20h]
  __int64 v7; // [rsp+18h] [rbp-18h] BYREF
  int v8; // [rsp+20h] [rbp-10h]

  v7 = a3; /*0x10136102c*/
  v8 = a4; /*0x101361030*/
  std::sys::pal::unix::time::Timespec::sub_timespec::h8e18678a0803d2e9(&v5, a2, &v7); /*0x10136103b*/
  *(_DWORD *)(a1 + 16) = v6; /*0x101361043*/
  *(_OWORD *)a1 = v5; /*0x10136104a*/
  return a1; /*0x101361050*/
}