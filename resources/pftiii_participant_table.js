var notApplicableType = $.fn.dataTable.absoluteOrderNumber([
{
	value: "Archived",
	position: "bottom"
},
{
	value: "Retired",
	position: "bottom"
},
{
	value: "NA",
	position: "bottom"
}]);
$(document).ready(function()
{
	$("#pftiii-table").DataTable(
	{
		paging: !1,
		scrollCollapse: !0,
		scrollY: "300px",
		dom: "Bfrtip",
		buttons: ["colvis", "csvHtml5"],
		order: [
			[5, "desc"]
		],
		columnDefs: [
		{
			targets: 5,
			render: DataTable.render.datetime("DD MMM YYYY")
		},
		{
			targets: [0, 1, 2, 5, 6, 7, 8, 11, 14, 17, 21],
			visible: !0
		},
		{
			targets: "_all",
			visible: !1
		},
		{
			targets: [0, 1, 2, 3, 6, 7],
			type: "string"
		},
		{
			targets: 5,
			type: "date"
		},
		{
			targets: "_all",
			type: notApplicableType
		}],
		fixedColumns:
		{
			left: 1
		},
		responsive:
		{
			details:
			{
				display: $.fn.dataTable.Responsive.display.modal(
				{
					header: function(e)
					{
						return "Details for " + e.data()[0]
					}
				}),
				renderer: $.fn.dataTable.Responsive.renderer.tableAll(
				{
					tableClass: "ui table"
				})
			}
		}
	})
});
