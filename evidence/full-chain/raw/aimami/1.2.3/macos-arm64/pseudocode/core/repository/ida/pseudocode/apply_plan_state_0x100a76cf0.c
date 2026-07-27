// __ZN13codexmate_lib4core10repository16apply_plan_state @ 0x100a76cf0
// 1.2.3 NEW-delta | codexmate_lib::core::repository::apply_plan_state | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 __fastcall codexmate_lib::core::repository::apply_plan_state::h33911d6dab757bc8(
        unsigned __int8 *a1,
        char a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 v5; // r15
  __int64 v6; // rdx
  char *v7; // rsi
  int v8; // edx
  int v9; // ecx
  unsigned int v10; // ecx
  __int64 v11; // r12
  unsigned __int8 v12; // si
  unsigned int v13; // eax
  int v14; // edx
  int v15; // ecx
  unsigned int v16; // ecx
  signed __int64 v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // r15
  size_t v20; // rdx
  int v21; // eax
  __int64 v22; // rax
  __int64 v24; // [rsp+8h] [rbp-68h]
  __int64 v25; // [rsp+10h] [rbp-60h]
  __int64 v26; // [rsp+18h] [rbp-58h] BYREF
  void *__s2; // [rsp+20h] [rbp-50h]
  __int64 v28; // [rsp+28h] [rbp-48h]
  __int64 v29; // [rsp+30h] [rbp-40h]
  int v30; // [rsp+3Ch] [rbp-34h] BYREF
  unsigned int v31; // [rsp+40h] [rbp-30h]
  unsigned int v32; // [rsp+44h] [rbp-2Ch]

  v5 = a3; /*0x100a76d04*/
  v6 = 4; /*0x100a76d0a*/
  switch ( a2 ) /*0x100a76d21*/
  {
    case 0: /*0x100a76d21*/
      v7 = "FreePlus5x Pro20x ProTeamBusinessEnterpriseEduUnknown"; /*0x100a76d23*/
      goto LABEL_10; /*0x100a76d2a*/
    case 1: /*0x100a76d21*/
      v7 = "Plus5x Pro20x ProTeamBusinessEnterpriseEduUnknown"; /*0x100a76d3a*/
      goto LABEL_10; /*0x100a76d41*/
    case 2: /*0x100a76d21*/
      v7 = "5x Pro20x ProTeamBusinessEnterpriseEduUnknown"; /*0x100a76d43*/
      v6 = 6; /*0x100a76d4a*/
      goto LABEL_10; /*0x100a76d4f*/
    case 3: /*0x100a76d21*/
      v7 = "20x ProTeamBusinessEnterpriseEduUnknown"; /*0x100a76d2c*/
      v6 = 7; /*0x100a76d33*/
      goto LABEL_10; /*0x100a76d38*/
    case 4: /*0x100a76d21*/
      v7 = "TeamBusinessEnterpriseEduUnknown"; /*0x100a76d5f*/
      goto LABEL_10; /*0x100a76d66*/
    case 5: /*0x100a76d21*/
      v7 = "BusinessEnterpriseEduUnknown"; /*0x100a76d68*/
      v6 = 8; /*0x100a76d6f*/
      goto LABEL_10; /*0x100a76d74*/
    case 6: /*0x100a76d21*/
      v7 = "EnterpriseEduUnknown"; /*0x100a76d51*/
      v6 = 10; /*0x100a76d58*/
      goto LABEL_10; /*0x100a76d5d*/
    case 7: /*0x100a76d21*/
      v7 = "EduUnknown"; /*0x100a76d76*/
      v6 = 3; /*0x100a76d7d*/
LABEL_10:
      alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h21da2998c4baf545(&v26, v7, v6); /*0x100a76d82*/
      chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(&v30); /*0x100a76d8f*/
      v8 = (v30 >> 13) - 1; /*0x100a76d9c*/
      v9 = 0; /*0x100a76d9f*/
      if ( v30 >> 13 <= 0 ) /*0x100a76da3*/
      {
        v10 = (1 - (v30 >> 13)) / 0x190u + 1; /*0x100a76db7*/
        v8 += 400 * v10; /*0x100a76dbf*/
        v9 = -146097 * v10; /*0x100a76dc1*/
      }
      v11 = 1000 * a4; /*0x100a76e39*/
      if ( (unsigned __int64)(a4 - 1) >= 0x2540BE3FFLL ) /*0x100a76e43*/
        v11 = a4; /*0x100a76e43*/
      if ( v11 > (__int64)(v32 / 0xF4240uLL /*0x100a76e4a*/
                         + 1000
                         * (v31
                          + 86400LL
                          * (int)(((v8 / 100) >> 2)
                                + ((1461 * v8) >> 2)
                                + v9
                                + (((unsigned int)v30 >> 4) & 0x1FF)
                                - v8 / 100
                                - 719163))
                         + 1000) )
        goto LABEL_15; /*0x100a76e4a*/
      v12 = a1[418]; /*0x100a76e6b*/
      v13 = 0x30201u >> (8 * v12); /*0x100a76e7f*/
      if ( (unsigned __int8)v5 >= (unsigned __int8)v13 ) /*0x100a76e84*/
        goto LABEL_28; /*0x100a76e84*/
      if ( (_BYTE)v5 + 1 != (_BYTE)v13 ) /*0x100a76e90*/
        goto LABEL_15; /*0x100a76e90*/
      v29 = a1[418]; /*0x100a76e92*/
      v24 = *(_QWORD *)a1; /*0x100a76e99*/
      v25 = *((_QWORD *)a1 + 1); /*0x100a76ea1*/
      chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(&v30); /*0x100a76ea9*/
      v14 = (v30 >> 13) - 1; /*0x100a76eb6*/
      v15 = 0; /*0x100a76eb9*/
      if ( v30 >> 13 <= 0 ) /*0x100a76ebd*/
      {
        v16 = (1 - (v30 >> 13)) / 0x190u + 1; /*0x100a76ed1*/
        v14 += 400 * v16; /*0x100a76ed9*/
        v15 = -146097 * v16; /*0x100a76edb*/
      }
      v17 = v32 / 0xF4240uLL /*0x100a76f3d*/
          + 1000
          * (v31
           + 86400LL
           * (int)(((v14 / 100) >> 2)
                 + ((1461 * v14) >> 2)
                 + v15
                 + (((unsigned int)v30 >> 4) & 0x1FF)
                 - v14 / 100
                 - 719163))
          + 1000;
      v12 = v29; /*0x100a76f48*/
      if ( v11 > v17 ) /*0x100a76f4c*/
        goto LABEL_15; /*0x100a76f4c*/
      if ( !v24 ) /*0x100a76f57*/
        goto LABEL_28; /*0x100a76f57*/
      v18 = 1000 * v25; /*0x100a76f61*/
      if ( (unsigned __int64)(v25 - 1) >= 0x2540BE3FFLL ) /*0x100a76f6b*/
        v18 = v25; /*0x100a76f6b*/
      if ( v11 <= v18 && v18 <= v17 ) /*0x100a76f77*/
      {
LABEL_15:
        if ( v26 ) /*0x100a76e53*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v26, 1); /*0x100a76e5e*/
LABEL_17:
        LODWORD(v11) = 0; /*0x100a76e63*/
      }
      else
      {
LABEL_28:
        v29 = v5; /*0x100a76f7d*/
        v19 = a1 + 288; /*0x100a76f81*/
        v20 = *((_QWORD *)a1 + 38); /*0x100a76f88*/
        LOBYTE(v11) = 1; /*0x100a76f8f*/
        if ( v20 == v28 ) /*0x100a76f96*/
        {
          v21 = memcmp(*((const void **)a1 + 37), __s2, v20); /*0x100a76fa6*/
          if ( v12 == (_BYTE)v29 && !v21 ) /*0x100a76fb3*/
          {
            LODWORD(v11) = *a1; /*0x100a76fb9*/
            LOBYTE(v11) = (*((_QWORD *)a1 + 1) != a4) | v11 ^ 1; /*0x100a76fc4*/
          }
        }
        if ( *v19 ) /*0x100a76fc7*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)a1 + 37), *v19, 1); /*0x100a76fdb*/
        *((_QWORD *)a1 + 38) = v28; /*0x100a76fe4*/
        v22 = v26; /*0x100a76fe8*/
        *((_QWORD *)a1 + 37) = __s2; /*0x100a76ff0*/
        *v19 = v22; /*0x100a76ff4*/
        a1[418] = v29; /*0x100a76ffb*/
        *(_QWORD *)a1 = 1; /*0x100a77002*/
        *((_QWORD *)a1 + 1) = a4; /*0x100a77009*/
      }
      return (unsigned int)v11;
    case 8: /*0x100a76d21*/
      goto LABEL_17;
  }
}