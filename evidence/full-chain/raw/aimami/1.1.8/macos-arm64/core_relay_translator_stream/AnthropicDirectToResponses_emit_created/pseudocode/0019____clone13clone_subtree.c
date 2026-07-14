// mac 1.1.8 behavioral AnthropicDirectToResponses_emit_created 0x1001e3f70 d=2
size_t __fastcall _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::ha760529b977a82bd(
        size_t *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  size_t v5; // rbx
  size_t v6; // r13
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // r13
  unsigned __int64 v10; // rbx
  __int64 *v11; // r15
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r14
  size_t v16; // r10
  __int64 v17; // rbx
  __int64 v18; // r12
  size_t v19; // r13
  unsigned __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rsi
  size_t *v24; // rdx
  size_t result; // rax
  size_t v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // r15
  __int64 v30; // r12
  size_t *v31; // r13
  unsigned __int64 v32; // r14
  size_t v33; // rax
  size_t v34; // rsi
  unsigned __int64 v35; // rax
  __int64 v36; // rcx
  size_t v37; // rdx
  __int64 v38; // rax
  size_t v39; // rcx
  __int64 v40; // rsi
  char **v41; // rdx
  void *v42; // rdi
  _QWORD v43[3]; // [rsp+0h] [rbp-110h] BYREF
  __int64 v44; // [rsp+18h] [rbp-F8h]
  size_t v45; // [rsp+20h] [rbp-F0h]
  __int64 v46; // [rsp+28h] [rbp-E8h]
  unsigned __int64 v47; // [rsp+30h] [rbp-E0h]
  __int64 v48; // [rsp+38h] [rbp-D8h]
  size_t *v49; // [rsp+40h] [rbp-D0h]
  size_t v50; // [rsp+48h] [rbp-C8h]
  size_t v51; // [rsp+50h] [rbp-C0h]
  unsigned __int64 v52; // [rsp+58h] [rbp-B8h]
  size_t v53; // [rsp+60h] [rbp-B0h]
  size_t v54; // [rsp+68h] [rbp-A8h]
  __int64 v55; // [rsp+70h] [rbp-A0h]
  size_t v56; // [rsp+78h] [rbp-98h]
  size_t v57; // [rsp+80h] [rbp-90h]
  size_t v58; // [rsp+88h] [rbp-88h]
  size_t v59; // [rsp+90h] [rbp-80h] BYREF
  size_t v60; // [rsp+98h] [rbp-78h]
  size_t v61; // [rsp+A0h] [rbp-70h]
  size_t v62; // [rsp+A8h] [rbp-68h] BYREF
  size_t v63; // [rsp+B0h] [rbp-60h]
  size_t v64; // [rsp+B8h] [rbp-58h]
  size_t v65; // [rsp+C0h] [rbp-50h] BYREF
  size_t v66; // [rsp+C8h] [rbp-48h]
  size_t v67; // [rsp+D0h] [rbp-40h]
  size_t v68; // [rsp+D8h] [rbp-38h]
  size_t v69; // [rsp+E0h] [rbp-30h]

  v3 = a2; /*0x1001e3f84*/
  v49 = a1; /*0x1001e3f87*/
  v48 = a2; /*0x1001e3f91*/
  if ( a3 ) /*0x1001e3f98*/
  {
    v4 = a3 - 1; /*0x1001e3fa8*/
    _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::ha760529b977a82bd( /*0x1001e3fb2*/
      &v62,
      *(_QWORD *)(a2 + 632),
      a3 - 1);
    v5 = v62; /*0x1001e3fb7*/
    if ( !v62 ) /*0x1001e3fbe*/
      core::option::unwrap_failed::h44626cade04bbf1e((__int64)&off_1015268E0); /*0x1001e4624*/
    v6 = v63; /*0x1001e3fc4*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001e3fc8*/
    v7 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x2D8u, 8u); /*0x1001e3fd7*/
    if ( !v7 ) /*0x1001e3fdf*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 728); /*0x1001e4635*/
    v8 = v7; /*0x1001e3fe5*/
    *(_QWORD *)(v7 + 352) = 0; /*0x1001e3fe8*/
    *(_WORD *)(v7 + 626) = 0; /*0x1001e3ff3*/
    *(_QWORD *)(v7 + 632) = v5; /*0x1001e3ffc*/
    if ( v6 == -1 ) /*0x1001e4009*/
      core::option::unwrap_failed::h44626cade04bbf1e((__int64)&off_1015265C8); /*0x1001e4643*/
    *(_QWORD *)(v5 + 352) = v7; /*0x1001e400f*/
    *(_WORD *)(v5 + 624) = 0; /*0x1001e4016*/
    v62 = v7; /*0x1001e401f*/
    v63 = v6 + 1; /*0x1001e4023*/
    if ( *(_WORD *)(a2 + 626) ) /*0x1001e4027*/
    {
      v45 = v6; /*0x1001e4036*/
      v44 = v4; /*0x1001e403d*/
      v9 = a2 + 360; /*0x1001e4044*/
      v46 = v7 + 360; /*0x1001e4054*/
      v69 = v64; /*0x1001e405f*/
      v10 = 0; /*0x1001e4063*/
      v11 = (__int64 *)a2; /*0x1001e4065*/
      do /*0x1001e431a*/
      {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v59, v9); /*0x1001e4077*/
        switch ( *(_BYTE *)v11 ) /*0x1001e408e*/
        {
          case 0: /*0x1001e408e*/
            LOBYTE(v55) = 0; /*0x1001e40fb*/
            break; /*0x1001e4102*/
          case 1: /*0x1001e408e*/
          case 2: /*0x1001e408e*/
            v58 = v11[3]; /*0x1001e4094*/
            v57 = v11[2]; /*0x1001e409f*/
            v12 = *v11; /*0x1001e40a6*/
            v56 = v11[1]; /*0x1001e40ad*/
            v55 = v12; /*0x1001e40b4*/
            break; /*0x1001e40bb*/
          case 3: /*0x1001e408e*/
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1( /*0x1001e410f*/
              &v65,
              (__int64)(v11 + 1));
            v58 = v67; /*0x1001e411f*/
            v57 = v66; /*0x1001e412b*/
            v56 = v65; /*0x1001e412f*/
            LOBYTE(v55) = 3; /*0x1001e4132*/
            break; /*0x1001e4139*/
          case 4: /*0x1001e408e*/
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd45745d35ed7952d( /*0x1001e40cc*/
              &v65,
              v11[2],
              v11[3]);
            v58 = v67; /*0x1001e40dc*/
            v57 = v66; /*0x1001e40e8*/
            v56 = v65; /*0x1001e40ec*/
            LOBYTE(v55) = 4; /*0x1001e40ef*/
            break; /*0x1001e40f6*/
          case 5: /*0x1001e408e*/
            if ( v11[3] ) /*0x1001e413b*/
            {
              v13 = v11[1]; /*0x1001e4142*/
              if ( !v13 ) /*0x1001e4149*/
              {
                v64 = v69; /*0x1001e45f6*/
                core::option::unwrap_failed::h44626cade04bbf1e((__int64)&anon_0bcfb5f5de49270c5675714f036928d0_658); /*0x1001e4601*/
              }
              _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::ha760529b977a82bd( /*0x1001e4157*/
                &v65,
                v13,
                v11[2]);
            }
            else
            {
              v65 = 0; /*0x1001e415e*/
              v67 = 0; /*0x1001e4166*/
            }
            v58 = v67; /*0x1001e4179*/
            v57 = v66; /*0x1001e4185*/
            v56 = v65; /*0x1001e4189*/
            LOBYTE(v55) = 5; /*0x1001e418c*/
            break; /*0x1001e418c*/
        }
        _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::ha760529b977a82bd( /*0x1001e41b6*/
          v43,
          *(_QWORD *)(v3 + 8 * v10 + 640),
          v44);
        v14 = v43[0]; /*0x1001e41bb*/
        v15 = v43[2]; /*0x1001e41c2*/
        v53 = v59; /*0x1001e41cd*/
        v54 = v60; /*0x1001e41d8*/
        v16 = v61; /*0x1001e41df*/
        if ( v43[0] ) /*0x1001e41e6*/
        {
          if ( v43[1] != v45 ) /*0x1001e41f6*/
            goto LABEL_45; /*0x1001e41f6*/
        }
        else
        {
          v47 = v10; /*0x1001e4200*/
          v17 = v8; /*0x1001e4207*/
          v18 = v9; /*0x1001e420a*/
          v19 = v61; /*0x1001e420d*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001e4210*/
          v14 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x278u, 8u); /*0x1001e421f*/
          if ( !v14 ) /*0x1001e4227*/
            alloc::alloc::handle_alloc_error::h450e44845847d219(8, 632); /*0x1001e45eb*/
          *(_QWORD *)(v14 + 352) = 0; /*0x1001e422d*/
          *(_WORD *)(v14 + 626) = 0; /*0x1001e4238*/
          v16 = v19; /*0x1001e4243*/
          v9 = v18; /*0x1001e4246*/
          v8 = v17; /*0x1001e4249*/
          v10 = v47; /*0x1001e424c*/
          if ( v45 ) /*0x1001e425a*/
          {
LABEL_45:
            v40 = 48; /*0x1001e457f*/
            v41 = &off_101526598; /*0x1001e4584*/
            v42 = &unk_10125C6AB; /*0x1001e458b*/
            goto LABEL_47; /*0x1001e4592*/
          }
        }
        v20 = *(unsigned __int16 *)(v8 + 626); /*0x1001e4260*/
        if ( v20 >= 0xB ) /*0x1001e426d*/
        {
          v40 = 32; /*0x1001e4594*/
          v42 = &anon_0bcfb5f5de49270c5675714f036928d0_600; /*0x1001e4599*/
          v41 = &off_1015265B0; /*0x1001e45a0*/
LABEL_47:
          v64 = v69; /*0x1001e45a7*/
          core::panicking::panic::h286e2dd5eab048be((__int64)v42, v40, (__int64)v41); /*0x1001e45b6*/
        }
        *(_WORD *)(v8 + 626) = v20 + 1; /*0x1001e4276*/
        v21 = 3 * v20; /*0x1001e427f*/
        v22 = v46; /*0x1001e4283*/
        *(_QWORD *)(v46 + 8 * v21) = v53; /*0x1001e4291*/
        *(_QWORD *)(v22 + 8 * v21 + 8) = v54; /*0x1001e429c*/
        *(_QWORD *)(v22 + 8 * v21 + 16) = v16; /*0x1001e42a1*/
        v23 = (unsigned int)(32 * v20); /*0x1001e42a8*/
        *(_QWORD *)(v8 + v23 + 24) = v58; /*0x1001e42b2*/
        *(_QWORD *)(v8 + v23 + 16) = v57; /*0x1001e42be*/
        *(_QWORD *)(v8 + v23 + 8) = v56; /*0x1001e42ca*/
        *(_QWORD *)(v8 + v23) = v55; /*0x1001e42d6*/
        *(_QWORD *)(v8 + 8 * v20 + 640) = v14; /*0x1001e42da*/
        *(_QWORD *)(v14 + 352) = v8; /*0x1001e42e2*/
        *(_WORD *)(v14 + 624) = v20 + 1; /*0x1001e42e9*/
        ++v10; /*0x1001e42f0*/
        v69 += v15 + 1; /*0x1001e42fc*/
        v3 = v48; /*0x1001e4300*/
        v9 += 24; /*0x1001e430f*/
        v11 += 4; /*0x1001e4313*/
      }
      while ( v10 < *(unsigned __int16 *)(v48 + 626) ); /*0x1001e431a*/
      v64 = v69; /*0x1001e4324*/
    }
    v24 = v49; /*0x1001e432c*/
    v49[2] = v64; /*0x1001e4333*/
    result = v62; /*0x1001e4337*/
    v26 = v63; /*0x1001e433b*/
  }
  else
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001e4344*/
    v27 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x278u, 8u); /*0x1001e4353*/
    if ( !v27 ) /*0x1001e435b*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 632); /*0x1001e4654*/
    v28 = v27; /*0x1001e4361*/
    *(_QWORD *)(v27 + 352) = 0; /*0x1001e4364*/
    *(_WORD *)(v27 + 626) = 0; /*0x1001e436f*/
    v50 = v27; /*0x1001e4378*/
    v51 = 0; /*0x1001e437f*/
    if ( *(_WORD *)(a2 + 626) ) /*0x1001e438a*/
    {
      v29 = a2 + 360; /*0x1001e4399*/
      v30 = v27 + 360; /*0x1001e43a3*/
      v31 = (size_t *)a2; /*0x1001e43aa*/
      v32 = 0; /*0x1001e43ad*/
      do /*0x1001e453b*/
      {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v62, v29); /*0x1001e43b7*/
        switch ( *(_BYTE *)v31 ) /*0x1001e43cf*/
        {
          case 0: /*0x1001e43cf*/
            LOBYTE(v65) = 0; /*0x1001e442b*/
            break; /*0x1001e442f*/
          case 1: /*0x1001e43cf*/
          case 2: /*0x1001e43cf*/
            v68 = v31[3]; /*0x1001e43d5*/
            v67 = v31[2]; /*0x1001e43dd*/
            v33 = *v31; /*0x1001e43e1*/
            v66 = v31[1]; /*0x1001e43e9*/
            v65 = v33; /*0x1001e43ed*/
            break; /*0x1001e43f1*/
          case 3: /*0x1001e43cf*/
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1( /*0x1001e443c*/
              &v59,
              (__int64)(v31 + 1));
            v68 = v61; /*0x1001e4449*/
            v67 = v60; /*0x1001e4455*/
            v66 = v59; /*0x1001e4459*/
            LOBYTE(v65) = 3; /*0x1001e445c*/
            break; /*0x1001e4460*/
          case 4: /*0x1001e43cf*/
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd45745d35ed7952d( /*0x1001e4402*/
              &v59,
              v31[2],
              v31[3]);
            v68 = v61; /*0x1001e440f*/
            v67 = v60; /*0x1001e441b*/
            v66 = v59; /*0x1001e441f*/
            LOBYTE(v65) = 4; /*0x1001e4422*/
            break; /*0x1001e4426*/
          case 5: /*0x1001e43cf*/
            if ( v31[3] ) /*0x1001e4462*/
            {
              v34 = v31[1]; /*0x1001e4469*/
              if ( !v34 ) /*0x1001e4470*/
              {
                v52 = v32; /*0x1001e4608*/
                core::option::unwrap_failed::h44626cade04bbf1e((__int64)&anon_0bcfb5f5de49270c5675714f036928d0_658); /*0x1001e4616*/
              }
              _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::ha760529b977a82bd( /*0x1001e447e*/
                &v59,
                v34,
                v31[2]);
            }
            else
            {
              v59 = 0; /*0x1001e4485*/
              v61 = 0; /*0x1001e448d*/
            }
            v68 = v61; /*0x1001e449d*/
            v67 = v60; /*0x1001e44a9*/
            v66 = v59; /*0x1001e44ad*/
            LOBYTE(v65) = 5; /*0x1001e44b0*/
            break; /*0x1001e44b0*/
        }
        v35 = *(unsigned __int16 *)(v28 + 626); /*0x1001e44c0*/
        if ( v35 >= 0xB ) /*0x1001e44cb*/
        {
          v52 = v32; /*0x1001e45c0*/
          core::panicking::panic::h286e2dd5eab048be( /*0x1001e45da*/
            (__int64)&anon_0bcfb5f5de49270c5675714f036928d0_600,
            32,
            (__int64)&anon_0bcfb5f5de49270c5675714f036928d0_602);
        }
        ++v32; /*0x1001e44d1*/
        *(_WORD *)(v28 + 626) = v35 + 1; /*0x1001e44d7*/
        v36 = 3 * v35; /*0x1001e44de*/
        *(_QWORD *)(v30 + 8 * v36 + 16) = v64; /*0x1001e44e6*/
        v37 = v62; /*0x1001e44eb*/
        *(_QWORD *)(v30 + 8 * v36 + 8) = v63; /*0x1001e44f3*/
        *(_QWORD *)(v30 + 8 * v36) = v37; /*0x1001e44f8*/
        v38 = (unsigned int)(32 * v35); /*0x1001e44fc*/
        *(_QWORD *)(v28 + v38 + 24) = v68; /*0x1001e4503*/
        *(_QWORD *)(v28 + v38 + 16) = v67; /*0x1001e450c*/
        v39 = v65; /*0x1001e4511*/
        *(_QWORD *)(v28 + v38 + 8) = v66; /*0x1001e4519*/
        *(_QWORD *)(v28 + v38) = v39; /*0x1001e451e*/
        v29 += 24; /*0x1001e4530*/
        v31 += 4; /*0x1001e4534*/
      }
      while ( v32 < *(unsigned __int16 *)(v48 + 626) ); /*0x1001e453b*/
    }
    else
    {
      v32 = 0; /*0x1001e4543*/
    }
    v52 = v32; /*0x1001e4546*/
    v24 = v49; /*0x1001e454d*/
    v49[2] = v32; /*0x1001e4554*/
    result = v50; /*0x1001e4558*/
    v26 = v51; /*0x1001e455f*/
  }
  v24[1] = v26; /*0x1001e4566*/
  *v24 = result; /*0x1001e456a*/
  return result; /*0x1001e456d*/
}