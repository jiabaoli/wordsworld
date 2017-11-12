// Shader created with Shader Forge v1.38 
// Shader Forge (c) Neat Corporation / Joachim Holmer - http://www.acegikmo.com/shaderforge/
// Note: Manually altering this data may prevent you from opening it in Shader Forge
/*SF_DATA;ver:1.38;sub:START;pass:START;ps:flbk:,iptp:0,cusa:False,bamd:0,cgin:,lico:1,lgpr:1,limd:0,spmd:1,trmd:0,grmd:0,uamb:True,mssp:True,bkdf:False,hqlp:False,rprd:False,enco:False,rmgx:True,imps:True,rpth:0,vtps:0,hqsc:True,nrmq:1,nrsp:0,vomd:0,spxs:False,tesm:0,olmd:1,culm:0,bsrc:0,bdst:1,dpts:2,wrdp:True,dith:0,atcv:False,rfrpo:True,rfrpn:Refraction,coma:15,ufog:True,aust:True,igpj:False,qofs:0,qpre:1,rntp:1,fgom:False,fgoc:False,fgod:False,fgor:False,fgmd:0,fgcr:0.5,fgcg:0.5,fgcb:0.5,fgca:1,fgde:0.01,fgrn:0,fgrf:300,stcl:False,atwp:False,stva:128,stmr:255,stmw:255,stcp:6,stps:0,stfa:0,stfz:0,ofsf:0,ofsu:0,f2p0:False,fnsp:False,fnfb:False,fsmp:False;n:type:ShaderForge.SFN_Final,id:1,x:34584,y:32684,varname:node_1,prsc:2|custl-14-RGB;n:type:ShaderForge.SFN_Code,id:2,x:33266,y:32906,varname:node_2,prsc:2,code:IAB2AGkAZQB3AEQAaQByACAAPQAgAG4AbwByAG0AYQBsAGkAegBlACgAdgBpAGUAdwBEAGkAcgApADsACgAKACAAZgBsAG8AYQB0ADMAIABwACAAPQAgAGYAbABvAGEAdAAzACgAVQBWACwAIAAwACkAOwAKACAAZgBsAG8AYQB0ADMAIABuAGUAdwBWAGkAZQB3ACAAPQAgAG4AbwByAG0AYQBsAGkAegBlACgAdgBpAGUAdwBEAGkAcgAgACoAIAAtADEAKQA7AAoAIABuAGUAdwBWAGkAZQB3AC4AegAgACAAIAAgACAAIAA9ACAAYQBiAHMAKABuAGUAdwBWAGkAZQB3AC4AegApADsACgAKACAAZgBsAG8AYQB0ACAAZABlAHAAdABoAEIAaQBhAHMAIAA9ACAAMQAuADAAIAAtACAAbgBlAHcAVgBpAGUAdwAuAHoAOwAKACAAZABlAHAAdABoAEIAaQBhAHMAIAAqAD0AIABkAGUAcAB0AGgAQgBpAGEAcwA7AAoAIABkAGUAcAB0AGgAQgBpAGEAcwAgACoAPQAgAGQAZQBwAHQAaABCAGkAYQBzADsACgAgAGQAZQBwAHQAaABCAGkAYQBzACAAPQAgADEALgAwACAALQAgAGQAZQBwAHQAaABCAGkAYQBzACAAKgAgAGQAZQBwAHQAaABCAGkAYQBzADsACgAKACAAbgBlAHcAVgBpAGUAdwAuAHgAeQAgACoAPQAgAGQAZQBwAHQAaABCAGkAYQBzADsACgAgAG4AZQB3AFYAaQBlAHcALgB4AHkAIAAqAD0AIABEAGUAcAB0AGgAOwAKAAoAIABjAG8AbgBzAHQAIABpAG4AdAAgAGIAaQBuAGEAcgB5AFMAZQBhAHIAYwBoAFMAdABlAHAAcwAgAD0AIAAxADAAOwAKAAoAIABuAGUAdwBWAGkAZQB3ACAALwA9ACAAbgBlAHcAVgBpAGUAdwAuAHoAIAAqACAAbABpAG4AZQBhAHIAUwBlAGEAcgBjAGgAUwB0AGUAcABzADsACgAKACAALwAvAHAAcgBvAGQAdQBjAGUAcwAgAGQAZQBwAHQAaAAKACAAaQBuAHQAIABpADsACgAgAGYAbwByACgAIABpAD0AMAA7ACAAaQA8AGwAaQBuAGUAYQByAFMAZQBhAHIAYwBoAFMAdABlAHAAcwA7ACAAaQArACsAKQB7AAoAIAAgAGYAbABvAGEAdAAgAHQAZQB4ACAAPQAgAHQAZQB4ADIARAAoAEgAZQBpAGcAaAB0AE0AYQBwACwAIABwAC4AeAB5ACkALgByADsACgAgACAAaQBmACAAKABwAC4AegA8AHQAZQB4ACkAIABwACsAPQBuAGUAdwBWAGkAZQB3ADsACgAgAH0ACgAKACAAZgBvAHIAKAAgAGkAPQAwADsAIABpADwAYgBpAG4AYQByAHkAUwBlAGEAcgBjAGgAUwB0AGUAcABzADsAIABpACsAKwAgACkAewAKACAAIABuAGUAdwBWAGkAZQB3ACAAKgA9ACAAMAAuADUAOwAKACAAIABmAGwAbwBhAHQAIAB0AGUAeAAgAD0AIAB0AGUAeAAyAEQAKABIAGUAaQBnAGgAdABNAGEAcAAsACAAcAAuAHgAeQApAC4AcgA7AAoAIAAgAGkAZgAoAHAALgB6ACAAPAAgAHQAZQB4ACkAIABwACsAPQAgAG4AZQB3AFYAaQBlAHcAOwAKACAAIABlAGwAcwBlACAAcAAgAC0APQAgAG4AZQB3AFYAaQBlAHcAOwAKACAAfQAKACAAcgBlAHQAdQByAG4AIABwADsA,output:2,fname:Relief,width:599,height:510,input:2,input:12,input:0,input:0,input:1,input_1_label:viewDir,input_2_label:HeightMap,input_3_label:Depth,input_4_label:linearSearchSteps,input_5_label:UV|A-28-XYZ,B-5-TEX,C-6-OUT,D-8-OUT,E-12-UVOUT;n:type:ShaderForge.SFN_ViewVector,id:3,x:32789,y:32570,varname:node_3,prsc:2;n:type:ShaderForge.SFN_Tex2dAsset,id:5,x:32945,y:32751,ptovrint:False,ptlb:HeightMap,ptin:_HeightMap,varname:node_6720,glob:False,taghide:False,taghdr:False,tagprd:False,tagnsco:False,tagnrm:False,tex:5de0eafe0c281495b8272d9a1d7c3ea8,ntxv:0,isnm:False;n:type:ShaderForge.SFN_ValueProperty,id:6,x:32945,y:32928,ptovrint:False,ptlb:Depth,ptin:_Depth,varname:node_4323,prsc:2,glob:False,taghide:False,taghdr:False,tagprd:False,tagnsco:False,tagnrm:False,v1:1;n:type:ShaderForge.SFN_ValueProperty,id:8,x:32945,y:33006,ptovrint:False,ptlb:Quality,ptin:_Quality,varname:node_5547,prsc:2,glob:False,taghide:False,taghdr:False,tagprd:False,tagnsco:False,tagnrm:False,v1:60;n:type:ShaderForge.SFN_TexCoord,id:12,x:32945,y:33058,varname:node_12,prsc:2,uv:0,uaff:False;n:type:ShaderForge.SFN_ComponentMask,id:13,x:34126,y:32930,varname:node_13,prsc:2,cc1:0,cc2:1,cc3:-1,cc4:-1|IN-2-OUT;n:type:ShaderForge.SFN_Tex2d,id:14,x:34339,y:32795,ptovrint:False,ptlb:Texture,ptin:_Texture,varname:node_7866,prsc:2,glob:False,taghide:False,taghdr:False,tagprd:False,tagnsco:False,tagnrm:False,ntxv:0,isnm:False|UVIN-13-OUT;n:type:ShaderForge.SFN_Transform,id:28,x:32945,y:32570,varname:node_28,prsc:2,tffrom:0,tfto:2|IN-3-OUT;proporder:14-5-6-8;pass:END;sub:END;*/

