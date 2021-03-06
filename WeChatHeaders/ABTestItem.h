//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSDictionary, NSString;

@interface ABTestItem : MMObject <PBCoding>
{
    BOOL bNoReport;
    NSString *nsLayerId;
    NSString *nsExpId;
    NSDictionary *dicExpArgs;
    unsigned long uiSeq;
    unsigned long uiBeginTime;
    unsigned long uiEndTime;
    NSString *nsBizId;
    unsigned long uiPriorityLevel;
}

+ (void)initialize;
@property(nonatomic) unsigned long uiPriorityLevel; // @synthesize uiPriorityLevel;
@property(retain, nonatomic) NSString *nsBizId; // @synthesize nsBizId;
@property(nonatomic) BOOL bNoReport; // @synthesize bNoReport;
@property(nonatomic) unsigned long uiEndTime; // @synthesize uiEndTime;
@property(nonatomic) unsigned long uiBeginTime; // @synthesize uiBeginTime;
@property(nonatomic) unsigned long uiSeq; // @synthesize uiSeq;
@property(retain, nonatomic) NSDictionary *dicExpArgs; // @synthesize dicExpArgs;
@property(retain, nonatomic) NSString *nsExpId; // @synthesize nsExpId;
@property(retain, nonatomic) NSString *nsLayerId; // @synthesize nsLayerId;
- (void).cxx_destruct;
- (unsigned long)getPriorityLevel;
- (BOOL)abtestRunning;
- (const map_69681069 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

