//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CommonPlayerDelegate.h"

@class NSMutableArray, NSString;

@interface MMAudioPlayerQueue : NSObject <CommonPlayerDelegate>
{
    NSMutableArray *_m_audioQueue;
    float _m_volume;
}

+ (id)sharedInstance;
@property(nonatomic) float m_volume; // @synthesize m_volume=_m_volume;
@property(retain, nonatomic) NSMutableArray *m_audioQueue; // @synthesize m_audioQueue=_m_audioQueue;
- (void).cxx_destruct;
- (void)checkQueue;
- (id)init;
- (void)playSoundWithPath:(id)arg1 format:(unsigned int)arg2;
- (void)playSoundWithData:(id)arg1 format:(unsigned int)arg2;
- (id)playerWithFormat:(unsigned int)arg1;
- (void)setVolume:(float)arg1;
- (void)onCommonPlayerError:(id)arg1;
- (void)onCommonPlayerPlayEnd;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
