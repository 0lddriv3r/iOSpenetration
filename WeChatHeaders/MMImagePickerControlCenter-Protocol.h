//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMImagePickerReportInfo, NSArray, NSDictionary, NSString, SightDraft;

@protocol MMImagePickerControlCenter <NSObject>
@property(nonatomic) BOOL isOriginalImage;
@property(nonatomic) int previewEditScene;
@property(nonatomic) BOOL isEditMode;
@property(retain, nonatomic) NSString *currentAlbum;
@property(retain, nonatomic) NSString *finishWording;
@property(nonatomic) int compressType;
@property(retain, nonatomic) NSArray *selectedImageAssets;
@property(retain, nonatomic) NSArray *selectedImageURLs;
@property(nonatomic) int maxImageCount;
@property(nonatomic) BOOL canHybridSendAsset;
@property(nonatomic) unsigned int maxGifDataSize;
@property(nonatomic) BOOL canSendGif;
@property(nonatomic) BOOL showPreviewView;
@property(nonatomic) BOOL needThumbImage;
@property(nonatomic) BOOL canSendMultiImage;
@property(nonatomic) BOOL isNotShowVideoSizeAlertView;
@property(nonatomic) BOOL isOnlyShowVideoMessage;
@property(nonatomic) BOOL canSendVideoMessage;
@property(nonatomic) BOOL canSendOriginImage;
- (void)selectedSight:(SightDraft *)arg1;
- (void)selectedVideo:(NSDictionary *)arg1;
- (void)selectedAssets:(NSArray *)arg1;
- (void)cancelImagePicker;

@optional
- (void)reportPicerReportInfo;
- (MMImagePickerReportInfo *)pickerReportInfo;
- (int)getPickerScene;
- (void)reportPreviewCount;
- (void)increasePreviewCount;
@end
