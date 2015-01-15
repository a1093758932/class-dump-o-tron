//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ListViewController.h"

#import "UIScrollViewDelegate.h"
#import "UISearchBarDelegate.h"
#import "UISearchResultsUpdating.h"

@class CalendarModel, NSString, NSTimer, UISearchBar;

@interface SearchResultsViewController : ListViewController <UIScrollViewDelegate, UISearchResultsUpdating, UISearchBarDelegate>
{
    _Bool _navigationControllerAtTopOfStack;
    NSTimer *_timer;
    _Bool _cellsShouldShowCalendarColor;
    UISearchBar *_searchBar;
}

@property(nonatomic) _Bool cellsShouldShowCalendarColor; // @synthesize cellsShouldShowCalendarColor=_cellsShouldShowCalendarColor;
@property(nonatomic) __weak UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (void).cxx_destruct;
- (void)_setSearchString:(id)arg1;
- (void)_refreshView;
- (void)_searchResultsUpdated:(id)arg1;
- (void)_eventStoreChanged:(id)arg1;
- (void)eventViewController:(id)arg1 requestsDismissalOfEditViewController:(id)arg2;
- (void)eventViewController:(id)arg1 requestsDisplayOfEditViewController:(id)arg2 animated:(_Bool)arg3;
- (_Bool)eventViewDelegateShouldHandlePresentationOfEditViewController:(id)arg1;
- (_Bool)eventViewControllerShouldHideInlineEditButton;
- (struct CGRect)_searchBar:(id)arg1 proposedSearchFieldFrame:(struct CGRect)arg2;
- (void)cancelTimer;
- (void)beginSearch:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (long long)positionForBar:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (_Bool)shouldUpdateModelSelectedDate;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)backButtonTitleForEventDetails;
- (void)scrollToDate:(id)arg1 animated:(_Bool)arg2;
- (_Bool)showFilteredData;
- (id)noContentStringForListTableView:(id)arg1;
- (void)_updateTableAlpha;
- (void)_setContentInsets;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) CalendarModel *model;
@property(readonly) Class superclass;

@end
