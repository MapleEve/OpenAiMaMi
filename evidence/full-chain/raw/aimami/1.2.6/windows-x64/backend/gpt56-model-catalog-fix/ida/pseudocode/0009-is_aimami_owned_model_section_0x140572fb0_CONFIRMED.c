// codexmate_lib::core::relay::config_takeover::is_aimami_owned_model_section (win 对应体，本轮定位确认)
// win EA 0x140572fb0, size 0x195 (405B), AiMaMi 1.2.6 windows-x64
// mac 对照符号: codexmate_lib::core::relay::config_takeover::is_aimami_owned_model_section::h54056e81d487509e
// mac EA 0x100ae9de0, size 305B (0x131)
//
// 【本轮定位方法（红线13破假墙 + 调用图簇扩展，非string-pool搜索）】
// 背景：此前 manifest 曾把 0x14056b270（2342B）标为本函数的高置信度候选，经 decompile 证伪——
// 那是"托管块标记扫描器"（扫描 "># >>> aimami-relay managed start" 类55字节标记提取托管块内容），
// 与本函数"profiles.前缀 + first_section_part 字面量比较"的谓词逻辑完全不同（已在该地址写入
// 证伪说明，避免后续轮次沿用错误映射）。
//
// 本轮方法（严格按 references/ida-deep-recovery.md 破假墙 playbook 执行）：
// 1) win IDA 健康检查（红线17）：server_health 确认 status=ok/uptime=192244s/
//    hexrays_ready=true/module="AiMaMi 1.2.6 win64.exe"。
// 2) xrefs_to(0x14056b270) 找到其唯一 code caller = sub_140573DE0（config_takeover
//    主编排函数，0xd2a/3370B）。对该 caller 做 callees() 调用图簇扩展，发现其同时
//    直接调用 sub_140572FB0 与 sub_140573150 —— 印证"谓词函数与已证伪的标记扫描器
//    是同一个调用簇里的邻居函数"这一假设。
// 3) 读取 mac 侧 is_aimami_owned_model_section 完整反编译体（raw/aimami/1.2.6/
//    macos-arm64/backend/gpt56-model-catalog-fix/pseudocode/0008-...c），提取具体
//    比较的字符串前缀字面量：8字节精确比较 0x73656C69666F7270（LE 解码 = "profiles"）
//    + 第9字节 0x2E（'.'）= 9字节前缀"profiles."；另有一个 mac 侧未解出的16字节
//    快速路径 xmmword_1016F4840。
// 4) decompile(0x140572FB0) 逐字节核对：其 <16 字节分支中 byteswap(*a1)==
//    0x70726F66696C6573 且 *(a1+8)==0x2E，程序化验证 bswap(0x70726F66696C6573)==
//    0x73656C69666F7270 == mac 侧同一常量（"profiles."9字节前缀），**精确命中**；
//    其 >=16 字节快速路径两个 8 字节 byteswap 比较（0x6D6F64656C5F7072 / 0x6F7669646572732E）
//    程序化解码 = "model_pr"+"oviders." = "model_providers."（16字节），据此**本轮附带
//    解出了 mac 侧此前未解析的 xmmword_1016F4840 常量内容** = "model_providers."。
// 5) 长度分支结构与 mac 逐一对应（len==12 / len>12(13字节前缀) / len==6 / len==19，
//    19字节分支用 _mm_cmpeq_epi8+movemask==0xFFFF，mac 用 _mm_testz_si128(xor)，
//    两种写法语义等价，均为"全字节相等"判定）；len==12 程序化解码字面量=
//    "aimami_relay"，len>12 前缀程序化解码="aimami_relay_"（13字节，长度不限的
//    "aimami_relay_*"前缀族）。
// 6) 检查同一调用簇内的 sub_140573150（config_takeover 的另一个字符串/字段判定
//    dispatcher，switch(discriminant) 内联复用了同样的 "profiles"/"profile"/
//    "model_providers"/"aimami_relay" 等前缀比较片段）——确认是"谓词函数的兄弟
//    函数"而非谓词函数本身（签名不匹配：3参数 vs 目标2参数 (ptr,len)->bool）。
// 7) 签名/语义/结构三项与 mac 完全一致，genuine_ceiling=false（非假墙，本轮实际定位成功）。
//
// 完整反编译（无截断，decompile() code 字段完整返回）：
char __fastcall is_aimami_owned_model_section(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // r8
  int v4; // r9d
  unsigned __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rax
  bool v8; // zf
  char result; // al
  char v10; // si
  __int64 v11; // [rsp+28h] [rbp-20h] BYREF
  const __m128i *v12; // [rsp+30h] [rbp-18h]
  unsigned __int64 v13; // [rsp+38h] [rbp-10h]

  if ( a2 < 0x10 ) /*0x140572fb9*/
  {
    if ( a2 < 9 ) /*0x140572fbf*/
      return 0; /*0x140572fbf*/
LABEL_8:
    v5 = _byteswap_uint64(*a1); /*0x14057300b*/
    if ( v5 == 0x70726F66696C6573LL ) /* == byteswap("profiles"), 精确命中mac侧9字节前缀 */
    {
      if ( *((_BYTE *)a1 + 8) == 46 ) /* '.' , 组成"profiles." 9字节前缀 */
        goto LABEL_12;
    }
    else if ( 2 * (v5 <= 0x70726F66696C6573LL) == 1 )
    {
LABEL_12:
      v6 = -9;
      v7 = 9;
      goto LABEL_14;
    }
    return 0;
  }
  v2 = _byteswap_uint64(*a1);
  v3 = 0x6D6F64656C5F7072LL; /* "model_pr" (程序化解码) */
  if ( v2 != 0x6D6F64656C5F7072LL
    || (v2 = _byteswap_uint64(a1[1]), v3 = 0x6F7669646572732ELL, v4 = 0, v2 != 0x6F7669646572732ELL) ) /* "oviders." → 合并16字节前缀 "model_providers." */
  {
    v4 = 2 * (v3 >= v2) - 1;
  }
  if ( v4 )
    goto LABEL_8;
  v6 = -16;
  v7 = 16;
LABEL_14:
  sub_14056C0E0(&v11, (char *)a1 + v7, a2 + v6); /* first_section_part 等价提取函数 */
  if ( v11 == -1 )
    return 0;
  if ( v13 == 12 ) /* first_section_part 长度 == 12 */
  {
    v8 = (v12->m128i_i64[0] ^ 0x725F696D616D6961LL | v12->m128i_u32[2] ^ 0x79616C65LL) == 0; /* "aimami_relay" (12字节，程序化解码) */
LABEL_25:
    result = v8;
    goto LABEL_26;
  }
  if ( v13 <= 0xC
    || v12->m128i_i64[0] ^ 0x725F696D616D6961LL | *(__int64 *)((char *)v12->m128i_i64 + 5) ^ 0x5F79616C65725F69LL ) /* 前13字节前缀 "aimami_relay_" (程序化解码) */
  {
    if ( v13 == 6 )
    {
      v8 = (v12->m128i_i32[0] ^ 0x616D6961 | v12->m128i_u16[2] ^ 0x3169) == 0; /* 6字节字面量，程序化解码="aima"+bytes[4:6]，具体第5-6字节含义本轮未做进一步语义解读，如实标注 */
      goto LABEL_25;
    }
    if ( v13 == 19 )
    {
      v8 = _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_loadu_si128(v12), (__m128i)xmmword_14180D9B0),
               _mm_cmpeq_epi8(
                 _mm_loadu_si128((const __m128i *)((char *)v12->m128i_i32 + 3)),
                 (__m128i)xmmword_14180D9A0))) == 0xFFFF; /* 19字节SIMD全字节比较，字面量地址xmmword_14180D9B0/9A0本轮未做get_bytes字节级解码 */
      goto LABEL_25;
    }
    result = 0;
  }
  else
  {
    result = 1;
  }
