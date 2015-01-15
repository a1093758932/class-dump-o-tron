//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthKitUI/HKEmergencyCardTableItem.h>

#import "HKMedicalIDEditorCellEditDelegate.h"
#import "HKMedicalIDEditorCellHeightChangeDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class HKMedicalIDEditorNameAndPhotoCell, NSString;

@interface HKEmergencyCardNameAndPictureTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorCellEditDelegate, HKMedicalIDEditorCellHeightChangeDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIActionSheetDelegate>
{
    HKMedicalIDEditorNameAndPhotoCell *_cell;
    _Bool _showingTakePhotoButton;
    _Bool _showingDeletePhotoButton;
    id <HKEmergencyCardRowHeightChangeDelegate> _rowHeightChangeDelegate;
}

@property(nonatomic) __weak id <HKEmergencyCardRowHeightChangeDelegate> rowHeightChangeDelegate; // @synthesize rowHeightChangeDelegate=_rowHeightChangeDelegate;
- (void).cxx_destruct;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)_editPhotoTapped:(id)arg1;
- (void)medicalIDEditorCellDidChangeValue:(id)arg1;
- (void)setData:(id)arg1;
- (void)commitEditing;
- (void)medicalIDEditorCell:(id)arg1 didChangeHeight:(double)arg2 keepRectVisible:(struct CGRect)arg3 inView:(id)arg4;
- (double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (id)_cell;
- (id)title;
- (id)initInEditMode:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
