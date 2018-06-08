//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface FTSMCSItem : NSObject <PBCoding>
{
    NSString *key;
    float score;
    unsigned long baseTime;
}

+ (void)setDeclineFactor:(float)arg1;
+ (void)initialize;
@property(nonatomic) unsigned long baseTime; // @synthesize baseTime;
@property(nonatomic) float score; // @synthesize score;
@property(retain, nonatomic) NSString *key; // @synthesize key;
- (void).cxx_destruct;
- (int)compareByScoreDesc:(id)arg1;
- (void)updateScoreWithTime:(unsigned long)arg1;
- (void)addScore;
- (id)init;
- (const map_69681069 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

