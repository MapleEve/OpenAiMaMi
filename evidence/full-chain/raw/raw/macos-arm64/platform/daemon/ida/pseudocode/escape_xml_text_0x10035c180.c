// __ZN13codexmate_lib8platform6daemon15escape_xml_text @ 0x10035c180 | 基线 same-set
__int64 __fastcall codexmate_lib::platform::daemon::escape_xml_text::h1c8676b8f15d692e(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // r13
  __int64 result; // rax
  __int64 v8; // [rsp+8h] [rbp-88h] BYREF
  __int64 v9; // [rsp+10h] [rbp-80h]
  __int64 v10; // [rsp+18h] [rbp-78h]
  __int64 v11; // [rsp+20h] [rbp-70h] BYREF
  __int64 v12; // [rsp+28h] [rbp-68h]
  __int64 v13; // [rsp+30h] [rbp-60h]
  __int64 v14; // [rsp+38h] [rbp-58h] BYREF
  __int64 v15; // [rsp+40h] [rbp-50h]
  __int64 v16; // [rsp+48h] [rbp-48h]
  __int64 v17; // [rsp+50h] [rbp-40h] BYREF
  __int64 v18; // [rsp+58h] [rbp-38h]
  __int64 v19; // [rsp+60h] [rbp-30h]

  alloc::str::_$LT$impl$u20$str$GT$::replace::hd6a1094b8ae40c7f( /*0x10035c1ad*/
    &v8,
    a2,
    a3,
    38,
    "&amp;&quot;&apos;unloadLibraryLaunchAgentsdev.aionsale.auto-switch.plistdev.aionsale.auto-switchxattr-pcom.apple.quarantine",
    5);
  v3 = v9; /*0x10035c1b2*/
  alloc::str::_$LT$impl$u20$str$GT$::replace::hd6a1094b8ae40c7f(&v11, v9, v10, 60, &unk_1015E3B54, 4); /*0x10035c1d3*/
  v4 = v12; /*0x10035c1d8*/
  alloc::str::_$LT$impl$u20$str$GT$::replace::hd6a1094b8ae40c7f(&v14, v12, v13, 62, &unk_1015E3B58, 4); /*0x10035c1f9*/
  v5 = v15; /*0x10035c1fe*/
  alloc::str::_$LT$impl$u20$str$GT$::replace::hd6a1094b8ae40c7f( /*0x10035c21f*/
    &v17,
    v15,
    v16,
    34,
    "&quot;&apos;unloadLibraryLaunchAgentsdev.aionsale.auto-switch.plistdev.aionsale.auto-switchxattr-pcom.apple.quarantine",
    6);
  v6 = v18; /*0x10035c224*/
  result = alloc::str::_$LT$impl$u20$str$GT$::replace::hd6a1094b8ae40c7f( /*0x10035c244*/
             a1,
             v18,
             v19,
             39,
             "&apos;unloadLibraryLaunchAgentsdev.aionsale.auto-switch.plistdev.aionsale.auto-switchxattr-pcom.apple.quarantine",
             6);
  if ( v17 ) /*0x10035c250*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v17, 1); /*0x10035c25a*/
  if ( v14 ) /*0x10035c266*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v14, 1); /*0x10035c270*/
  if ( v11 ) /*0x10035c27c*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v11, 1); /*0x10035c286*/
  if ( v8 ) /*0x10035c295*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v8, 1); /*0x10035c2ad*/
  return result; /*0x10035c29f*/
}