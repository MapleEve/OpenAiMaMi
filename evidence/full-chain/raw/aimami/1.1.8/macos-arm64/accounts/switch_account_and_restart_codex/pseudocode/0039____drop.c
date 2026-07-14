// mac 1.1.8 switch_account_and_restart_codex node va=0x100e692a0 depth=4
// _::drop
__int64 __fastcall _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h095c2f3b41bdbc00(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 i; // r15
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD v12[9]; // [rsp+0h] [rbp-80h] BYREF
  _QWORD v13[2]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v14; // [rsp+58h] [rbp-28h]

  v1 = *a1; /*0x100e692af*/
  if ( *a1 ) /*0x100e692af*/
  {
    v2 = a1[1]; /*0x100e692b7*/
    v3 = a1[2]; /*0x100e692bb*/
    v12[1] = 0; /*0x100e692bf*/
    v12[2] = v1; /*0x100e692c7*/
    v12[3] = v2; /*0x100e692cb*/
    v12[5] = 0; /*0x100e692cf*/
    v12[6] = v1; /*0x100e692d7*/
    v12[7] = v2; /*0x100e692db*/
    v4 = 1; /*0x100e692df*/
  }
  else
  {
    v4 = 0; /*0x100e692e6*/
    v3 = 0; /*0x100e692e8*/
  }
  v12[0] = v4; /*0x100e692ea*/
  v12[4] = v4; /*0x100e692ee*/
  v12[8] = v3; /*0x100e692f2*/
  result = ((__int64 (__fastcall *)(_QWORD *, _QWORD *))alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::h91cb0bbafe5cf10d)( /*0x100e692fe*/
             v13,
             v12);
  for ( i = v13[0]; v13[0]; i = v13[0] ) /*0x100e6930a*/
  {
    v7 = v14; /*0x100e69320*/
    if ( *(_QWORD *)(i + 24 * v14 + 8) ) /*0x100e69328*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e69340*/
    core::ptr::drop_in_place$LT$alloc..collections..btree..node..Handle$LT$alloc..collections..btree..node..NodeRef$LT$alloc..collections..btree..node..marker..Dying$C$K$C$V$C$NodeType$GT$$C$alloc..collections..btree..node..marker..KV$GT$..drop_key_val..Dropper$LT$tauri_utils..acl..manifest..Manifest$GT$$GT$::h88749e83deee7532(i + 152 * v7 + 272); /*0x100e69354*/
    result = ((__int64 (__fastcall *)(_QWORD *, _QWORD *, __int64, __int64, __int64, __int64))alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::h91cb0bbafe5cf10d)( /*0x100e6935f*/
               v13,
               v12,
               v8,
               v9,
               v10,
               v11);
  }
  return result; /*0x100e6936d*/
}