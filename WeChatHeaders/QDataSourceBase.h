//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QDataSourceProtocol.h"

@class NSString;

@interface QDataSourceBase : NSObject <QDataSourceProtocol>
{
    id <QDataCacheProtocol> _dataCache;
    NSString *_version;
    NSString *_styleId;
    unsigned int _mapLanguage;
}

@property(nonatomic) unsigned int mapLanguage; // @synthesize mapLanguage=_mapLanguage;
@property(copy, nonatomic) NSString *styleId; // @synthesize styleId=_styleId;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) id <QDataCacheProtocol> dataCache; // @synthesize dataCache=_dataCache;
- (void).cxx_destruct;
- (id)initWithDataCache:(id)arg1;
- (int)tileType;
- (BOOL)shouldCollectRequestTime;
- (id)tileImage:(CDStruct_6f177a0f)arg1 needFresh:(char *)arg2;
- (BOOL)putCacheData:(id)arg1;
- (id)getCacheData:(id)arg1;
- (id)tileData:(CDStruct_6f177a0f)arg1;
- (id)tileURL:(CDStruct_6f177a0f)arg1 info:(id)arg2;
- (id)tilePath:(CDStruct_6f177a0f)arg1 info:(id)arg2;
@property(readonly, nonatomic) int maxZoomLevel;
@property(readonly, nonatomic) int minZoomLevel;
@property(readonly, nonatomic) float tileSize;
- (BOOL)isUseCurrentData:(id)arg1 for:(id)arg2;
- (BOOL)isValidForTileData:(id)arg1;
- (BOOL)isValidForTile:(CDStruct_6f177a0f)arg1;
- (void)clearDataCache:(BOOL)arg1;
@property(readonly, nonatomic) NSString *lauguageCode;
- (void)throwNotificationForError:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

