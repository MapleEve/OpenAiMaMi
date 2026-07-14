// mac 1.1.8 behavioral AnthropicDirectToResponses_emit_created 0x100715550 d=2
__int64 __fastcall _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd45745d35ed7952d(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  size_t v4; // r15
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // r13
  __int64 v8; // r15
  __int64 v9; // rbx
  __int64 v10; // rdx
  char v11; // r12
  __int64 v12; // rsi
  __int64 v14; // [rsp+8h] [rbp-98h]
  __int64 v16; // [rsp+20h] [rbp-80h]
  __int64 v17; // [rsp+28h] [rbp-78h]
  _BYTE v18[31]; // [rsp+38h] [rbp-68h]
  size_t v19; // [rsp+58h] [rbp-48h] BYREF
  __int128 v20; // [rsp+60h] [rbp-40h]
  size_t v21; // [rsp+70h] [rbp-30h]

  if ( a3 ) /*0x100715572*/
  {
    v4 = 32 * a3; /*0x100715581*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100715585*/
    v21 = v4; /*0x10071558f*/
    v5 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v4, 8u); /*0x100715596*/
    if ( !v5 ) /*0x10071559e*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(8, v21); /*0x10071574b*/
    v16 = a3; /*0x1007155a7*/
    v17 = v5; /*0x1007155ab*/
    v6 = a2 + 24; /*0x1007155b2*/
    v14 = a2 + 8; /*0x1007155ba*/
    v7 = v5 + 1; /*0x1007155c1*/
    v8 = 0; /*0x1007155c4*/
    v9 = 0; /*0x1007155ce*/
    v10 = v21; /*0x1007155d0*/
    while ( 2 ) /*0x10071564a*/
    {
      if ( v10 != v8 ) /*0x10071564a*/
      {
        v11 = *(_BYTE *)(v6 + v8 - 24); /*0x100715650*/
        switch ( v11 ) /*0x100715661*/
        {
          case 0: /*0x100715661*/
            goto LABEL_6;
          case 1: /*0x100715661*/
          case 2: /*0x100715661*/
            *(_QWORD *)&v18[23] = *(_QWORD *)(v6 + v8); /*0x100715667*/
            *(_QWORD *)&v18[16] = *(_QWORD *)(v6 + v8 - 7); /*0x100715670*/
            *(_OWORD *)v18 = *(_OWORD *)(v6 + v8 - 23); /*0x100715682*/
            goto LABEL_6; /*0x100715686*/
          case 3: /*0x100715661*/
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v19, v14 + v8); /*0x100715697*/
            v10 = v21; /*0x1007156a3*/
            goto LABEL_5; /*0x1007156a7*/
          case 4: /*0x100715661*/
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd45745d35ed7952d( /*0x1007155e3*/
              &v19,
              *(_QWORD *)(v6 + v8 - 8),
              *(_QWORD *)(v6 + v8));
            v10 = v21; /*0x1007155ef*/
            goto LABEL_5; /*0x1007155ef*/
          case 5: /*0x100715661*/
            if ( *(_QWORD *)(v6 + v8) ) /*0x1007156ac*/
            {
              v12 = *(_QWORD *)(v6 + v8 - 16); /*0x1007156b3*/
              if ( !v12 ) /*0x1007156bb*/
                core::option::unwrap_failed::h44626cade04bbf1e((__int64)&anon_0bcfb5f5de49270c5675714f036928d0_658); /*0x10071573b*/
              _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::ha760529b977a82bd( /*0x1007156c6*/
                &v19,
                v12,
                *(_QWORD *)(v6 + v8 - 8));
              v10 = v21; /*0x1007156d2*/
            }
            else
            {
              v19 = 0; /*0x1007156db*/
              *((_QWORD *)&v20 + 1) = 0; /*0x1007156e3*/
            }
LABEL_5:
            *(_OWORD *)&v18[15] = v20; /*0x1007155f3*/
            *(_QWORD *)&v18[7] = v19; /*0x10071560b*/
LABEL_6:
            *(_BYTE *)(v7 + v8 - 1) = v11; /*0x10071560e*/
            *(_OWORD *)(v7 + v8) = *(_OWORD *)v18; /*0x10071561b*/
            *(_QWORD *)(v7 + v8 + 16) = *(_QWORD *)&v18[16]; /*0x100715629*/
            *(_QWORD *)(v7 + v8 + 23) = *(_QWORD *)&v18[23]; /*0x100715632*/
            v8 += 32; /*0x100715637*/
            ++v9; /*0x10071563b*/
            if ( v10 != v8 ) /*0x100715641*/
              continue; /*0x100715641*/
            goto LABEL_16; /*0x100715641*/
        }
      }
      break;
    }
  }
  else
  {
    v16 = 0; /*0x1007156f0*/
    v17 = 8; /*0x1007156f8*/
  }
LABEL_16:
  a1[2] = a3; /*0x100715700*/
  a1[1] = v17; /*0x10071571e*/
  *a1 = v16; /*0x100715722*/
  return v16; /*0x100715725*/
}