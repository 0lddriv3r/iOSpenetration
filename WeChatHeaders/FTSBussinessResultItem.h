//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class FTSBussinessCommonItem, FTSBussinessContactItem, FTSBussinessPOIItem, FTSBussinessSnsItem;

@interface FTSBussinessResultItem : MMObject
{
    unsigned long _type;
    FTSBussinessContactItem *_contactItem;
    FTSBussinessCommonItem *_commonItem;
    FTSBussinessPOIItem *_poiItem;
    FTSBussinessSnsItem *_snsItem;
    unsigned long long _docId;
}

+ (id)fromServerObject:(id)arg1;
@property(retain, nonatomic) FTSBussinessSnsItem *snsItem; // @synthesize snsItem=_snsItem;
@property(retain, nonatomic) FTSBussinessPOIItem *poiItem; // @synthesize poiItem=_poiItem;
@property(nonatomic) unsigned long long docId; // @synthesize docId=_docId;
@property(retain, nonatomic) FTSBussinessCommonItem *commonItem; // @synthesize commonItem=_commonItem;
@property(retain, nonatomic) FTSBussinessContactItem *contactItem; // @synthesize contactItem=_contactItem;
@property(nonatomic) unsigned long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)init;

@end

