// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND resolve_relay_route node 0x1010e80d0 depth=3
void __fastcall __noreturn core::str::slice_error_fail_rt::h551e3874f685631f(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5)
{
  __int64 v5; // rax
  __int64 v6; // r9
  unsigned __int64 v7; // rax
  bool v8; // cf
  _BOOL8 v9; // r9
  unsigned __int64 *v10; // rcx
  char v11; // dl
  __int64 v12; // rdx
  int v13; // eax
  int v14; // r9d
  int v15; // esi
  unsigned int v16; // eax
  unsigned __int64 v17; // [rsp+0h] [rbp-A0h] BYREF
  _QWORD v18[2]; // [rsp+8h] [rbp-98h] BYREF
  _QWORD v19[2]; // [rsp+18h] [rbp-88h] BYREF
  unsigned __int64 *v20; // [rsp+28h] [rbp-78h] BYREF
  __int64 (__fastcall *v21)(); // [rsp+30h] [rbp-70h]
  unsigned int *v22; // [rsp+38h] [rbp-68h]
  __int64 (__fastcall *v23)(); // [rsp+40h] [rbp-60h]
  __int64 *v24; // [rsp+48h] [rbp-58h]
  __int64 (__fastcall *v25)(); // [rsp+50h] [rbp-50h]
  __int64 *v26; // [rsp+58h] [rbp-48h]
  __int64 (__fastcall *v27)(); // [rsp+60h] [rbp-40h]
  _QWORD *v28; // [rsp+68h] [rbp-38h]
  __int64 (__fastcall *v29)(); // [rsp+70h] [rbp-30h]
  unsigned __int64 v30; // [rsp+78h] [rbp-28h] BYREF
  unsigned __int64 v31; // [rsp+80h] [rbp-20h] BYREF
  __int64 v32; // [rsp+88h] [rbp-18h] BYREF
  unsigned __int64 v33; // [rsp+90h] [rbp-10h]
  unsigned int v34; // [rsp+9Ch] [rbp-4h] BYREF

  v31 = a3; /*0x1010e80db*/
  v30 = a4; /*0x1010e80df*/
  if ( a2 >= 0x101 ) /*0x1010e80ea*/
  {
    v7 = 256; /*0x1010e80fe*/
    while ( 1 ) /*0x1010e8110*/
    {
      if ( *(char *)(a1 + v7) > -65 ) /*0x1010e8114*/
        goto LABEL_13; /*0x1010e8114*/
      if ( *(char *)(a1 + v7 - 1) > -65 ) /*0x1010e811b*/
      {
        --v7; /*0x1010e8135*/
        goto LABEL_13; /*0x1010e8138*/
      }
      if ( *(char *)(a1 + v7 - 2) > -65 ) /*0x1010e8122*/
      {
        v7 -= 2LL; /*0x1010e813a*/
        goto LABEL_13; /*0x1010e813e*/
      }
      if ( *(char *)(a1 + v7 - 3) > -65 ) /*0x1010e8129*/
        break; /*0x1010e8129*/
      v7 -= 4LL; /*0x1010e812b*/
      if ( !v7 ) /*0x1010e812f*/
      {
        v7 = 0; /*0x1010e8131*/
        goto LABEL_13; /*0x1010e8133*/
      }
    }
    v7 -= 3LL; /*0x1010e8140*/
LABEL_13:
    v32 = a1; /*0x1010e8144*/
    v33 = v7; /*0x1010e8148*/
    v8 = v7 < a2; /*0x1010e814f*/
    v9 = v7 < a2; /*0x1010e8152*/
    v5 = 1; /*0x1010e815d*/
    if ( v8 ) /*0x1010e8162*/
      v5 = (__int64)"[...]attempted to index str up to maximum usize"; /*0x1010e8162*/
    v6 = 5 * v9; /*0x1010e8166*/
  }
  else
  {
    v32 = a1; /*0x1010e80ec*/
    v33 = a2; /*0x1010e80f0*/
    v5 = 1; /*0x1010e80f4*/
    v6 = 0; /*0x1010e80f9*/
  }
  v19[0] = v5; /*0x1010e816a*/
  v19[1] = v6; /*0x1010e8171*/
  if ( a3 <= a2 ) /*0x1010e8178*/
  {
    if ( a4 <= a2 ) /*0x1010e8181*/
    {
      if ( a3 > a4 ) /*0x1010e818a*/
      {
        v20 = &v31; /*0x1010e8370*/
        v21 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1010e837b*/
        v22 = (unsigned int *)&v30; /*0x1010e8383*/
        v23 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1010e8387*/
        v24 = &v32; /*0x1010e838f*/
        v25 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h905ab1bd6ee047e4; /*0x1010e839a*/
        v26 = v19; /*0x1010e83a5*/
        v27 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h905ab1bd6ee047e4; /*0x1010e83a9*/
        core::panicking::panic_fmt::h3a793735daf6e4ec((__int64)&unk_1012599E4, (__int64)&v20, a5); /*0x1010e83bb*/
      }
      if ( a3 != 0 && a3 < a2 ) /*0x1010e8199*/
      {
        v10 = &v31; /*0x1010e81aa*/
        if ( *(char *)(a1 + a3) >= -64 ) /*0x1010e81ae*/
          v10 = &v30; /*0x1010e81ae*/
        a4 = *v10; /*0x1010e81b2*/
      }
      v17 = a4; /*0x1010e81b5*/
      if ( a4 >= a2 ) /*0x1010e81bf*/
        goto LABEL_29; /*0x1010e81bf*/
      if ( a4 ) /*0x1010e81c4*/
      {
        while ( *(char *)(a1 + a4) <= -65 ) /*0x1010e81d4*/
        {
          if ( !--a4 ) /*0x1010e81d9*/
            goto LABEL_27; /*0x1010e81d9*/
        }
      }
      else
      {
LABEL_27:
        a4 = 0; /*0x1010e81db*/
      }
      if ( a4 == a2 ) /*0x1010e81e0*/
LABEL_29:
        core::option::unwrap_failed::h44626cade04bbf1e(a5); /*0x1010e81e5*/
      v11 = *(_BYTE *)(a1 + a4); /*0x1010e81ea*/
      if ( v11 >= 0 ) /*0x1010e81f0*/
      {
        v34 = *(unsigned __int8 *)(a1 + a4); /*0x1010e81f2*/
        v12 = 1; /*0x1010e81f5*/
        goto LABEL_41; /*0x1010e81fa*/
      }
      v13 = v11 & 0x1F; /*0x1010e8201*/
      v14 = *(_BYTE *)(a1 + a4 + 1) & 0x3F; /*0x1010e820a*/
      if ( (unsigned __int8)v11 <= 0xDFu ) /*0x1010e8211*/
      {
        v16 = v14 | (v13 << 6); /*0x1010e8250*/
        v34 = v16; /*0x1010e8253*/
        v12 = 1; /*0x1010e8256*/
        if ( v16 < 0x80 ) /*0x1010e8260*/
          goto LABEL_41; /*0x1010e8260*/
      }
      else
      {
        v15 = (v14 << 6) | *(_BYTE *)(a1 + a4 + 2) & 0x3F; /*0x1010e821f*/
        if ( (unsigned __int8)v11 < 0xF0u ) /*0x1010e8225*/
        {
          v16 = v15 | (v13 << 12); /*0x1010e8267*/
          v34 = v16; /*0x1010e8269*/
          v12 = 1; /*0x1010e826c*/
          if ( v16 < 0x80 ) /*0x1010e8276*/
            goto LABEL_41; /*0x1010e8276*/
        }
        else
        {
          v16 = (v15 << 6) | *(_BYTE *)(a1 + a4 + 3) & 0x3F | ((v11 & 7) << 18); /*0x1010e823a*/
          v34 = v16; /*0x1010e823c*/
          v12 = 1; /*0x1010e823f*/
          if ( v16 < 0x80 ) /*0x1010e8249*/
            goto LABEL_41; /*0x1010e8249*/
        }
      }
      v12 = 2; /*0x1010e8278*/
      if ( v16 >= 0x800 ) /*0x1010e8282*/
        v12 = 4LL - (v16 < 0x10000); /*0x1010e828e*/
LABEL_41:
      v18[0] = a4; /*0x1010e8292*/
      v18[1] = a4 + v12; /*0x1010e829c*/
      v20 = &v17; /*0x1010e82aa*/
      v21 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1010e82b5*/
      v22 = &v34; /*0x1010e82bd*/
      v23 = _$LT$char$u20$as$u20$core..fmt..Debug$GT$::fmt::hda44aaa207f8693d; /*0x1010e82c8*/
      v24 = v18; /*0x1010e82d3*/
      v25 = _$LT$core..ops..range..Range$LT$Idx$GT$$u20$as$u20$core..fmt..Debug$GT$::fmt::h315ea77a903feeb6; /*0x1010e82de*/
      v26 = &v32; /*0x1010e82e6*/
      v27 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h905ab1bd6ee047e4; /*0x1010e82f1*/
      v28 = v19; /*0x1010e82fc*/
      v29 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h905ab1bd6ee047e4; /*0x1010e8300*/
      core::panicking::panic_fmt::h3a793735daf6e4ec((__int64)&unk_101259A10, (__int64)&v20, a5); /*0x1010e8312*/
    }
    a3 = a4; /*0x1010e8317*/
  }
  v18[0] = a3; /*0x1010e831a*/
  v20 = v18; /*0x1010e8328*/
  v21 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1010e8333*/
  v22 = (unsigned int *)&v32; /*0x1010e833b*/
  v23 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h905ab1bd6ee047e4; /*0x1010e8346*/
  v24 = v19; /*0x1010e8351*/
  v25 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h905ab1bd6ee047e4; /*0x1010e8355*/
  core::panicking::panic_fmt::h3a793735daf6e4ec((__int64)&unk_101259A5B, (__int64)&v20, a5); /*0x1010e8367*/
}