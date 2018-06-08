//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class EditImageAttr, EditVideoAttr, NSMutableArray, NSString, WCUrl;

@interface WCMediaItem : NSObject <NSCoding>
{
    NSString *tid;
    NSString *mid;
    int type;
    int subType;
    NSString *title;
    NSString *desc;
    NSString *titlePattern;
    NSString *descPattern;
    NSString *userData;
    NSString *postName;
    NSString *source;
    NSMutableArray *previewUrls;
    WCUrl *dataUrl;
    WCUrl *lowBandUrl;
    WCUrl *attachUrl;
    WCUrl *attachThumbUrl;
    NSString *attachShareTitle;
    struct CGSize imgSize;
    int attachVideoTotalTime;
    BOOL likeFlag;
    int likeCount;
    NSMutableArray *likeUsers;
    int commentCount;
    NSMutableArray *commentUsers;
    int withCount;
    NSMutableArray *withUsers;
    int createTime;
    BOOL bSnsScene;
    BOOL bSupoortValidateMd5;
    BOOL bUseXorEncrypt;
    unsigned long long xorEncrpyKey;
    unsigned int predownloadPercent;
    unsigned int predownNetType;
    NSString *noPreDownloadRange;
    BOOL isAd;
    int index;
    int _entrance;
    NSString *_gameSnsVideoDataUrl;
    NSString *_gameSnsVideoThumbUrl;
}

@property(retain, nonatomic) NSString *gameSnsVideoThumbUrl; // @synthesize gameSnsVideoThumbUrl=_gameSnsVideoThumbUrl;
@property(retain, nonatomic) NSString *gameSnsVideoDataUrl; // @synthesize gameSnsVideoDataUrl=_gameSnsVideoDataUrl;
@property(nonatomic) int entrance; // @synthesize entrance=_entrance;
@property(retain, nonatomic) NSString *noPreDownloadRange; // @synthesize noPreDownloadRange;
@property(nonatomic) unsigned int predownNetType; // @synthesize predownNetType;
@property(nonatomic) unsigned int predownloadPercent; // @synthesize predownloadPercent;
@property(nonatomic) int index; // @synthesize index;
@property(nonatomic) BOOL isAd; // @synthesize isAd;
@property(nonatomic) unsigned long long xorEncrpyKey; // @synthesize xorEncrpyKey;
@property(nonatomic) BOOL bUseXorEncrypt; // @synthesize bUseXorEncrypt;
@property(nonatomic) BOOL bSupoortValidateMd5; // @synthesize bSupoortValidateMd5;
@property(nonatomic) BOOL bSnsScene; // @synthesize bSnsScene;
@property(nonatomic) int createTime; // @synthesize createTime;
@property(retain, nonatomic) NSMutableArray *withUsers; // @synthesize withUsers;
@property(nonatomic) int withCount; // @synthesize withCount;
@property(retain, nonatomic) NSMutableArray *commentUsers; // @synthesize commentUsers;
@property(nonatomic) int commentCount; // @synthesize commentCount;
@property(retain, nonatomic) NSMutableArray *likeUsers; // @synthesize likeUsers;
@property(nonatomic) int likeCount; // @synthesize likeCount;
@property(nonatomic) BOOL likeFlag; // @synthesize likeFlag;
@property(nonatomic) int attachVideoTotalTime; // @synthesize attachVideoTotalTime;
@property(nonatomic) struct CGSize imgSize; // @synthesize imgSize;
@property(retain, nonatomic) NSString *attachShareTitle; // @synthesize attachShareTitle;
@property(retain, nonatomic) WCUrl *attachThumbUrl; // @synthesize attachThumbUrl;
@property(retain, nonatomic) WCUrl *attachUrl; // @synthesize attachUrl;
@property(retain, nonatomic) WCUrl *lowBandUrl; // @synthesize lowBandUrl;
@property(retain, nonatomic) WCUrl *dataUrl; // @synthesize dataUrl;
@property(retain, nonatomic) NSMutableArray *previewUrls; // @synthesize previewUrls;
@property(retain, nonatomic) NSString *source; // @synthesize source;
@property(retain, nonatomic) NSString *postName; // @synthesize postName;
@property(retain, nonatomic) NSString *userData; // @synthesize userData;
@property(retain, nonatomic) NSString *descPattern; // @synthesize descPattern;
@property(retain, nonatomic) NSString *titlePattern; // @synthesize titlePattern;
@property(retain, nonatomic) NSString *desc; // @synthesize desc;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(nonatomic) int subType; // @synthesize subType;
@property(nonatomic) int type; // @synthesize type;
@property(retain, nonatomic) NSString *mid; // @synthesize mid;
@property(retain, nonatomic) NSString *tid; // @synthesize tid;
- (void).cxx_destruct;
- (BOOL)canBeginPreload;
- (BOOL)isPreloadVideoTask;
- (BOOL)isValid;
- (BOOL)savePreviewFromMedia:(id)arg1;
- (BOOL)saveSightPreviewFromMedia:(id)arg1;
- (BOOL)saveSightDataFromMedia:(id)arg1;
- (BOOL)saveDataFromMedia:(id)arg1;
- (BOOL)savePreviewFromData:(id)arg1;
- (BOOL)saveVideoDataFromData:(id)arg1 filePath:(id)arg2 continueMode:(BOOL)arg3;
- (BOOL)saveSightDataFromData:(id)arg1;
- (BOOL)saveDataFromData:(id)arg1;
- (BOOL)savePreviewFromPath:(id)arg1;
- (BOOL)saveSightDataFromPath:(id)arg1;
- (BOOL)saveDataFromPath:(id)arg1;
- (BOOL)hasPreview;
- (BOOL)hasAttachVideo;
- (BOOL)hasSight;
- (BOOL)hasData;
- (id)imageOfSize:(int)arg1;
- (id)comparativePathForPreview;
- (id)getThumbUrl;
- (id)tmpPathForPreview;
- (id)pathForPreview;
- (id)pathForTempAttachVideoData;
- (id)pathForAttachVideoData;
- (BOOL)createTempSightPath;
- (id)tempPathForSightData;
- (id)pathForSightData;
- (id)tmpPathForData;
- (id)pathForData;
- (id)hashPathForString:(id)arg1;
- (struct CLLocationCoordinate2D)locationForData;
- (id)cityForData;
- (id)videoStreamForData;
- (id)voiceStreamForData;
- (int)mediaType;
- (id)mediaID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
@property(retain, nonatomic) EditVideoAttr *editVideoAttr;
@property(retain, nonatomic) EditImageAttr *editImageAttr;
@property(nonatomic) BOOL isEdited;

@end
