//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSString;

@interface WCShareCardLayoutDataItem : MMObject <PBCoding>
{
    NSString *cardTpId;
    NSString *announceMent;
    unsigned long layoutEndTime;
    unsigned long _top;
}

+ (void)initialize;
@property(nonatomic) unsigned long top; // @synthesize top=_top;
@property(nonatomic) unsigned long layoutEndTime; // @synthesize layoutEndTime;
@property(retain, nonatomic) NSString *announceMent; // @synthesize announceMent;
@property(retain, nonatomic) NSString *cardTpId; // @synthesize cardTpId;
- (void).cxx_destruct;
- (const map_69681069 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

