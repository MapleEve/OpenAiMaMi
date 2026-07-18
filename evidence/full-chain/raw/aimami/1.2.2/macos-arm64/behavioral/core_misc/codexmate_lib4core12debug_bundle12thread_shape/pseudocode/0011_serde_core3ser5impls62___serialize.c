// mac 1.2.2 NEW codexmate_lib4core12debug_bundle12thread_shape 0x1009cafa0 d=1
unsigned __int64 __fastcall serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::h4a0cede2e79f5784(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3)
{
  unsigned __int64 v3; // r13
  unsigned __int64 result; // rax
  __int64 v6; // rax
  signed __int64 v7; // r14
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

  result = *a2; /*0x1009cafb4*/
  switch ( *a2 ) /*0x1009cafc5*/
  {
    case 0u: /*0x1009cafc5*/
      *(_BYTE *)a1 = 0; /*0x1009cafc7*/
      return result; /*0x1009cafca*/
    case 1u: /*0x1009cafc5*/
      result = a2[1]; /*0x1009cb032*/
      *(_BYTE *)a1 = 1; /*0x1009cb036*/
      *(_BYTE *)(a1 + 1) = result; /*0x1009cb039*/
      return result; /*0x1009cb03c*/
    case 2u: /*0x1009cafc5*/
      v6 = *((_QWORD *)a2 + 1); /*0x1009cafe9*/
      if ( v6 == 2 ) /*0x1009caff1*/
        return serde_json::value::from::_$LT$impl$u20$core..convert..From$LT$f64$GT$$u20$for$u20$serde_json..value..Value$GT$::from::h07ac9d6da7d1e18a( /*0x1009cb33c*/
                 a1,
                 *((double *)a2 + 2));
      if ( (_DWORD)v6 == 1 ) /*0x1009caffa*/
      {
        result = *((_QWORD *)a2 + 2); /*0x1009cb000*/
        *(_BYTE *)a1 = 2; /*0x1009cb00b*/
        *(_QWORD *)(a1 + 8) = result >> 63; /*0x1009cb00e*/
      }
      else
      {
        result = *((_QWORD *)a2 + 2); /*0x1009cb341*/
        *(_BYTE *)a1 = 2; /*0x1009cb345*/
        *(_QWORD *)(a1 + 8) = 0; /*0x1009cb348*/
      }
      *(_QWORD *)(a1 + 16) = result; /*0x1009cb012*/
      return result; /*0x1009cb016*/
    case 3u: /*0x1009cafc5*/
      v7 = *((_QWORD *)a2 + 3); /*0x1009cb01b*/
      if ( v7 < 0 ) /*0x1009cb022*/
      {
        v8 = 0; /*0x1009cb024*/
        goto LABEL_10; /*0x1009cb024*/
      }
      v11 = *((const void **)a2 + 2); /*0x1009cb075*/
      if ( v7 ) /*0x1009cb079*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1009cb07f*/
        v8 = 1; /*0x1009cb084*/
        v12 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v7, 1u); /*0x1009cb092*/
        if ( !v12 ) /*0x1009cb09a*/
LABEL_10:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v8); /*0x1009cb027*/
        v13 = v12; /*0x1009cb09c*/
      }
      else
      {
        v13 = 1; /*0x1009cb356*/
      }
      result = (unsigned __int64)memcpy((void *)v13, v11, v7); /*0x1009cb365*/
      *(_BYTE *)a1 = 3; /*0x1009cb36a*/
      *(_QWORD *)(a1 + 8) = v7; /*0x1009cb36d*/
      *(_QWORD *)(a1 + 16) = v13; /*0x1009cb371*/
      *(_QWORD *)(a1 + 24) = v7; /*0x1009cb375*/
      return result; /*0x1009cb375*/
    case 4u: /*0x1009cafc5*/
      return serde_core::ser::Serializer::collect_seq::h9489e25615bc5a88(a1, (__int64)(a2 + 8)); /*0x1009cafe4*/
    case 5u: /*0x1009cafc5*/
      v26[0] = 0x8000000000000000LL; /*0x1009cb04b*/
      v27 = 0; /*0x1009cb04f*/
      v29 = 0; /*0x1009cb057*/
      v9 = *((_QWORD *)a2 + 1); /*0x1009cb05f*/
      LOBYTE(a3) = v9 != 0; /*0x1009cb066*/
      if ( v9 ) /*0x1009cb069*/
      {
        v3 = *((_QWORD *)a2 + 2); /*0x1009cb06b*/
        v10 = *((_QWORD *)a2 + 3); /*0x1009cb06f*/
      }
      else
      {
        v10 = 0; /*0x1009cb0a4*/
      }
      v14 = 0; /*0x1009cb0a7*/
      while ( 2 ) /*0x1009cb0b0*/
      {
        if ( v10-- != 0 ) /*0x1009cb0b0*/
        {
          if ( (a3 & 1) == 0 ) /*0x1009cb0bd*/
            core::option::unwrap_failed::h44626cade04bbf1e(&anon_df65db1ba7ce9569a15dc8c2d6b586ae_11); /*0x1009cb39d*/
          if ( v14 ) /*0x1009cb0c6*/
          {
            if ( v3 < *(unsigned __int16 *)(v14 + 626) ) /*0x1009cb0d4*/
            {
LABEL_23:
              v16 = v14; /*0x1009cb0da*/
              v17 = v3; /*0x1009cb0dd*/
              goto LABEL_35; /*0x1009cb0e0*/
            }
            do /*0x1009cb1d7*/
            {
LABEL_33:
              v16 = *(_QWORD *)(v14 + 352); /*0x1009cb1b0*/
              if ( !v16 ) /*0x1009cb1bb*/
                core::option::unwrap_failed::h44626cade04bbf1e(&anon_df65db1ba7ce9569a15dc8c2d6b586ae_806); /*0x1009cb38f*/
              ++v9; /*0x1009cb1c1*/
              v17 = *(unsigned __int16 *)(v14 + 624); /*0x1009cb1c4*/
              v14 = *(_QWORD *)(v14 + 352); /*0x1009cb1cd*/
            }
            while ( (unsigned __int16)v17 >= *(_WORD *)(v16 + 626) ); /*0x1009cb1d7*/
LABEL_35:
            if ( !v9 ) /*0x1009cb1dc*/
            {
              v3 = v17 + 1; /*0x1009cb270*/
              v14 = v16; /*0x1009cb274*/
LABEL_43:
              v23 = v16 + 24 * v17 + 360; /*0x1009cb277*/
              v24 = serde_core::ser::SerializeMap::serialize_entry::h77e7c2a9313a6504(v26, v23, v16 + 32 * v17); /*0x1009cb28d*/
              LOBYTE(a3) = 1; /*0x1009cb292*/
              v9 = 0; /*0x1009cb294*/
              if ( v24 ) /*0x1009cb29c*/
              {
                *(_QWORD *)(a1 + 8) = v24; /*0x1009cb314*/
                *(_BYTE *)a1 = 6; /*0x1009cb318*/
                return core::ptr::drop_in_place$LT$serde_json..value..ser..SerializeMap$GT$::hf0af6117a42be266( /*0x1009cb324*/
                         v26,
                         v23,
                         a3,
                         0);
              }
              continue; /*0x1009cb29c*/
            }
            v20 = v16 + 8 * v17 + 640; /*0x1009cb1e2*/
            if ( (v9 & 7) != 0 ) /*0x1009cb1f1*/
            {
              v21 = 0; /*0x1009cb1f7*/
              do /*0x1009cb211*/
              {
                v14 = *(_QWORD *)v20; /*0x1009cb200*/
                v20 = *(_QWORD *)v20 + 632LL; /*0x1009cb203*/
                ++v21; /*0x1009cb20b*/
              }
              while ( (v9 & 7) != v21 ); /*0x1009cb211*/
              v22 = v9 - v21; /*0x1009cb216*/
              if ( v9 < 8 ) /*0x1009cb21d*/
                goto LABEL_41; /*0x1009cb21d*/
            }
            else
            {
              v22 = v9; /*0x1009cb2b0*/
              if ( v9 < 8 ) /*0x1009cb2b7*/
              {
LABEL_41:
                v3 = 0; /*0x1009cb262*/
                goto LABEL_43; /*0x1009cb265*/
              }
            }
            do /*0x1009cb260*/
            {
              v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v20 + 632LL) /*0x1009cb24d*/
                                                                                          + 632LL)
                                                                              + 632LL)
                                                                  + 632LL)
                                                      + 632LL)
                                          + 632LL)
                              + 632LL);
              v20 = v14 + 632; /*0x1009cb254*/
              v22 -= 8LL; /*0x1009cb25c*/
            }
            while ( v22 ); /*0x1009cb260*/
            goto LABEL_41; /*0x1009cb260*/
          }
          if ( !v3 ) /*0x1009cb0f3*/
          {
            v3 = 0; /*0x1009cb188*/
            v14 = v9; /*0x1009cb18b*/
            v9 = 0; /*0x1009cb18e*/
            if ( *(_WORD *)(v14 + 626) ) /*0x1009cb190*/
              goto LABEL_23; /*0x1009cb19c*/
            goto LABEL_33; /*0x1009cb19c*/
          }
          v14 = v9; /*0x1009cb0fc*/
          if ( (v3 & 7) != 0 ) /*0x1009cb103*/
          {
            v18 = 0; /*0x1009cb109*/
            do /*0x1009cb11e*/
            {
              v14 = *(_QWORD *)(v14 + 632); /*0x1009cb110*/
              ++v18; /*0x1009cb118*/
            }
            while ( (v3 & 7) != v18 ); /*0x1009cb11e*/
            v19 = v3 - v18; /*0x1009cb123*/
            if ( v3 < 8 ) /*0x1009cb12a*/
            {
LABEL_30:
              v3 = 0; /*0x1009cb16f*/
              v9 = 0; /*0x1009cb172*/
              if ( *(_WORD *)(v14 + 626) ) /*0x1009cb174*/
                goto LABEL_23; /*0x1009cb180*/
              goto LABEL_33; /*0x1009cb180*/
            }
          }
          else
          {
            v19 = v3; /*0x1009cb2be*/
            if ( v3 < 8 ) /*0x1009cb2c5*/
              goto LABEL_30; /*0x1009cb2c5*/
          }
          do /*0x1009cb16d*/
          {
            v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 632) + 632LL) /*0x1009cb162*/
                                                                                        + 632LL)
                                                                            + 632LL)
                                                                + 632LL)
                                                    + 632LL)
                                        + 632LL)
                            + 632LL);
            v19 -= 8LL; /*0x1009cb169*/
          }
          while ( v19 ); /*0x1009cb16d*/
          goto LABEL_30; /*0x1009cb16d*/
        }
        break;
      }
      v25[5] = v29; /*0x1009cb2d4*/
      v25[4] = v28; /*0x1009cb2dc*/
      v25[3] = v27; /*0x1009cb2e4*/
      v25[2] = v26[2]; /*0x1009cb2ec*/
      v25[1] = v26[1]; /*0x1009cb2f8*/
      v25[0] = v26[0]; /*0x1009cb2fc*/
      return _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeMap$GT$::end::h5dcf7a87b82a957e(
               a1,
               v25,
               a3);
  }
}