// invoke_env_marshal_sub_1401881D0.c — 0x1401881D0
// win 1.2.7 最新 exe | IDA <审计环境> | session <审计会话>
// invoke env（520B）克隆：Arc 字段引用计数递增（源 +136/+152/+176/+312/+320/+328/+336/+344）后逐段拷贝到输出 a1（约 360B）。
// 其中源 +176 经 sub_1406458C0 克隆为 136B state 句柄（落在输出 +176，即 sub_1406440D0 提取的 152B 对象）。
__int64 __fastcall sub_1401881D0(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rax
  volatile signed __int64 *v5; // rax
  __int64 v6; // rt0
  int v7; // ebx
  volatile signed __int64 *v8; // r14
  __int64 v9; // rt0
  char v10; // of
  volatile signed __int64 *v11; // r15
  __int64 v12; // rt0
  volatile signed __int64 *v13; // r12
  __int64 v14; // rt0
  volatile signed __int64 *v15; // r13
  __int64 v16; // rt0
  char v17; // di
  __int128 v18; // xmm1
  _BYTE v20[136]; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v21[136]; // [rsp+A8h] [rbp+28h] BYREF
  __int128 v22; // [rsp+130h] [rbp+B0h] BYREF
  __int64 v23; // [rsp+140h] [rbp+C0h]
  _BYTE v24[28]; // [rsp+1B8h] [rbp+138h]
  volatile signed __int64 *v25; // [rsp+1D8h] [rbp+158h]
  volatile signed __int64 *v26; // [rsp+1E0h] [rbp+160h]
  volatile signed __int64 *v27; // [rsp+1E8h] [rbp+168h]
  __int64 v28; // [rsp+1F0h] [rbp+170h]

  v28 = -2; /*0x1401881eb*/
  v2 = *(volatile signed __int64 **)(a2 + 328); /*0x1401881f6*/
  if ( _InterlockedIncrement64(v2) <= 0 ) /*0x140188201*/
    goto LABEL_8; /*0x140188201*/
  v26 = v2; /*0x14018820d*/
  v25 = v2; /*0x140188214*/
  sub_1416DB410(&v22, a2 + 152); /*0x140188229*/
  v5 = *(volatile signed __int64 **)(a2 + 136); /*0x14018822f*/
  v6 = _InterlockedIncrement64(v5); /*0x140188236*/
  if ( (v6 < 0) ^ v10 | (v6 == 0) ) /*0x14018823a*/
    goto LABEL_8; /*0x14018823a*/
  v27 = v5; /*0x140188240*/
  *(_QWORD *)v24 = v5; /*0x140188247*/
  v7 = *(_DWORD *)(a2 + 144); /*0x14018824e*/
  sub_1404D0500(v21, a2); /*0x14018825b*/
  sub_1419234B0(v20, v21, 136); /*0x14018826f*/
  *(_OWORD *)&v24[4] = v22; /*0x14018827b*/
  *(_QWORD *)&v24[20] = v23; /*0x140188289*/
  v8 = *(volatile signed __int64 **)(a2 + 336); /*0x140188290*/
  v9 = _InterlockedIncrement64(v8); /*0x140188297*/
  if ( (v9 < 0) ^ v10 | (v9 == 0) ) /*0x14018829b*/
    goto LABEL_8; /*0x14018829b*/
  sub_1406458C0(v21, a2 + 176); /*0x1401882ac*/
  v11 = *(volatile signed __int64 **)(a2 + 312); /*0x1401882b1*/
  v12 = _InterlockedIncrement64(v11); /*0x1401882b8*/
  if ( (v12 < 0) ^ v10 | (v12 == 0) /*0x1401882f6*/
    || (v13 = *(volatile signed __int64 **)(a2 + 320), v14 = _InterlockedIncrement64(v13), (v14 < 0) ^ v10 | (v14 == 0))
    || (sub_1419234B0(&v22, v21, 136),
        v15 = *(volatile signed __int64 **)(a2 + 344),
        v16 = _InterlockedIncrement64(v15),
        (v16 < 0) ^ v10 | (v16 == 0)) )
  {
LABEL_8:
    BUG(); /*0x1401883a6*/
  }
  v17 = *(_BYTE *)(a2 + 352); /*0x1401882fc*/
  *(_QWORD *)(a1 + 328) = v26; /*0x14018830a*/
  sub_1419234B0(a1, v20, 136); /*0x14018831e*/
  *(_QWORD *)(a1 + 136) = v27; /*0x14018832a*/
  *(_DWORD *)(a1 + 144) = v7; /*0x140188331*/
  v18 = *(_OWORD *)&v24[12]; /*0x14018833e*/
  *(_OWORD *)(a1 + 148) = *(_OWORD *)v24; /*0x140188345*/
  *(_OWORD *)(a1 + 160) = v18; /*0x14018834c*/
  *(_QWORD *)(a1 + 336) = v8; /*0x140188353*/
  sub_1419234B0(a1 + 176, &v22, 136); /*0x14018836e*/
  *(_QWORD *)(a1 + 312) = v11; /*0x140188373*/
  *(_QWORD *)(a1 + 320) = v13; /*0x14018837a*/
  *(_QWORD *)(a1 + 344) = v15; /*0x140188381*/
  *(_BYTE *)(a1 + 352) = v17; /*0x140188388*/
  return a1; /*0x140188392*/
}
