// __ZN13codexmate_lib4core5relay15config_takeover1_117_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..config_takeover..TakeoverSection$GT$9serialize @ 0x1008f5a60 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::config_takeover::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..config_takeover..TakeoverSection$GT$::serialize::h0258d51ac581f6b7(
        __int64 a1,
        __int64 a2,
        double a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  _QWORD *v7; // r14
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // r9
  __int64 v11; // r15
  _QWORD *v12; // rbx
  __int64 v13; // r13
  const void *v14; // r14
  size_t v15; // r15
  __int64 v16; // r12
  __int64 v17; // rsi
  __int16 v18; // [rsp+8h] [rbp-38h] BYREF
  __int64 v19; // [rsp+10h] [rbp-30h]

  v7 = *(_QWORD **)a2; /*0x1008f5a74*/
  ++*(_QWORD *)(a2 + 24); /*0x1008f5a77*/
  *(_BYTE *)(a2 + 32) = 0; /*0x1008f5a7b*/
  v8 = v7[2]; /*0x1008f5a7f*/
  if ( *v7 == v8 ) /*0x1008f5a86*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(v7, v7[2], 1, 1, 1, a7); /*0x1008f5be2*/
    v8 = v7[2]; /*0x1008f5bea*/
  }
  *(_BYTE *)(v7[1] + v8) = 123; /*0x1008f5a90*/
  v7[2] = v8 + 1; /*0x1008f5a97*/
  v18 = 256; /*0x1008f5a9b*/
  v19 = a2; /*0x1008f5aa1*/
  result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea(&v18, "key.", 3, a1); /*0x1008f5ab8*/
  if ( !result ) /*0x1008f5ac0*/
  {
    if ( (_BYTE)v18 == 1 ) /*0x1008f5ad5*/
    {
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x1008f5ae5*/
    }
    else
    {
      result = serde_core::ser::SerializeMap::serialize_entry::h41563059e0bf917d( /*0x1008f5b01*/
                 &v18,
                 &anon_155c4da9b5393270cfa7378e2b52c417_293,
                 5,
                 a1 + 24);
      if ( !result ) /*0x1008f5b09*/
      {
        result = 0; /*0x1008f5b0b*/
        if ( (v18 & 1) == 0 ) /*0x1008f5b11*/
        {
          if ( HIBYTE(v18) ) /*0x1008f5b17*/
          {
            v11 = v19; /*0x1008f5b19*/
            v12 = *(_QWORD **)v19; /*0x1008f5b1d*/
            v13 = *(_QWORD *)(v19 + 24) - 1LL; /*0x1008f5b24*/
            *(_QWORD *)(v19 + 24) = v13; /*0x1008f5b27*/
            if ( *(_BYTE *)(v11 + 32) == 1 ) /*0x1008f5b30*/
            {
              alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x1008f5b41*/
                v12,
                &anon_155c4da9b5393270cfa7378e2b52c417_888,
                1);
              if ( v13 ) /*0x1008f5b49*/
              {
                v14 = *(const void **)(v11 + 8); /*0x1008f5b4b*/
                v15 = *(_QWORD *)(v11 + 16); /*0x1008f5b4f*/
                v16 = v12[2]; /*0x1008f5b53*/
                do /*0x1008f5b87*/
                {
                  if ( v15 > *v12 - v16 ) /*0x1008f5b69*/
                  {
                    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1008f5b9f*/
                      v12,
                      v16,
                      v15,
                      1,
                      1,
                      v10);
                    v16 = v12[2]; /*0x1008f5ba4*/
                  }
                  memcpy((void *)(v16 + v12[1]), v14, v15); /*0x1008f5b78*/
                  v16 += v15; /*0x1008f5b7d*/
                  v12[2] = v16; /*0x1008f5b80*/
                  --v13; /*0x1008f5b84*/
                }
                while ( v13 ); /*0x1008f5b87*/
              }
            }
            v17 = v12[2]; /*0x1008f5baa*/
            if ( *v12 == v17 ) /*0x1008f5bb1*/
            {
              alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1008f5c06*/
                v12,
                v17,
                1,
                1,
                1,
                v10);
              v17 = v12[2]; /*0x1008f5c0b*/
            }
            *(_BYTE *)(v12[1] + v17) = 125; /*0x1008f5bb7*/
            v12[2] = v17 + 1; /*0x1008f5bbe*/
            return 0; /*0x1008f5bc2*/
          }
        }
      }
    }
  }
  return result; /*0x1008f5ac2*/
}