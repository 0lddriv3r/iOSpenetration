//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface EmoticonStoreSession : MMObject
{
    NSMutableDictionary *m_itemList;
    NSMutableArray *m_downloadingItemList;
}

@property(retain, nonatomic) NSMutableArray *m_downloadingItemList; // @synthesize m_downloadingItemList;
@property(retain, nonatomic) NSMutableDictionary *m_itemList; // @synthesize m_itemList;
- (void).cxx_destruct;
- (id)megerFromArray:(id)arg1 IsForceUpdateTagAndIntroduce:(BOOL)arg2;
- (id)megerFromArray:(id)arg1;
- (id)addItem:(id)arg1 ForProductID:(id)arg2;
- (id)findItemByProductID:(id)arg1;
- (id)init;

@end
