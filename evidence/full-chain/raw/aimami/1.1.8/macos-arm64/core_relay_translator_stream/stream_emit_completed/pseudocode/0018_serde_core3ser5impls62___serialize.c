// mac 1.1.8 behavioral stream_emit_completed 0x10050e6c0 d=2
unsigned __int64 __fastcall serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::h20dffb7c3269d000(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3)
{
  unsigned __int64 v3; // r13
  unsigned __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // r13
  unsigned __int64 v9; // rcx
  __int64 v10; // r15
  const void *v11; // r15
  __int64 v12; // rax
  __int64 v13; // r12
  unsigned __int64 v14; // r12
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // r8
  unsigned __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rax
  _QWORD v25[6]; // [rsp+8h] [rbp-88h] BYREF
  _QWORD v26[3]; // [rsp+38h] [rbp-58h] BYREF
  __int64 v27; // [rsp+50h] [rbp-40h]
  __int64 v28; // [rsp+58h] [rbp-38h]
  __int64 v29; // [rsp+60h] [rbp-30h]

  result = *a2; /*0x10050e6d4*/
  switch ( *a2 ) /*0x10050e6e5*/
  {
    case 0u: /*0x10050e6e5*/
      *(_BYTE *)a1 = 0; /*0x10050e6e7*/
      return result; /*0x10050e6ea*/
    case 1u: /*0x10050e6e5*/
      result = a2[1]; /*0x10050e752*/
      *(_BYTE *)a1 = 1; /*0x10050e756*/
      *(_BYTE *)(a1 + 1) = result; /*0x10050e759*/
      return result; /*0x10050e75c*/
    case 2u: /*0x10050e6e5*/
      v6 = *((_QWORD *)a2 + 1); /*0x10050e709*/
      if ( v6 == 2 ) /*0x10050e711*/
        return serde_json::value::from::_$LT$impl$u20$core..convert..From$LT$f64$GT$$u20$for$u20$serde_json..value..Value$GT$::from::h07ac9d6da7d1e18a( /*0x10050ea3a*/
                 a1,
                 *((double *)a2 + 2));
      if ( (_DWORD)v6 == 1 ) /*0x10050e71a*/
      {
        result = *((_QWORD *)a2 + 2); /*0x10050e720*/
        *(_BYTE *)a1 = 2; /*0x10050e72b*/
        *(_QWORD *)(a1 + 8) = result >> 63; /*0x10050e72e*/
      }
      else
      {
        result = *((_QWORD *)a2 + 2); /*0x10050ea3f*/
        *(_BYTE *)a1 = 2; /*0x10050ea43*/
        *(_QWORD *)(a1 + 8) = 0; /*0x10050ea46*/
      }
      *(_QWORD *)(a1 + 16) = result; /*0x10050e732*/
      return result; /*0x10050e736*/
    case 3u: /*0x10050e6e5*/
      v7 = *((_QWORD *)a2 + 3); /*0x10050e73b*/
      if ( v7 < 0 ) /*0x10050e742*/
      {
        v8 = 0; /*0x10050e744*/
        goto LABEL_10; /*0x10050e744*/
      }
      v11 = *((const void **)a2 + 2); /*0x10050e795*/
      if ( v7 ) /*0x10050e799*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10050e79f*/
        v8 = 1; /*0x10050e7a4*/
        v12 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v7, 1u); /*0x10050e7b2*/
        if ( !v12 ) /*0x10050e7ba*/
LABEL_10:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v8, v7); /*0x10050e747*/
        v13 = v12; /*0x10050e7bc*/
      }
      else
      {
        v13 = 1; /*0x10050ea54*/
      }
      result = (unsigned __int64)memcpy((void *)v13, v11, v7); /*0x10050ea63*/
      *(_BYTE *)a1 = 3; /*0x10050ea68*/
      *(_QWORD *)(a1 + 8) = v7; /*0x10050ea6b*/
      *(_QWORD *)(a1 + 16) = v13; /*0x10050ea6f*/
      *(_QWORD *)(a1 + 24) = v7; /*0x10050ea73*/
      return result; /*0x10050ea73*/
    case 4u: /*0x10050e6e5*/
      return serde_core::ser::Serializer::collect_seq::hc801605adc45be37(a1, a2 + 8); /*0x10050e704*/
    case 5u: /*0x10050e6e5*/
      v26[0] = 0x8000000000000000LL; /*0x10050e76b*/
      v27 = 0; /*0x10050e76f*/
      v29 = 0; /*0x10050e777*/
      v9 = *((_QWORD *)a2 + 1); /*0x10050e77f*/
      LOBYTE(a3) = v9 != 0; /*0x10050e786*/
      if ( v9 ) /*0x10050e789*/
      {
        v3 = *((_QWORD *)a2 + 2); /*0x10050e78b*/
        v10 = *((_QWORD *)a2 + 3); /*0x10050e78f*/
      }
      else
      {
        v10 = 0; /*0x10050e7c4*/
      }
      v14 = 0; /*0x10050e7c7*/
      while ( 2 ) /*0x10050e7d0*/
      {
        if ( v10-- != 0 ) /*0x10050e7d0*/
        {
          if ( (a3 & 1) == 0 ) /*0x10050e7dd*/
            core::option::unwrap_failed::h44626cade04bbf1e((__int64)&anon_0bcfb5f5de49270c5675714f036928d0_1); /*0x10050ea9b*/
          if ( v14 ) /*0x10050e7e6*/
          {
            if ( v3 < *(unsigned __int16 *)(v14 + 626) ) /*0x10050e7f4*/
            {
LABEL_23:
              v16 = v14; /*0x10050e7fa*/
              v17 = v3; /*0x10050e7fd*/
              goto LABEL_36; /*0x10050e800*/
            }
            do /*0x10050e8e7*/
            {
LABEL_34:
              v16 = *(_QWORD *)(v14 + 352); /*0x10050e8c0*/
              if ( !v16 ) /*0x10050e8cb*/
                core::option::unwrap_failed::h44626cade04bbf1e((__int64)&anon_0bcfb5f5de49270c5675714f036928d0_632); /*0x10050ea8d*/
              ++v9; /*0x10050e8d1*/
              v17 = *(unsigned __int16 *)(v14 + 624); /*0x10050e8d4*/
              v14 = *(_QWORD *)(v14 + 352); /*0x10050e8dd*/
            }
            while ( (unsigned __int16)v17 >= *(_WORD *)(v16 + 626) ); /*0x10050e8e7*/
LABEL_36:
            if ( !v9 ) /*0x10050e8ec*/
            {
              v3 = v17 + 1; /*0x10050e980*/
              v14 = v16; /*0x10050e984*/
LABEL_44:
              v23 = v16 + 24 * v17 + 360; /*0x10050e987*/
              v24 = serde_core::ser::SerializeMap::serialize_entry::h209c906df48fd9b3(v26, v23, v16 + 32 * v17); /*0x10050e99d*/
              LOBYTE(a3) = 1; /*0x10050e9a2*/
              v9 = 0; /*0x10050e9a4*/
              if ( v24 ) /*0x10050e9ac*/
              {
                *(_QWORD *)(a1 + 8) = v24; /*0x10050ea12*/
                *(_BYTE *)a1 = 6; /*0x10050ea16*/
                return core::ptr::drop_in_place$LT$serde_json..value..ser..SerializeMap$GT$::h505bbb8eeaec646a( /*0x10050ea22*/
                         v26,
                         v23,
                         a3,
                         0);
              }
              continue; /*0x10050e9ac*/
            }
            v20 = v16 + 8 * v17 + 640; /*0x10050e8f2*/
            if ( (v9 & 7) != 0 ) /*0x10050e901*/
            {
              v21 = 0; /*0x10050e907*/
              do /*0x10050e921*/
              {
                v14 = *(_QWORD *)v20; /*0x10050e910*/
                v20 = *(_QWORD *)v20 + 632LL; /*0x10050e913*/
                ++v21; /*0x10050e91b*/
              }
              while ( (v9 & 7) != v21 ); /*0x10050e921*/
              v22 = v9 - v21; /*0x10050e926*/
              if ( v9 < 8 ) /*0x10050e92d*/
                goto LABEL_42; /*0x10050e92d*/
            }
            else
            {
              v22 = v9; /*0x10050e9c0*/
              if ( v9 < 8 ) /*0x10050e9c7*/
              {
LABEL_42:
                v3 = 0; /*0x10050e972*/
                goto LABEL_44; /*0x10050e975*/
              }
            }
            do /*0x10050e970*/
            {
              v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v20 + 632LL) /*0x10050e95d*/
                                                                                          + 632LL)
                                                                              + 632LL)
                                                                  + 632LL)
                                                      + 632LL)
                                          + 632LL)
                              + 632LL);
              v20 = v14 + 632; /*0x10050e964*/
              v22 -= 8LL; /*0x10050e96c*/
            }
            while ( v22 ); /*0x10050e970*/
            goto LABEL_42; /*0x10050e970*/
          }
          if ( !v3 ) /*0x10050e813*/
          {
            v14 = v9; /*0x10050e84e*/
            goto LABEL_33; /*0x10050e851*/
          }
          v14 = v9; /*0x10050e818*/
          if ( (v3 & 7) != 0 ) /*0x10050e81f*/
          {
            v18 = 0; /*0x10050e821*/
            do /*0x10050e83e*/
            {
              v14 = *(_QWORD *)(v14 + 632); /*0x10050e830*/
              ++v18; /*0x10050e838*/
            }
            while ( (v3 & 7) != v18 ); /*0x10050e83e*/
            v19 = v3 - v18; /*0x10050e843*/
            if ( v3 < 8 ) /*0x10050e84a*/
            {
LABEL_33:
              v9 = 0; /*0x10050e89f*/
              v3 = 0; /*0x10050e8a1*/
              if ( *(_WORD *)(v14 + 626) ) /*0x10050e8a4*/
                goto LABEL_23; /*0x10050e8b0*/
              goto LABEL_34; /*0x10050e8b0*/
            }
          }
          else
          {
            v19 = v3; /*0x10050e853*/
            if ( v3 < 8 ) /*0x10050e85a*/
              goto LABEL_33; /*0x10050e85a*/
          }
          do /*0x10050e89d*/
          {
            v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 632) + 632LL) /*0x10050e892*/
                                                                                        + 632LL)
                                                                            + 632LL)
                                                                + 632LL)
                                                    + 632LL)
                                        + 632LL)
                            + 632LL);
            v19 -= 8LL; /*0x10050e899*/
          }
          while ( v19 ); /*0x10050e89d*/
          goto LABEL_33; /*0x10050e89d*/
        }
        break;
      }
      v25[5] = v29; /*0x10050e9d2*/
      v25[4] = v28; /*0x10050e9da*/
      v25[3] = v27; /*0x10050e9e2*/
      v25[2] = v26[2]; /*0x10050e9ea*/
      v25[1] = v26[1]; /*0x10050e9f6*/
      v25[0] = v26[0]; /*0x10050e9fa*/
      return _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeMap$GT$::end::h5dcf7a87b82a957e(
               a1,
               v25,
               a3);
  }
}