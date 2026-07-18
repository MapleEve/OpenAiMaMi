// mac 1.2.2 NEW codexmate_lib4core12debug_bundle23read_catalog_fil 0x1008eaf70 d=1
unsigned __int64 *__fastcall _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h6ac7826f01efcbac(
        unsigned __int64 *a1,
        __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 v3; // r12
  __int64 v4; // rbx
  __int64 v5; // rax
  size_t v6; // rdx
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // r15
  __int64 v11; // r13
  __int64 v12; // r12
  char v13; // r14
  __int64 v14; // rsi
  unsigned __int64 v16; // [rsp+10h] [rbp-90h]
  __int64 v17; // [rsp+18h] [rbp-88h]
  __int64 v18; // [rsp+28h] [rbp-78h]
  _BYTE v19[31]; // [rsp+30h] [rbp-70h]
  __int64 v20; // [rsp+50h] [rbp-50h] BYREF
  __int128 v21; // [rsp+58h] [rbp-48h]
  unsigned __int64 v22; // [rsp+68h] [rbp-38h]
  size_t v23; // [rsp+70h] [rbp-30h]

  v2 = *(_QWORD *)(a2 + 16); /*0x1008eaf81*/
  if ( v2 >> 59 != 0 || 32 * v2 > 0x7FFFFFFFFFFFFFF8LL ) /*0x1008eafa3*/
  {
    v3 = 0; /*0x1008eafaa*/
    goto LABEL_3; /*0x1008eafaa*/
  }
  if ( 32 * v2 ) /*0x1008eaf88*/
  {
    v22 = *(_QWORD *)(a2 + 16); /*0x1008eafc8*/
    v4 = *(_QWORD *)(a2 + 8); /*0x1008eafcc*/
    v23 = 32 * v2; /*0x1008eafd0*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1008eafd4*/
    v3 = 8; /*0x1008eafd9*/
    v5 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v23, 8u); /*0x1008eafe8*/
    v6 = v23; /*0x1008eafed*/
    if ( !v5 ) /*0x1008eaff4*/
LABEL_3:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v3); /*0x1008eafad*/
    v7 = v5; /*0x1008eaff6*/
    v2 = v22; /*0x1008eaff9*/
    v16 = v22; /*0x1008eaffd*/
    v17 = v5; /*0x1008eb004*/
    if ( v22 ) /*0x1008eb00e*/
    {
      v8 = v4; /*0x1008eb014*/
      v9 = v4 + 24; /*0x1008eb017*/
      v18 = v8 + 8; /*0x1008eb01f*/
      v10 = v7 + 1; /*0x1008eb023*/
      v11 = 0; /*0x1008eb026*/
      v12 = 0; /*0x1008eb030*/
      while ( 2 ) /*0x1008eb0ab*/
      {
        if ( v6 != v11 ) /*0x1008eb0ab*/
        {
          v13 = *(_BYTE *)(v9 + v11 - 24); /*0x1008eb0b1*/
          switch ( v13 ) /*0x1008eb0c2*/
          {
            case 0: /*0x1008eb0c2*/
              goto LABEL_10;
            case 1: /*0x1008eb0c2*/
            case 2: /*0x1008eb0c2*/
              *(_QWORD *)&v19[23] = *(_QWORD *)(v9 + v11); /*0x1008eb0c8*/
              *(_QWORD *)&v19[16] = *(_QWORD *)(v9 + v11 - 7); /*0x1008eb0d1*/
              *(_OWORD *)v19 = *(_OWORD *)(v9 + v11 - 23); /*0x1008eb0e3*/
              goto LABEL_10; /*0x1008eb0e7*/
            case 3: /*0x1008eb0c2*/
              _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v20, v18 + v11); /*0x1008eb0f5*/
              v2 = v22; /*0x1008eb101*/
              v6 = v23; /*0x1008eb105*/
              goto LABEL_9; /*0x1008eb109*/
            case 4: /*0x1008eb0c2*/
              _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h6ac7826f01efcbac( /*0x1008eb041*/
                &v20,
                v18 + v11);
              v2 = v22; /*0x1008eb04d*/
              v6 = v23; /*0x1008eb051*/
              goto LABEL_9; /*0x1008eb051*/
            case 5: /*0x1008eb0c2*/
              if ( *(_QWORD *)(v9 + v11) ) /*0x1008eb10e*/
              {
                v14 = *(_QWORD *)(v9 + v11 - 16); /*0x1008eb115*/
                if ( !v14 ) /*0x1008eb11d*/
                  core::option::unwrap_failed::h44626cade04bbf1e(&anon_df65db1ba7ce9569a15dc8c2d6b586ae_1179); /*0x1008eb1aa*/
                _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::h8563495386bc2724( /*0x1008eb12c*/
                  &v20,
                  v14,
                  *(_QWORD *)(v9 + v11 - 8));
                v2 = v22; /*0x1008eb138*/
                v6 = v23; /*0x1008eb13c*/
              }
              else
              {
                v20 = 0; /*0x1008eb145*/
                *((_QWORD *)&v21 + 1) = 0; /*0x1008eb14d*/
              }
LABEL_9:
              *(_OWORD *)&v19[15] = v21; /*0x1008eb055*/
              *(_QWORD *)&v19[7] = v20; /*0x1008eb06d*/
LABEL_10:
              ++v12; /*0x1008eb070*/
              *(_BYTE *)(v10 + v11 - 1) = v13; /*0x1008eb073*/
              *(_OWORD *)(v10 + v11) = *(_OWORD *)v19; /*0x1008eb080*/
              *(_QWORD *)(v10 + v11 + 16) = *(_QWORD *)&v19[16]; /*0x1008eb08d*/
              *(_QWORD *)(v10 + v11 + 23) = *(_QWORD *)&v19[23]; /*0x1008eb096*/
              v11 += 32; /*0x1008eb09b*/
              if ( v2 != v12 ) /*0x1008eb0a2*/
                continue; /*0x1008eb0a2*/
              goto LABEL_20; /*0x1008eb0a2*/
            case 6: /*0x1008eb0c2*/
              JUMPOUT(0x100CED0E3LL); /*0x100ced0e3*/
          }
        }
        break;
      }
    }
  }
  else
  {
    v16 = 0; /*0x1008eb15a*/
    v17 = 8; /*0x1008eb165*/
  }
LABEL_20:
  a1[2] = v2; /*0x1008eb170*/
  a1[1] = v17; /*0x1008eb18d*/
  *a1 = v16; /*0x1008eb191*/
  return a1; /*0x1008eb194*/
}