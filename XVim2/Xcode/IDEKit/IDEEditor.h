//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class DVTFindBar, DVTNotificationToken, DVTObservingToken, DVTScopeBarsManager, IDEEditorContext, IDEEditorDocument, IDEFileTextSettings, NSScrollView;
@protocol DVTTextFindable, IDEEditorDelegate;

@interface IDEEditor : IDEViewController
{
    DVTFindBar *_findBar;	// 104 = 0x68
    DVTNotificationToken *_documentDidChangeNotificationToken;	// 112 = 0x70
    DVTNotificationToken *_documentForNavBarStructureDidChangeNotificationToken;	// 120 = 0x78
    DVTObservingToken *_documentFileURLObservingToken;	// 128 = 0x80
    BOOL _discardsFindResultsWhenContentChanges;	// 136 = 0x88
    id <IDEEditorDelegate> _delegate;	// 144 = 0x90
    IDEEditorDocument *_document;	// 152 = 0x98
    IDEEditorDocument *_documentForNavBarStructure;	// 160 = 0xa0
    id <DVTTextFindable> _findableObject;	// 168 = 0xa8
    IDEFileTextSettings *_fileTextSettings;	// 176 = 0xb0
    IDEEditorContext *_editorContext;	// 184 = 0xb8
}

+ (BOOL)canProvideCurrentSelectedItems;
//- (void).cxx_destruct;
- (id)_getUndoManager:(BOOL)arg1;
- (id)_initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)createFindBar;
- (id)currentSelectedDocumentLocations;
- (id)currentSelectedItems;
@property(retain) id <IDEEditorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didSetupEditor;
@property BOOL discardsFindResultsWhenContentChanges; // @synthesize discardsFindResultsWhenContentChanges=_discardsFindResultsWhenContentChanges;
@property(retain) IDEEditorDocument *document; // @synthesize document=_document;
@property(retain, nonatomic) IDEEditorDocument *documentForNavBarStructure; // @synthesize documentForNavBarStructure=_documentForNavBarStructure;
@property(retain) IDEEditorContext *editorContext; // @synthesize editorContext=_editorContext;
- (void)editorContextDidHideFindBar;
@property(retain, nonatomic) IDEFileTextSettings *fileTextSettings; // @synthesize fileTextSettings=_fileTextSettings;
@property(readonly) DVTFindBar *findBar; // @synthesize findBar=_findBar;
@property(readonly) BOOL findBarSupported;
@property(retain, nonatomic) id <DVTTextFindable> findableObject; // @synthesize findableObject=_findableObject;
- (BOOL)hideGeniusCategory:(id)arg1 results:(id)arg2;
- (id)initUsingDefaultNib;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 document:(id)arg3;
- (void)invalidateFindBarResults;
@property(readonly, getter=isPrimaryEditor) BOOL primaryEditor;
@property(readonly) NSScrollView *mainScrollView;
- (id)navigableItemArchivableRepresentationForRepresentedObject:(id)arg1;
- (void)navigateToAnnotationWithRepresentedObject:(id)arg1 wantsIndicatorAnimation:(BOOL)arg2 exploreAnnotationRepresentedObject:(id)arg3;
- (void)primitiveInvalidate;
@property(readonly) BOOL providesOwnFindBar;
- (id)relatedMenuItemsForNavItem:(id)arg1;
- (id)representedObjectForGeniusResultsPreviousDocumentLocation:(id)arg1;
@property(readonly) DVTScopeBarsManager *scopeBarsManager;
- (void)selectDocumentLocations:(id)arg1;
- (void)setupContextMenuWithMenu:(id)arg1 withContext:(id)arg2;
- (void)setupEditorMenu:(id)arg1;
- (void)setupNavigateMenu:(id)arg1;
//- (void)shouldNavigateAway:(CDUnknownBlockType)arg1;
- (id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2;
- (void)takeFocus;
- (id)undoManager;
- (BOOL)wantsToSuppressEditorAreaFunctionBar;

@end