LABEL_26:
  if ( v11 )
  {
    v10 = result;
    sub_140001660(v12, v11, 1); /* 释放 first_section_part 分配的缓冲 */
    return v10;
  }
  return result;
}

/*
真实行为结论（与 mac 侧 0008 号文件逐条对照，结构 100% 一致）：
判定一个 TOML section header 字节切片 (a1,a2=ptr,len) 是否是 AiMaMi 自身管理的
[profiles.X] 或 [model_providers.X] 段：
  1. len>=16：对前16字节做 byteswap 双 8 字节比较，命中 "model_providers." 前缀
     （本轮程序化解码得出，mac侧对应xmmword_1016F4840此前未解出，本轮间接补全）；
  2. 否则 len<9：直接返回 false；
  3. 否则走9字节前缀慢速路径：精确比较前8字节==byteswap("profiles")且第9字节=='.'；
  4. 取前缀之后的 first_section_part（对应 sub_14056C0E0），解析失败返回 false；
  5. 按该段长度分四种情况与已知字面量比较：
     - len==12："aimami_relay"；
     - len>12：前13字节=="aimami_relay_"（长度不限的前缀族）；
     - len==6：程序化解码得字节内容为 "aima"+两个未做语义解读的字节（如实标注，非过度推断）；
     - len==19：SIMD 全字节比较，具体字面量本轮未做 get_bytes 解码（如实标注为诚实缺口）。
命中任一即返回 true（是 AiMaMi 拥有的 model section）。

genuine_ceiling=false：本函数本轮已实际定位成功，非假墙。
诚实缺口（红线13/29如实声明，非过度收尾）：len==6/len==19两个分支的具体字面量本轮
未做 get_bytes 逐字节解码确认完整语义（已给出程序化解码的部分字节，未对 xmmword_14180D9B0/
14180D9A0 做地址级 get_bytes 读取）；不影响函数身份判定的确定性（签名/长度分支结构/
9字节与16字节前缀/12字节与13字节字面量均已逐位程序化核对，四项独立证据线均指向
同一函数）。
*/