Shader "Custom/ReliefParallax" {
    Properties {
        _Texture ("Texture", 2D) = "white" {}
        _HeightMap ("HeightMap", 2D) = "white" {}
        _Depth ("Depth", Float ) = 1
        _Quality ("Quality", Float ) = 60
    }
    SubShader {
        Tags {
            "RenderType"="Opaque"
        }
        LOD 200
        Pass {
            Name "FORWARD"
            Tags {
                "LightMode"="ForwardBase"
            }
            
            
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            #define UNITY_PASS_FORWARDBASE
            #include "UnityCG.cginc"
            #pragma multi_compile_fwdbase_fullshadows
            #pragma multi_compile_fog
            #pragma only_renderers d3d9 d3d11 glcore gles gles3 metal xboxone ps4 psp2 n3ds wiiu 
            #pragma target 3.0
            float3 Relief( float3 viewDir , sampler2D HeightMap , float Depth , float linearSearchSteps , float2 UV ){
             viewDir = normalize(viewDir);
            
             float3 p = float3(UV, 0);
             float3 newView = normalize(viewDir * -1);
             newView.z      = abs(newView.z);
            
             float depthBias = 1.0 - newView.z;
             depthBias *= depthBias;
             depthBias *= depthBias;
             depthBias = 1.0 - depthBias * depthBias;
            
             newView.xy *= depthBias;
             newView.xy *= Depth;
            
             const int binarySearchSteps = 10;
            
             newView /= newView.z * linearSearchSteps;
            
             //produces depth
             int i;
             for( i=0; i<linearSearchSteps; i++){
              float tex = tex2D(HeightMap, p.xy).r;
              if (p.z<tex) p+=newView;
             }
            
             for( i=0; i<binarySearchSteps; i++ ){
              newView *= 0.5;
              float tex = tex2D(HeightMap, p.xy).r;
              if(p.z < tex) p+= newView;
              else p -= newView;
             }
             return p;
            }
            
            uniform sampler2D _HeightMap; uniform float4 _HeightMap_ST;
            uniform float _Depth;
            uniform float _Quality;
            uniform sampler2D _Texture; uniform float4 _Texture_ST;
            struct VertexInput {
                float4 vertex : POSITION;
                float3 normal : NORMAL;
                float4 tangent : TANGENT;
                float2 texcoord0 : TEXCOORD0;
            };
            struct VertexOutput {
                float4 pos : SV_POSITION;
                float2 uv0 : TEXCOORD0;
                float4 posWorld : TEXCOORD1;
                float3 normalDir : TEXCOORD2;
                float3 tangentDir : TEXCOORD3;
                float3 bitangentDir : TEXCOORD4;
                UNITY_FOG_COORDS(5)
            };
            VertexOutput vert (VertexInput v) {
                VertexOutput o = (VertexOutput)0;
                o.uv0 = v.texcoord0;
                o.normalDir = UnityObjectToWorldNormal(v.normal);
                o.tangentDir = normalize( mul( unity_ObjectToWorld, float4( v.tangent.xyz, 0.0 ) ).xyz );
                o.bitangentDir = normalize(cross(o.normalDir, o.tangentDir) * v.tangent.w);
                o.posWorld = mul(unity_ObjectToWorld, v.vertex);
                o.pos = UnityObjectToClipPos( v.vertex );
                UNITY_TRANSFER_FOG(o,o.pos);
                return o;
            }
            float4 frag(VertexOutput i) : COLOR {
                i.normalDir = normalize(i.normalDir);
                float3x3 tangentTransform = float3x3( i.tangentDir, i.bitangentDir, i.normalDir);
                float3 viewDirection = normalize(_WorldSpaceCameraPos.xyz - i.posWorld.xyz);
                float3 normalDirection = i.normalDir;
////// Lighting:
                float2 node_13 = Relief( mul( tangentTransform, viewDirection ).xyz.rgb , _HeightMap , _Depth , _Quality , i.uv0 ).rg;
                float4 _Texture_var = tex2D(_Texture,TRANSFORM_TEX(node_13, _Texture));
                float3 finalColor = _Texture_var.rgb;
                fixed4 finalRGBA = fixed4(finalColor,1);
                UNITY_APPLY_FOG(i.fogCoord, finalRGBA);
                return finalRGBA;
            }
            ENDCG
        }
    }
    FallBack "Diffuse"
    CustomEditor "ShaderForgeMaterialInspector"
}
