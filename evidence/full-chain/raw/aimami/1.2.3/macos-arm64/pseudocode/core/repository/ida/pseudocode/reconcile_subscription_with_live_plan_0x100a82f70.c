// __ZN13codexmate_lib4core10repository37reconcile_subscription_with_live_plan @ 0x100a82f70
// 1.2.3 NEW-delta | codexmate_lib::core::repository::reconcile_subscription_with_live_plan | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 __fastcall codexmate_lib::core::repository::reconcile_subscription_with_live_plan::h955957b03fa108a6(
        _QWORD *a1,
        unsigned __int64 a2,
        const void *a3,
        size_t a4)
{
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // r13
  int v10; // edx
  unsigned int v11; // r13d
  __int64 v12; // rsi
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r13
  char v18; // al
  char v19; // cl
  char v20; // cl
  _QWORD *v21; // rax
  int v22; // edx
  int v23; // ecx
  unsigned int v24; // ecx
  unsigned __int64 v25; // rcx
  unsigned int v26; // esi
  char v27; // al
  _QWORD *v28; // rdx
  char v29; // al
  _QWORD *v30; // rdx
  __int64 v31; // rax
  char v32; // cl
  char v33; // cl
  __int64 v34; // [rsp+0h] [rbp-70h] BYREF
  int v35; // [rsp+8h] [rbp-68h]
  _DWORD v36[2]; // [rsp+10h] [rbp-60h] BYREF
  __int64 v37; // [rsp+18h] [rbp-58h]
  __int64 v38; // [rsp+28h] [rbp-48h]
  __int64 v39; // [rsp+30h] [rbp-40h]
  unsigned __int64 v40; // [rsp+38h] [rbp-38h]
  _QWORD *v41; // [rsp+40h] [rbp-30h]

  v40 = a2; /*0x100a82f87*/
  v6 = a1[86]; /*0x100a82f8b*/
  v41 = a1; /*0x100a82f92*/
  v7 = a1[87]; /*0x100a82f96*/
  v8 = 424 * v7; /*0x100a82f9d*/
  v39 = v7; /*0x100a82fa4*/
  if ( v7 ) /*0x100a82fab*/
  {
    v9 = 0; /*0x100a82fad*/
    while ( 1 ) /*0x100a82fcc*/
    {
      if ( *(_QWORD *)(v6 + v9 + 208) == a4 ) /*0x100a82fd4*/
      {
        a1 = *(_QWORD **)(v6 + v9 + 200); /*0x100a82fd6*/
        a2 = (unsigned __int64)a3; /*0x100a82fde*/
        if ( !memcmp(a1, a3, a4) ) /*0x100a82fe4*/
          break; /*0x100a82fe4*/
      }
      v9 += 424; /*0x100a82fc0*/
      if ( v8 == v9 ) /*0x100a82fca*/
        goto LABEL_7; /*0x100a82fca*/
    }
    if ( *(_BYTE *)(v6 + v9 + 419) == 2 ) /*0x100a82ff6*/
      return 0; /*0x100a82ff6*/
  }
LABEL_7:
  v34 = std::time::SystemTime::now::h1fe79e41f9d5677f(a1, a2); /*0x100a82ffc*/
  v35 = v10; /*0x100a83005*/
  v11 = 0; /*0x100a83008*/
  std::time::SystemTime::duration_since::had059553cab94f96(v36, &v34, 0, 0); /*0x100a83017*/
  v12 = 0; /*0x100a83020*/
  if ( !LOBYTE(v36[0]) ) /*0x100a83025*/
    v12 = v37; /*0x100a83027*/
  if ( v40 < v41[103] ) /*0x100a8303a*/
  {
    v13 = v41[102] + 352 * v40; /*0x100a8304e*/
    v14 = *(unsigned __int8 *)(v13 + 344); /*0x100a83052*/
    if ( *(_BYTE *)(v13 + 344) ) /*0x100a83052*/
    {
      if ( (_DWORD)v14 == 8 ) /*0x100a83061*/
        return 0; /*0x100a83061*/
      *(_BYTE *)(v13 + 339) = 1; /*0x100a83067*/
      v15 = *(_QWORD *)(v13 + 16); /*0x100a8306e*/
      LOBYTE(v14) = 1; /*0x100a83072*/
      v40 = v14; /*0x100a83074*/
      if ( v15 == 1 && *(_QWORD *)(v13 + 24) <= v12 ) /*0x100a83082*/
      {
        *(_QWORD *)(v13 + 16) = 0; /*0x100a83084*/
        v15 = 0; /*0x100a8308c*/
      }
      if ( !v39 ) /*0x100a83093*/
        return 0; /*0x100a83093*/
    }
    else
    {
      *(_WORD *)(v13 + 339) = 512; /*0x100a8309a*/
      *(_QWORD *)(v13 + 16) = 0; /*0x100a830a3*/
      v15 = 0; /*0x100a830ab*/
      v40 = 0; /*0x100a830ad*/
      if ( !v39 ) /*0x100a830ba*/
        return 0; /*0x100a8312a*/
    }
    v38 = v15; /*0x100a830bc*/
    v39 = v12; /*0x100a830c0*/
    v41 = (_QWORD *)v13; /*0x100a830c4*/
    v16 = 0; /*0x100a830c8*/
    while ( *(_QWORD *)(v6 + v16 + 208) != a4 || memcmp(*(const void **)(v6 + v16 + 200), a3, a4) ) /*0x100a830fb*/
    {
      v16 += 424; /*0x100a830d0*/
      if ( v8 == v16 ) /*0x100a830da*/
        return 0; /*0x100a830da*/
    }
    if ( *(_BYTE *)(v6 + v16 + 416) != (_BYTE)v40 ) /*0x100a83109*/
      goto LABEL_35; /*0x100a83109*/
    if ( *(_DWORD *)(v6 + v16 + 16) == 1 ) /*0x100a83111*/
    {
      if ( !(_BYTE)v38 || *(_QWORD *)(v6 + v16 + 24) != v41[3] ) /*0x100a83126*/
        goto LABEL_35; /*0x100a83126*/
    }
    else if ( (_BYTE)v38 ) /*0x100a83143*/
    {
      goto LABEL_35; /*0x100a83143*/
    }
    v18 = *(_BYTE *)(v6 + v16 + 417); /*0x100a83145*/
    v19 = *((_BYTE *)v41 + 340); /*0x100a83152*/
    if ( v18 == 2 ) /*0x100a8315b*/
    {
      if ( v19 != 2 ) /*0x100a83160*/
        goto LABEL_35; /*0x100a83160*/
    }
    else if ( v18 != v19 ) /*0x100a83166*/
    {
      goto LABEL_35; /*0x100a83166*/
    }
    v20 = *(_BYTE *)(v6 + v16 + 419); /*0x100a83168*/
    if ( v20 != 3 ) /*0x100a83174*/
    {
      *(_BYTE *)(v6 + v16 + 416) = v40; /*0x100a832aa*/
      v30 = v41; /*0x100a832b2*/
      v31 = v41[2]; /*0x100a832ba*/
      *(_OWORD *)(v6 + v16 + 16) = *((_OWORD *)v41 + 1); /*0x100a832be*/
      *(_BYTE *)(v6 + v16 + 417) = *((_BYTE *)v30 + 340); /*0x100a832cb*/
      *(_BYTE *)(v6 + v16 + 419) = 1; /*0x100a832d3*/
      if ( v20 == 1 ) /*0x100a832df*/
      {
        v26 = 0; /*0x100a832e5*/
        if ( v31 ) /*0x100a832ea*/
        {
LABEL_39:
          if ( *(_QWORD *)(v6 + v16 + 24) > v39 ) /*0x100a8327b*/
          {
            v27 = 3; /*0x100a8327d*/
            if ( *(_BYTE *)(v6 + v16 + 416) & 1 | (*(_BYTE *)(v6 + v16 + 416) == 2) ) /*0x100a8327f*/
            {
              v28 = v41; /*0x100a83284*/
              *((_BYTE *)v41 + 342) = 0; /*0x100a83288*/
              v29 = 1; /*0x100a8328f*/
LABEL_50:
              *((_BYTE *)v28 + 339) = v29; /*0x100a83321*/
              *((_BYTE *)v28 + 343) = *(_BYTE *)(v6 + v16 + 419); /*0x100a83330*/
              *((_OWORD *)v28 + 2) = *(_OWORD *)(v6 + v16 + 64); /*0x100a8333c*/
              return v26; /*0x100a83343*/
            }
LABEL_47:
            v28 = v41; /*0x100a83300*/
            *((_BYTE *)v41 + 342) = v27; /*0x100a83304*/
            v29 = 2; /*0x100a8330a*/
            goto LABEL_50; /*0x100a8330c*/
          }
          v27 = 3; /*0x100a83296*/
          if ( *(_BYTE *)(v6 + v16 + 416) & 1 | (*(_BYTE *)(v6 + v16 + 416) == 2) ) /*0x100a83298*/
            goto LABEL_47; /*0x100a8329b*/
          v28 = v41; /*0x100a8329d*/
          *((_BYTE *)v41 + 342) = 1; /*0x100a832a1*/
LABEL_49:
          v29 = 0; /*0x100a8331f*/
          goto LABEL_50; /*0x100a8331f*/
        }
LABEL_46:
        v32 = *(_BYTE *)(v6 + v16 + 416); /*0x100a832f0*/
        v27 = 2; /*0x100a832f9*/
        if ( v32 == 2 ) /*0x100a832fe*/
          goto LABEL_47; /*0x100a832fe*/
        v33 = v32 ^ 1; /*0x100a8330e*/
        v28 = v41; /*0x100a83311*/
        *((_BYTE *)v41 + 342) = v33; /*0x100a83315*/
        v29 = 1; /*0x100a8331b*/
        if ( !v33 ) /*0x100a8331d*/
          goto LABEL_50; /*0x100a8331d*/
        goto LABEL_49; /*0x100a8331d*/
      }
LABEL_36:
      chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(v36); /*0x100a831a8*/
      v22 = (v36[0] >> 13) - 1; /*0x100a831b9*/
      v23 = 0; /*0x100a831bc*/
      if ( v36[0] >> 13 <= 0 ) /*0x100a831c0*/
      {
        v24 = (1 - (v36[0] >> 13)) / 0x190u + 1; /*0x100a831d4*/
        v22 += 400 * v24; /*0x100a831dc*/
        v23 = -146097 * v24; /*0x100a831de*/
      }
      v26 = (1461 * v22) >> 2; /*0x100a83201*/
      v25 = 1000 /*0x100a83240*/
          * (v36[1] + 86400LL * (int)(((v22 / 100) >> 2) + v26 + v23 + ((v36[0] >> 4) & 0x1FF) - v22 / 100 - 719163))
          + (unsigned int)v37 / 0xF4240uLL;
      *(_QWORD *)(v6 + v16 + 64) = 1; /*0x100a83243*/
      *(_QWORD *)(v6 + v16 + 72) = v25; /*0x100a8324c*/
      LOBYTE(v26) = 1; /*0x100a83256*/
      if ( *(_QWORD *)(v6 + v16 + 16) ) /*0x100a83251*/
        goto LABEL_39; /*0x100a8325c*/
      goto LABEL_46; /*0x100a8325c*/
    }
LABEL_35:
    *(_BYTE *)(v6 + v16 + 416) = v40; /*0x100a8317a*/
    v21 = v41; /*0x100a83182*/
    *(_OWORD *)(v6 + v16 + 16) = *((_OWORD *)v41 + 1); /*0x100a8318a*/
    *(_BYTE *)(v6 + v16 + 417) = *((_BYTE *)v21 + 340); /*0x100a83197*/
    *(_BYTE *)(v6 + v16 + 419) = 1; /*0x100a8319f*/
    goto LABEL_36; /*0x100a8319f*/
  }
  return v11; /*0x100a83130*/
}