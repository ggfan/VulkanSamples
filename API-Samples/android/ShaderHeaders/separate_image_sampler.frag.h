#include <stdint.h>

#if 0
/usr/local/google/home/gfan/proj/VulkanSamples/API-Samples/android/../separate_image_sampler/separate_image_sampler.frag
// Module Version 10000
// Generated by (magic number): 80007
// Id's are bound by 66

                              Capability Shader
               1:             ExtInstImport  "GLSL.std.450"
                              MemoryModel Logical GLSL450
                              EntryPoint Fragment 4  "main" 22 64
                              ExecutionMode 4 OriginUpperLeft
                              Source GLSL 400
                              SourceExtension  "GL_ARB_separate_shader_objects"
                              SourceExtension  "GL_ARB_shading_language_420pack"
                              Name 4  "main"
                              Name 9  "resColor"
                              Name 12  "tex"
                              Name 16  "samp"
                              Name 22  "inTexCoords"
                              Name 64  "outColor"
                              Decorate 12(tex) DescriptorSet 0
                              Decorate 12(tex) Binding 1
                              Decorate 16(samp) DescriptorSet 0
                              Decorate 16(samp) Binding 2
                              Decorate 22(inTexCoords) Location 0
                              Decorate 64(outColor) Location 0
               2:             TypeVoid
               3:             TypeFunction 2
               6:             TypeFloat 32
               7:             TypeVector 6(float) 4
               8:             TypePointer Function 7(fvec4)
              10:             TypeImage 6(float) 2D sampled format:Unknown
              11:             TypePointer UniformConstant 10
         12(tex):     11(ptr) Variable UniformConstant
              14:             TypeSampler
              15:             TypePointer UniformConstant 14
        16(samp):     15(ptr) Variable UniformConstant
              18:             TypeSampledImage 10
              20:             TypeVector 6(float) 2
              21:             TypePointer Input 20(fvec2)
 22(inTexCoords):     21(ptr) Variable Input
              25:             TypeBool
              26:             TypeInt 32 0
              27:     26(int) Constant 0
              28:             TypePointer Input 6(float)
              31:    6(float) Constant 1008981770
              38:    6(float) Constant 1065185444
              43:    6(float) Constant 1036831949
              44:    6(float) Constant 1065353216
              45:    7(fvec4) ConstantComposite 43 43 43 44
              48:     26(int) Constant 1
              63:             TypePointer Output 7(fvec4)
    64(outColor):     63(ptr) Variable Output
         4(main):           2 Function None 3
               5:             Label
     9(resColor):      8(ptr) Variable Function
              13:          10 Load 12(tex)
              17:          14 Load 16(samp)
              19:          18 SampledImage 13 17
              23:   20(fvec2) Load 22(inTexCoords)
              24:    7(fvec4) ImageSampleImplicitLod 19 23
                              Store 9(resColor) 24
              29:     28(ptr) AccessChain 22(inTexCoords) 27
              30:    6(float) Load 29
              32:    25(bool) FOrdLessThan 30 31
              33:    25(bool) LogicalNot 32
                              SelectionMerge 35 None
                              BranchConditional 33 34 35
              34:               Label
              36:     28(ptr)   AccessChain 22(inTexCoords) 27
              37:    6(float)   Load 36
              39:    25(bool)   FOrdGreaterThan 37 38
                                Branch 35
              35:             Label
              40:    25(bool) Phi 32 5 39 34
                              SelectionMerge 42 None
                              BranchConditional 40 41 42
              41:               Label
              46:    7(fvec4)   Load 9(resColor)
              47:    7(fvec4)   FMul 46 45
                                Store 9(resColor) 47
                                Branch 42
              42:             Label
              49:     28(ptr) AccessChain 22(inTexCoords) 48
              50:    6(float) Load 49
              51:    25(bool) FOrdLessThan 50 31
              52:    25(bool) LogicalNot 51
                              SelectionMerge 54 None
                              BranchConditional 52 53 54
              53:               Label
              55:     28(ptr)   AccessChain 22(inTexCoords) 48
              56:    6(float)   Load 55
              57:    25(bool)   FOrdGreaterThan 56 38
                                Branch 54
              54:             Label
              58:    25(bool) Phi 51 42 57 53
                              SelectionMerge 60 None
                              BranchConditional 58 59 60
              59:               Label
              61:    7(fvec4)   Load 9(resColor)
              62:    7(fvec4)   FMul 61 45
                                Store 9(resColor) 62
                                Branch 60
              60:             Label
              65:    7(fvec4) Load 9(resColor)
                              Store 64(outColor) 65
                              Return
                              FunctionEnd
