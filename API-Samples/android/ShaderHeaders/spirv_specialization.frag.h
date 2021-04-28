#include <stdint.h>

#if 0
/usr/local/google/home/gfan/proj/VulkanSamples/API-Samples/android/../spirv_specialization/spirv_specialization.frag
// Module Version 10000
// Generated by (magic number): 80007
// Id's are bound by 31

                              Capability Shader
               1:             ExtInstImport  "GLSL.std.450"
                              MemoryModel Logical GLSL450
                              EntryPoint Fragment 4  "main" 13 27
                              ExecutionMode 4 OriginUpperLeft
                              Source GLSL 400
                              SourceExtension  "GL_ARB_separate_shader_objects"
                              SourceExtension  "GL_ARB_shading_language_420pack"
                              Name 4  "main"
                              Name 7  "drawUserColor"
                              Name 13  "outColor"
                              Name 14  "r"
                              Name 15  "g"
                              Name 16  "b"
                              Name 23  "tex"
                              Name 27  "texcoord"
                              Decorate 7(drawUserColor) SpecId 5
                              Decorate 13(outColor) Location 0
                              Decorate 14(r) SpecId 7
                              Decorate 15(g) SpecId 8
                              Decorate 16(b) SpecId 9
                              Decorate 23(tex) DescriptorSet 0
                              Decorate 23(tex) Binding 1
                              Decorate 27(texcoord) Location 0
               2:             TypeVoid
               3:             TypeFunction 2
               6:             TypeBool
7(drawUserColor):     6(bool) SpecConstantFalse
              10:             TypeFloat 32
              11:             TypeVector 10(float) 4
              12:             TypePointer Output 11(fvec4)
    13(outColor):     12(ptr) Variable Output
           14(r):   10(float) SpecConstant 0
           15(g):   10(float) SpecConstant 0
           16(b):   10(float) SpecConstant 0
              17:   10(float) Constant 1065353216
              20:             TypeImage 10(float) 2D sampled format:Unknown
              21:             TypeSampledImage 20
              22:             TypePointer UniformConstant 21
         23(tex):     22(ptr) Variable UniformConstant
              25:             TypeVector 10(float) 2
              26:             TypePointer Input 25(fvec2)
    27(texcoord):     26(ptr) Variable Input
              29:   10(float) Constant 0
         4(main):           2 Function None 3
               5:             Label
                              SelectionMerge 9 None
                              BranchConditional 7(drawUserColor) 8 19
               8:               Label
              18:   11(fvec4)   CompositeConstruct 14(r) 15(g) 16(b) 17
                                Store 13(outColor) 18
                                Branch 9
              19:               Label
              24:          21   Load 23(tex)
              28:   25(fvec2)   Load 27(texcoord)
              30:   11(fvec4)   ImageSampleExplicitLod 24 28 Lod 29
                                Store 13(outColor) 30
                                Branch 9
               9:             Label
                              Return
                              FunctionEnd
#endif

static const uint32_t spirv_specialization_frag[242] = {
    0x07230203, 0x00010000, 0x00080007, 0x0000001f,
    0x00000000, 0x00020011, 0x00000001, 0x0006000b,
    0x00000001, 0x4c534c47, 0x6474732e, 0x3035342e,
    0x00000000, 0x0003000e, 0x00000000, 0x00000001,
    0x0007000f, 0x00000004, 0x00000004, 0x6e69616d,
    0x00000000, 0x0000000d, 0x0000001b, 0x00030010,
    0x00000004, 0x00000007, 0x00030003, 0x00000002,
    0x00000190, 0x00090004, 0x415f4c47, 0x735f4252,
    0x72617065, 0x5f657461, 0x64616873, 0x6f5f7265,
    0x63656a62, 0x00007374, 0x00090004, 0x415f4c47,
    0x735f4252, 0x69646168, 0x6c5f676e, 0x75676e61,
    0x5f656761, 0x70303234, 0x006b6361, 0x00040005,
    0x00000004, 0x6e69616d, 0x00000000, 0x00060005,
    0x00000007, 0x77617264, 0x72657355, 0x6f6c6f43,
    0x00000072, 0x00050005, 0x0000000d, 0x4374756f,
    0x726f6c6f, 0x00000000, 0x00030005, 0x0000000e,
    0x00000072, 0x00030005, 0x0000000f, 0x00000067,
    0x00030005, 0x00000010, 0x00000062, 0x00030005,
    0x00000017, 0x00786574, 0x00050005, 0x0000001b,
    0x63786574, 0x64726f6f, 0x00000000, 0x00040047,
    0x00000007, 0x00000001, 0x00000005, 0x00040047,
    0x0000000d, 0x0000001e, 0x00000000, 0x00040047,
    0x0000000e, 0x00000001, 0x00000007, 0x00040047,
    0x0000000f, 0x00000001, 0x00000008, 0x00040047,
    0x00000010, 0x00000001, 0x00000009, 0x00040047,
    0x00000017, 0x00000022, 0x00000000, 0x00040047,
    0x00000017, 0x00000021, 0x00000001, 0x00040047,
    0x0000001b, 0x0000001e, 0x00000000, 0x00020013,
    0x00000002, 0x00030021, 0x00000003, 0x00000002,
    0x00020014, 0x00000006, 0x00030031, 0x00000006,
    0x00000007, 0x00030016, 0x0000000a, 0x00000020,
    0x00040017, 0x0000000b, 0x0000000a, 0x00000004,
    0x00040020, 0x0000000c, 0x00000003, 0x0000000b,
    0x0004003b, 0x0000000c, 0x0000000d, 0x00000003,
    0x00040032, 0x0000000a, 0x0000000e, 0x00000000,
    0x00040032, 0x0000000a, 0x0000000f, 0x00000000,
    0x00040032, 0x0000000a, 0x00000010, 0x00000000,
    0x0004002b, 0x0000000a, 0x00000011, 0x3f800000,
    0x00090019, 0x00000014, 0x0000000a, 0x00000001,
    0x00000000, 0x00000000, 0x00000000, 0x00000001,
    0x00000000, 0x0003001b, 0x00000015, 0x00000014,
    0x00040020, 0x00000016, 0x00000000, 0x00000015,
    0x0004003b, 0x00000016, 0x00000017, 0x00000000,
    0x00040017, 0x00000019, 0x0000000a, 0x00000002,
    0x00040020, 0x0000001a, 0x00000001, 0x00000019,
    0x0004003b, 0x0000001a, 0x0000001b, 0x00000001,
    0x0004002b, 0x0000000a, 0x0000001d, 0x00000000,
    0x00050036, 0x00000002, 0x00000004, 0x00000000,
    0x00000003, 0x000200f8, 0x00000005, 0x000300f7,
    0x00000009, 0x00000000, 0x000400fa, 0x00000007,
    0x00000008, 0x00000013, 0x000200f8, 0x00000008,
    0x00070050, 0x0000000b, 0x00000012, 0x0000000e,
    0x0000000f, 0x00000010, 0x00000011, 0x0003003e,
    0x0000000d, 0x00000012, 0x000200f9, 0x00000009,
    0x000200f8, 0x00000013, 0x0004003d, 0x00000015,
    0x00000018, 0x00000017, 0x0004003d, 0x00000019,
    0x0000001c, 0x0000001b, 0x00070058, 0x0000000b,
    0x0000001e, 0x00000018, 0x0000001c, 0x00000002,
    0x0000001d, 0x0003003e, 0x0000000d, 0x0000001e,
    0x000200f9, 0x00000009, 0x000200f8, 0x00000009,
    0x000100fd, 0x00010038,
};
