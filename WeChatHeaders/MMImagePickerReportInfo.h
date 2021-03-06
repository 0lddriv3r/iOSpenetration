//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@interface MMImagePickerReportInfo : MMObject
{
    BOOL _isOriginalImage;
    BOOL _hasPreviewSelected;
    BOOL _hasOrderSelectedInPreviewAll;
    BOOL _hasClickSelectedInPreviewAll;
    BOOL _hasOrderSelectedInPreviewSelected;
    BOOL _hasClickSelectedInPreviewSelected;
    int _pickerScene;
    int _finalFinishScene;
    int _selectedPicCount;
    int _selectedGifCount;
    int _selectedVideoCount;
}

@property(nonatomic) BOOL hasClickSelectedInPreviewSelected; // @synthesize hasClickSelectedInPreviewSelected=_hasClickSelectedInPreviewSelected;
@property(nonatomic) BOOL hasOrderSelectedInPreviewSelected; // @synthesize hasOrderSelectedInPreviewSelected=_hasOrderSelectedInPreviewSelected;
@property(nonatomic) BOOL hasClickSelectedInPreviewAll; // @synthesize hasClickSelectedInPreviewAll=_hasClickSelectedInPreviewAll;
@property(nonatomic) BOOL hasOrderSelectedInPreviewAll; // @synthesize hasOrderSelectedInPreviewAll=_hasOrderSelectedInPreviewAll;
@property(nonatomic) BOOL hasPreviewSelected; // @synthesize hasPreviewSelected=_hasPreviewSelected;
@property(nonatomic) BOOL isOriginalImage; // @synthesize isOriginalImage=_isOriginalImage;
@property(nonatomic) int selectedVideoCount; // @synthesize selectedVideoCount=_selectedVideoCount;
@property(nonatomic) int selectedGifCount; // @synthesize selectedGifCount=_selectedGifCount;
@property(nonatomic) int selectedPicCount; // @synthesize selectedPicCount=_selectedPicCount;
@property(nonatomic) int finalFinishScene; // @synthesize finalFinishScene=_finalFinishScene;
@property(nonatomic) int pickerScene; // @synthesize pickerScene=_pickerScene;

@end

