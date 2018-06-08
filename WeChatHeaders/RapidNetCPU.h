//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface RapidNetCPU : NSObject
{
    struct rapidnet *net_;
    struct RapidnetInstance *instance_;
    rpd_blob_4ec1fe6d _inputBlob;
    rpd_blob_4ec1fe6d _outputBlob;
    NSString *_protoFile;
    NSString *_modelFile;
}

@property(retain, nonatomic) NSString *modelFile; // @synthesize modelFile=_modelFile;
@property(retain, nonatomic) NSString *protoFile; // @synthesize protoFile=_protoFile;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned int *)dongleMap;
- (void)dealloc;
- (id)initWithProto:(id)arg1 modelFile:(id)arg2;
- (const rpd_blob_4ec1fe6d *)getOutputBlob;
- (const rpd_blob_4ec1fe6d *)getInputBlob;
- (const struct layer_res *)getLayerData:(int)arg1;
- (const struct layer_param *)getLayerParam:(int)arg1;
- (const struct rpd_layer_info *)getLayerInfo:(int)arg1;
- (int)getLayerCount;
- (struct rpd_net_param)getNetParam;

@end

