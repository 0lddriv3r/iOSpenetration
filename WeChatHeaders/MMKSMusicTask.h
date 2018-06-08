//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MMKSMusicTask : NSObject
{
    BOOL _isLocalFile;
    BOOL _isQQMusic;
    BOOL _isHLS;
    NSString *_url;
    NSString *_cacheUrl;
    NSString *_musicId;
    float _startTime;
}

@property(nonatomic) BOOL isHLS; // @synthesize isHLS=_isHLS;
@property(nonatomic) BOOL isQQMusic; // @synthesize isQQMusic=_isQQMusic;
@property(nonatomic) BOOL isLocalFile; // @synthesize isLocalFile=_isLocalFile;
@property(nonatomic) float startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *musicId; // @synthesize musicId=_musicId;
@property(copy, nonatomic) NSString *cacheUrl; // @synthesize cacheUrl=_cacheUrl;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
