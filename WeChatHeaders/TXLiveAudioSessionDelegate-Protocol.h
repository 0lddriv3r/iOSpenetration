//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol TXLiveAudioSessionDelegate <NSObject>

@optional
- (BOOL)overrideOutputAudioPort:(unsigned int)arg1 error:(id *)arg2;
- (BOOL)setPreferredSampleRate:(double)arg1 error:(id *)arg2;
- (BOOL)setPreferredIOBufferDuration:(double)arg1 error:(id *)arg2;
- (BOOL)setCategory:(NSString *)arg1 mode:(NSString *)arg2 options:(unsigned int)arg3 error:(id *)arg4;
- (BOOL)setCategory:(NSString *)arg1 withOptions:(unsigned int)arg2 error:(id *)arg3;
- (BOOL)setCategory:(NSString *)arg1 error:(id *)arg2;
- (BOOL)setMode:(NSString *)arg1 error:(id *)arg2;
- (BOOL)setActive:(BOOL)arg1 error:(id *)arg2;
@end