#endif

static const uint32_t separate_image_sampler_frag[403] = {
    0x07230203, 0x00010000, 0x00080007, 0x00000042,
    0x00000000, 0x00020011, 0x00000001, 0x0006000b,
    0x00000001, 0x4c534c47, 0x6474732e, 0x3035342e,
    0x00000000, 0x0003000e, 0x00000000, 0x00000001,
    0x0007000f, 0x00000004, 0x00000004, 0x6e69616d,
    0x00000000, 0x00000016, 0x00000040, 0x00030010,
    0x00000004, 0x00000007, 0x00030003, 0x00000002,
    0x00000190, 0x00090004, 0x415f4c47, 0x735f4252,
    0x72617065, 0x5f657461, 0x64616873, 0x6f5f7265,
    0x63656a62, 0x00007374, 0x00090004, 0x415f4c47,
    0x735f4252, 0x69646168, 0x6c5f676e, 0x75676e61,
    0x5f656761, 0x70303234, 0x006b6361, 0x00040005,
    0x00000004, 0x6e69616d, 0x00000000, 0x00050005,
    0x00000009, 0x43736572, 0x726f6c6f, 0x00000000,
    0x00030005, 0x0000000c, 0x00786574, 0x00040005,
    0x00000010, 0x706d6173, 0x00000000, 0x00050005,
    0x00000016, 0x65546e69, 0x6f6f4378, 0x00736472,
    0x00050005, 0x00000040, 0x4374756f, 0x726f6c6f,
    0x00000000, 0x00040047, 0x0000000c, 0x00000022,
    0x00000000, 0x00040047, 0x0000000c, 0x00000021,
    0x00000001, 0x00040047, 0x00000010, 0x00000022,
    0x00000000, 0x00040047, 0x00000010, 0x00000021,
    0x00000002, 0x00040047, 0x00000016, 0x0000001e,
    0x00000000, 0x00040047, 0x00000040, 0x0000001e,
    0x00000000, 0x00020013, 0x00000002, 0x00030021,
    0x00000003, 0x00000002, 0x00030016, 0x00000006,
    0x00000020, 0x00040017, 0x00000007, 0x00000006,
    0x00000004, 0x00040020, 0x00000008, 0x00000007,
    0x00000007, 0x00090019, 0x0000000a, 0x00000006,
    0x00000001, 0x00000000, 0x00000000, 0x00000000,
    0x00000001, 0x00000000, 0x00040020, 0x0000000b,
    0x00000000, 0x0000000a, 0x0004003b, 0x0000000b,
    0x0000000c, 0x00000000, 0x0002001a, 0x0000000e,
    0x00040020, 0x0000000f, 0x00000000, 0x0000000e,
    0x0004003b, 0x0000000f, 0x00000010, 0x00000000,
    0x0003001b, 0x00000012, 0x0000000a, 0x00040017,
    0x00000014, 0x00000006, 0x00000002, 0x00040020,
    0x00000015, 0x00000001, 0x00000014, 0x0004003b,
    0x00000015, 0x00000016, 0x00000001, 0x00020014,
    0x00000019, 0x00040015, 0x0000001a, 0x00000020,
    0x00000000, 0x0004002b, 0x0000001a, 0x0000001b,
    0x00000000, 0x00040020, 0x0000001c, 0x00000001,
    0x00000006, 0x0004002b, 0x00000006, 0x0000001f,
    0x3c23d70a, 0x0004002b, 0x00000006, 0x00000026,
    0x3f7d70a4, 0x0004002b, 0x00000006, 0x0000002b,
    0x3dcccccd, 0x0004002b, 0x00000006, 0x0000002c,
    0x3f800000, 0x0007002c, 0x00000007, 0x0000002d,
    0x0000002b, 0x0000002b, 0x0000002b, 0x0000002c,
    0x0004002b, 0x0000001a, 0x00000030, 0x00000001,
    0x00040020, 0x0000003f, 0x00000003, 0x00000007,
    0x0004003b, 0x0000003f, 0x00000040, 0x00000003,
    0x00050036, 0x00000002, 0x00000004, 0x00000000,
    0x00000003, 0x000200f8, 0x00000005, 0x0004003b,
    0x00000008, 0x00000009, 0x00000007, 0x0004003d,
    0x0000000a, 0x0000000d, 0x0000000c, 0x0004003d,
    0x0000000e, 0x00000011, 0x00000010, 0x00050056,
    0x00000012, 0x00000013, 0x0000000d, 0x00000011,
    0x0004003d, 0x00000014, 0x00000017, 0x00000016,
    0x00050057, 0x00000007, 0x00000018, 0x00000013,
    0x00000017, 0x0003003e, 0x00000009, 0x00000018,
    0x00050041, 0x0000001c, 0x0000001d, 0x00000016,
    0x0000001b, 0x0004003d, 0x00000006, 0x0000001e,
    0x0000001d, 0x000500b8, 0x00000019, 0x00000020,
    0x0000001e, 0x0000001f, 0x000400a8, 0x00000019,
    0x00000021, 0x00000020, 0x000300f7, 0x00000023,
    0x00000000, 0x000400fa, 0x00000021, 0x00000022,
    0x00000023, 0x000200f8, 0x00000022, 0x00050041,
    0x0000001c, 0x00000024, 0x00000016, 0x0000001b,
    0x0004003d, 0x00000006, 0x00000025, 0x00000024,
    0x000500ba, 0x00000019, 0x00000027, 0x00000025,
    0x00000026, 0x000200f9, 0x00000023, 0x000200f8,
    0x00000023, 0x000700f5, 0x00000019, 0x00000028,
    0x00000020, 0x00000005, 0x00000027, 0x00000022,
    0x000300f7, 0x0000002a, 0x00000000, 0x000400fa,
    0x00000028, 0x00000029, 0x0000002a, 0x000200f8,
    0x00000029, 0x0004003d, 0x00000007, 0x0000002e,
    0x00000009, 0x00050085, 0x00000007, 0x0000002f,
    0x0000002e, 0x0000002d, 0x0003003e, 0x00000009,
    0x0000002f, 0x000200f9, 0x0000002a, 0x000200f8,
    0x0000002a, 0x00050041, 0x0000001c, 0x00000031,
    0x00000016, 0x00000030, 0x0004003d, 0x00000006,
    0x00000032, 0x00000031, 0x000500b8, 0x00000019,
    0x00000033, 0x00000032, 0x0000001f, 0x000400a8,
    0x00000019, 0x00000034, 0x00000033, 0x000300f7,
    0x00000036, 0x00000000, 0x000400fa, 0x00000034,
    0x00000035, 0x00000036, 0x000200f8, 0x00000035,
    0x00050041, 0x0000001c, 0x00000037, 0x00000016,
    0x00000030, 0x0004003d, 0x00000006, 0x00000038,
    0x00000037, 0x000500ba, 0x00000019, 0x00000039,
    0x00000038, 0x00000026, 0x000200f9, 0x00000036,
    0x000200f8, 0x00000036, 0x000700f5, 0x00000019,
    0x0000003a, 0x00000033, 0x0000002a, 0x00000039,
    0x00000035, 0x000300f7, 0x0000003c, 0x00000000,
    0x000400fa, 0x0000003a, 0x0000003b, 0x0000003c,
    0x000200f8, 0x0000003b, 0x0004003d, 0x00000007,
    0x0000003d, 0x00000009, 0x00050085, 0x00000007,
    0x0000003e, 0x0000003d, 0x0000002d, 0x0003003e,
    0x00000009, 0x0000003e, 0x000200f9, 0x0000003c,
    0x000200f8, 0x0000003c, 0x0004003d, 0x00000007,
    0x00000041, 0x00000009, 0x0003003e, 0x00000040,
    0x00000041, 0x000100fd, 0x00010038,
};
