import i18n from "@/lib/i18n";

export interface CustomInstructionTemplate {
  code: string;
  title: string;
  summary: string;
  body: string;
  tags: string[];
  applyCount?: number;
  source: "builtin" | "remote";
}

const builtinTemplateCodes = [
  "zh-structured",
  "review-first",
  "safe-fix",
  "frontend-polish",
] as const;

type BuiltinTemplateCode = (typeof builtinTemplateCodes)[number];

function templateKey(code: BuiltinTemplateCode, field: string): string {
  return `templates.customInstructions.${code}.${field}`;
}

function templateString(code: BuiltinTemplateCode, field: string): string {
  return i18n.t(templateKey(code, field));
}

function templateTags(code: BuiltinTemplateCode): string[] {
  return templateString(code, "tags")
    .split("|")
    .map((tag) => tag.trim())
    .filter(Boolean);
}

function createBuiltinTemplate(code: BuiltinTemplateCode): CustomInstructionTemplate {
  return {
    code,
    get title() {
      return templateString(code, "title");
    },
    get summary() {
      return templateString(code, "summary");
    },
    get body() {
      return templateString(code, "body");
    },
    get tags() {
      return templateTags(code);
    },
    source: "builtin",
  };
}

export const builtinCustomInstructionTemplates: CustomInstructionTemplate[] =
  builtinTemplateCodes.map(createBuiltinTemplate);

export function mergeCustomInstructionTemplates(
  remoteTemplates: Array<Partial<CustomInstructionTemplate> & { code: string }> = [],
): CustomInstructionTemplate[] {
  const merged = new Map<string, CustomInstructionTemplate>();

  for (const template of builtinCustomInstructionTemplates) {
    merged.set(template.code, template);
  }

  for (const remoteTemplate of remoteTemplates) {
    const current = merged.get(remoteTemplate.code);
    merged.set(remoteTemplate.code, {
      code: remoteTemplate.code,
      title: remoteTemplate.title ?? current?.title ?? remoteTemplate.code,
      summary: remoteTemplate.summary ?? current?.summary ?? "",
      body: remoteTemplate.body ?? current?.body ?? "",
      tags: remoteTemplate.tags ?? current?.tags ?? [],
      applyCount: remoteTemplate.applyCount ?? current?.applyCount,
      source: "remote",
    });
  }

  return Array.from(merged.values());
}
