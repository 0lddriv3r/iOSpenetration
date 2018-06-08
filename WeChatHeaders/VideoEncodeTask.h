//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAsset, NSURL, SightAssetExportSession, VideoEncodeParams;

@interface VideoEncodeTask : NSObject
{
    BOOL _isEncoding;
    BOOL _isCanceled;
    NSURL *_inputPath;
    NSURL *_outputPath;
    AVAsset *_asset;
    VideoEncodeParams *_params;
    CDUnknownBlockType _callback;
    SightAssetExportSession *_exportSession;
}

@property(retain, nonatomic) SightAssetExportSession *exportSession; // @synthesize exportSession=_exportSession;
@property(nonatomic) BOOL isCanceled; // @synthesize isCanceled=_isCanceled;
@property(nonatomic) BOOL isEncoding; // @synthesize isEncoding=_isEncoding;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) VideoEncodeParams *params; // @synthesize params=_params;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property(copy, nonatomic) NSURL *outputPath; // @synthesize outputPath=_outputPath;
@property(copy, nonatomic) NSURL *inputPath; // @synthesize inputPath=_inputPath;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;

@end
