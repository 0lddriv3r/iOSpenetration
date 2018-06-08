//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "IFavLocationMgrExt.h"

@class NSMutableArray, NSString;

@interface FavSearchHelper : MMObject <IFavLocationMgrExt>
{
    id <FavSearchHelperDelegate> _delegate;
    unsigned long _currentEventID;
    NSMutableArray *_arrLocItem;
}

+ (id)convertFavDataToSimpleInfo:(id)arg1 inItem:(id)arg2;
+ (id)aggregatePicSearchResult:(id)arg1;
+ (id)aggregateSearchResult:(id)arg1 withSearchText:(id)arg2 withSearchType:(unsigned long)arg3 withTagList:(id)arg4;
+ (void)filterSearchResult:(id)arg1 withSearchText:(id)arg2 withSearchType:(unsigned long)arg3 withTagList:(id)arg4;
+ (void)preFilterFileSearchResult:(id)arg1 withSearchType:(unsigned long)arg2;
@property(retain, nonatomic) NSMutableArray *arrLocItem; // @synthesize arrLocItem=_arrLocItem;
@property(nonatomic) unsigned long currentEventID; // @synthesize currentEventID=_currentEventID;
@property(nonatomic) __weak id <FavSearchHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onFindFavAddress:(id)arg1 eventID:(unsigned long)arg2;
- (void)requestAddressFromLocation:(id)arg1;
- (void)getAddressInQueue;
- (void)getFavItemsAddress:(id)arg1;
- (void)getAddressWithLocation:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
