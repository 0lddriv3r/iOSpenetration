//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MyFavoritesDB;

@interface FavoritesTagDB : NSObject
{
    MyFavoritesDB *_mmDB;
}

- (void).cxx_destruct;
- (BOOL)getTags:(id)arg1 byFavLocalId:(unsigned long)arg2;
- (BOOL)getDistinctTags:(id)arg1;
- (BOOL)deleteTagsByLocalFavId:(unsigned long)arg1;
- (BOOL)insertTag:(id)arg1 withFavLocalId:(unsigned long)arg2;
- (void)initDB:(id)arg1;
- (id)init;

@end
