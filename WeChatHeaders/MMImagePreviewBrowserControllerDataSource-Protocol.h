//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMAssetInfo, NSMutableArray;

@protocol MMImagePreviewBrowserControllerDataSource <NSObject>
- (unsigned int)previewAssetTotal;
- (MMAssetInfo *)previewAssetInfoAtIndex:(unsigned int)arg1;
- (int)previewIndexForAssetInfo:(MMAssetInfo *)arg1;
- (NSMutableArray *)selectedAssetInfosForPreview;
- (BOOL)isPreviewSelectedOnly;
@end

